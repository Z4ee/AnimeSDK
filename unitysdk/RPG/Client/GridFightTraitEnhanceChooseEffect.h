#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectEnhanceSelectConfig; }
namespace RPG::Client { class GridFightTraitEnhanceChooseAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xA5BBA90)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xA5BBA70)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ISGETALL_OFFSET UNITYSDK_OFFSET(0xA5BBA50)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_OPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA5BBA40)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xA5BBA20)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5BB850)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xA5BB910)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET UNITYSDK_OFFSET(0xA5BB8B0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xA5BBAA0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xA5BBA80)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BB510)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xA5BB960)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__INITENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0xA5BB6B0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xA5BBAB0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xA5BBB60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseEffect_TypeDefinitionIndex = 60208;

	class GridFightTraitEnhanceChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::Client::GridFightTraitEnhanceChooseAction* _Action_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* _EnhanceConfigList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceIdList_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* effect)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET))(this, effect);
		}

		::System::Void SelectEnhance(::System::UInt32 optionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET))(this, optionID);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightTraitEnhanceChooseAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEnhanceChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET))(this, action);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* _GetCurrentOptionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET))(this);
		}

		::System::Void _InitEnhanceConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__INITENHANCECONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* get_OptionConfigList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_OPTIONCONFIGLIST_OFFSET))(this);
		}

		::System::Boolean get_IsGetAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ISGETALL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhanceIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ENHANCEIDLIST_OFFSET))(this);
		}

		::System::Void set_EnhanceIdList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitEnhanceChooseAction* get_Action()
		{
			return ((::RPG::Client::GridFightTraitEnhanceChooseAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightTraitEnhanceChooseAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEnhanceChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get__OptionIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectEnhanceSelectConfig* __GetCurrentOptionConfigList_b__4_0(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET))(this, id);
		}

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_8271AFF79E02658D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, P0);
		}
	};
}
