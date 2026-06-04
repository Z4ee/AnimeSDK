#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

class Class_1_8271AFF79E02658D;
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitEffectEnhanceSelectConfig; }
namespace RPG::Client { class GridFightTraitEnhanceChooseAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xBC2DCC0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xBC2DCA0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_ISGETALL_OFFSET UNITYSDK_OFFSET(0xBC2DC80)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET_OPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xBC2DC70)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_GET__OPTIONIDLIST_OFFSET UNITYSDK_OFFSET(0xBC2DC50)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC2DA60)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_REGISTERACTION_OFFSET UNITYSDK_OFFSET(0xBC2DB20)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SELECTENHANCE_OFFSET UNITYSDK_OFFSET(0xBC2DAC0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xBC2DCD0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_SET_ENHANCEIDLIST_OFFSET UNITYSDK_OFFSET(0xBC2DCB0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2D670)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__GETCURRENTOPTIONCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xBC2DB70)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__INITENHANCECONFIG_OFFSET UNITYSDK_OFFSET(0xBC2D810)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___GETCURRENTOPTIONCONFIGLIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xBC2DCE0)
#define RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBC2DDA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEnhanceChooseEffect_TypeDefinitionIndex = 61143;

	class GridFightTraitEnhanceChooseEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceIdList_k__BackingField; // 0x30
		::RPG::Client::GridFightTraitEnhanceChooseAction* _Action_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitEffectEnhanceSelectConfig*>* _EnhanceConfigList; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT_ONUPDATE_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnUpdate(::Class_1_8271AFF79E02658D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8271AFF79E02658D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITENHANCECHOOSEEFFECT___IFIXBASEPROXY_ONUPDATE_OFFSET))(this, a1);
		}
	};
}
