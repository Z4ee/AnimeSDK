#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_1486_AttributeState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_117;
namespace RPG::Client::MechCraft::View { class MechCraftAttributeRadarDimensionControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xD5E3EB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_STATE_OFFSET UNITYSDK_OFFSET(0xD5E5020)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_METHOD_5_D2764D4B3DC2AE66_OFFSET UNITYSDK_OFFSET(0xD5E5060)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xD5E5260)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xD5E24F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_STATE_OFFSET UNITYSDK_OFFSET(0xD5E3D40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD5E5350)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftAttributeRadarDimensionControl_TypeDefinitionIndex = 79806;

	class MechCraftAttributeRadarDimensionControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_117* JLDGIKMAPGK; // 0x18
		::System::Nullable_1<::Class_0_16E4307DCC419505_1486_AttributeState> DLNIGFGLPLJ; // 0x20
		::System::String* OFCNNJKHMDJ; // 0x28
		::RPG::Client::MechCraft::View::MechCraftAttributeRadarDimensionControlBinder* _Binder; // 0x30
		::System::String* _StateNonTargetDefault; // 0x38
		::System::String* _StateNonTargetWronglyPeaked; // 0x40
		::System::String* _StateNonTargetAboveMaxLevel; // 0x48
		::System::String* _StateTargetNotReached; // 0x50
		::System::String* _StateTargetJustReached; // 0x58
		::System::String* _StateTargetMoreThanEnough; // 0x60
		::System::String* _StateTargetAboveMaxLevel; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_117* get_Attribute()
		{
			return ((::Class_0_16E4307DCC419505_117*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_Attribute(::Class_0_16E4307DCC419505_117* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_117*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_ATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Class_0_16E4307DCC419505_1486_AttributeState> get_State()
		{
			return ((::System::Nullable_1<::Class_0_16E4307DCC419505_1486_AttributeState>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::Nullable_1<::Class_0_16E4307DCC419505_1486_AttributeState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Class_0_16E4307DCC419505_1486_AttributeState>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_SET_STATE_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_D2764D4B3DC2AE66(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTATTRIBUTERADARDIMENSIONCONTROL_METHOD_5_D2764D4B3DC2AE66_OFFSET))(this, a1);
		}
	};
}
