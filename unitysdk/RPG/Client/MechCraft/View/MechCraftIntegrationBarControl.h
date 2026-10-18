#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_127;
namespace RPG::Client::MechCraft::View { class MechCraftIntegrationBarControlBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0xD63CBA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0xD63CB80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0xD63CB60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_2411EE76CD9D54E5_OFFSET UNITYSDK_OFFSET(0xD63E0F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_8CAFD081CFB2A7A7_OFFSET UNITYSDK_OFFSET(0xD63D3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_9467E3D97F9A80BF_OFFSET UNITYSDK_OFFSET(0xD63CBE0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_94BBD7BC159DFBA8_OFFSET UNITYSDK_OFFSET(0xD63CC60)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_A60DF096A5A7BB89_OFFSET UNITYSDK_OFFSET(0xD63D710)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_CURRENTPERCENT_OFFSET UNITYSDK_OFFSET(0xD62AE10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_DIVISIONLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0xD63CB90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0xD63CB70)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD63E900)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftIntegrationBarControl_TypeDefinitionIndex = 79816;

	class MechCraftIntegrationBarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftIntegrationBarControlBinder* _Binder; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _States; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* _SwitchOnEvent; // 0x28
		::System::String* _AnimEventSwitch; // 0x30
		::System::Int32 _MaxPercent_k__BackingField; // 0x38
		::Class_0_16E4307DCC419505_127* _DivisionLevelUpRule_k__BackingField; // 0x40
		::System::Nullable_1<::System::Int32> ACOBAMHHFMI; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_MAXPERCENT_OFFSET))(this);
		}

		::System::Void set_MaxPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_MAXPERCENT_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_127* get_DivisionLevelUpRule()
		{
			return ((::Class_0_16E4307DCC419505_127*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_DIVISIONLEVELUPRULE_OFFSET))(this);
		}

		::System::Void set_DivisionLevelUpRule(::Class_0_16E4307DCC419505_127* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_127*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_DIVISIONLEVELUPRULE_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_GET_CURRENTPERCENT_OFFSET))(this);
		}

		::System::Void set_CurrentPercent(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_SET_CURRENTPERCENT_OFFSET))(this, a1);
		}

		::System::Void Method_5_9467E3D97F9A80BF(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_9467E3D97F9A80BF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A60DF096A5A7BB89(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_A60DF096A5A7BB89_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_94BBD7BC159DFBA8(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_94BBD7BC159DFBA8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_8CAFD081CFB2A7A7(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_8CAFD081CFB2A7A7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2411EE76CD9D54E5(::System::Nullable_1<::System::Int32> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTINTEGRATIONBARCONTROL_METHOD_5_2411EE76CD9D54E5_OFFSET))(this, a1, a2);
		}
	};
}
