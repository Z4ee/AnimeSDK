#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

class Class_1_640990790F67F83E;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectEnhanceSelectConfig; }
namespace RPG::Client { class GridFightTraitEnhanceChooseAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BB0CA80)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0x1BB0CA60)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ISGETALL_OFFSET UNITYSDK_OFFSET(0x1BB0CA10)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_OPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1BB0C9C0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1BB0C970)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB0C730)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0x1BB0C7F0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET UNITYSDK_OFFSET(0x1BB0C790)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1BB0CA90)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0x1BB0CA70)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0C310)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0x1BB0C840)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__INITENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0x1BB0C4E0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0x1BB0CAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseEffect_TypeDefinitionIndex = 65457;

	class GridFightTraitEnhanceChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* _EnhanceConfigList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceIdList_k__BackingField; // 0x38
		::RPG::Client::GridFightTraitEnhanceChooseAction* _Action_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::Class_1_640990790F67F83E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_640990790F67F83E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void SelectEnhance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET))(this, a1);
		}

		::System::Void RegisterAction(::RPG::Client::GridFightTraitEnhanceChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEnhanceChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET))(this, a1);
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

		::System::Void set_EnhanceIdList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitEnhanceChooseAction* get_Action()
		{
			return ((::RPG::Client::GridFightTraitEnhanceChooseAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightTraitEnhanceChooseAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitEnhanceChooseAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get__OptionIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectEnhanceSelectConfig* __GetCurrentOptionConfigList_b__4_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET))(this, a1);
		}
	};
}
