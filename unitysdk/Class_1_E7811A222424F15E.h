#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_488;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterAnimZone; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E7811A222424F15E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F86780)
#define CLASS_1_E7811A222424F15E_GET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x8F882B0)
#define CLASS_1_E7811A222424F15E_GET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x8F882D0)
#define CLASS_1_E7811A222424F15E_GET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x8F882F0)
#define CLASS_1_E7811A222424F15E_METHOD_1_00D9C214C63942A7_OFFSET UNITYSDK_OFFSET(0x8F87A10)
#define CLASS_1_E7811A222424F15E_METHOD_1_0581090195E9C81F_OFFSET UNITYSDK_OFFSET(0x8F87E20)
#define CLASS_1_E7811A222424F15E_METHOD_1_07BB45288DFF8852_OFFSET UNITYSDK_OFFSET(0x8F88010)
#define CLASS_1_E7811A222424F15E_METHOD_1_11D5322717FDFD9D_OFFSET UNITYSDK_OFFSET(0x8F85CC0)
#define CLASS_1_E7811A222424F15E_METHOD_1_132F118CDF0E4ABA_OFFSET UNITYSDK_OFFSET(0x8F867D0)
#define CLASS_1_E7811A222424F15E_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x8F877A0)
#define CLASS_1_E7811A222424F15E_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x8F87B60)
#define CLASS_1_E7811A222424F15E_METHOD_1_387EA1BE4F9FC1D2_OFFSET UNITYSDK_OFFSET(0x8F88070)
#define CLASS_1_E7811A222424F15E_METHOD_1_3C1DA94A81B1BD0B_OFFSET UNITYSDK_OFFSET(0x8F87F00)
#define CLASS_1_E7811A222424F15E_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8F87DD0)
#define CLASS_1_E7811A222424F15E_METHOD_1_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x8F87C60)
#define CLASS_1_E7811A222424F15E_METHOD_1_75AD7F4D4C3BB765_OFFSET UNITYSDK_OFFSET(0x8F86320)
#define CLASS_1_E7811A222424F15E_METHOD_1_8B6CCAB22CD6DA6F_OFFSET UNITYSDK_OFFSET(0x8F869B0)
#define CLASS_1_E7811A222424F15E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8F87E80)
#define CLASS_1_E7811A222424F15E_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x8F878D0)
#define CLASS_1_E7811A222424F15E_METHOD_1_FE327FD0760E1514_1_OFFSET UNITYSDK_OFFSET(0x8F87A70)
#define CLASS_1_E7811A222424F15E_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x8F868B0)
#define CLASS_1_E7811A222424F15E_SET_CHARACTERANIMZONEREF_OFFSET UNITYSDK_OFFSET(0x8F882C0)
#define CLASS_1_E7811A222424F15E_SET_CURRENTLOGICSTATETYPE_OFFSET UNITYSDK_OFFSET(0x8F882E0)
#define CLASS_1_E7811A222424F15E_SET_HASMOVESINCETELEPORT_OFFSET UNITYSDK_OFFSET(0x8F88300)
#define CLASS_1_E7811A222424F15E__CTOR_OFFSET UNITYSDK_OFFSET(0x8F85BC0)

inline static constexpr unsigned int Class_1_E7811A222424F15E_TypeDefinitionIndex = 51499;

class Class_1_E7811A222424F15E : public ::System::Object
{
public:
	// static const ::System::Single Field_1_9; // 0x0
	::RPG::GameCore::GameEntity* Field_1_3; // 0x10
	::Class_0_16E4307DCC419505_488* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureAnimStateType, ::Class_0_16E4307DCC419505_488*>* Field_1_6; // 0x20
	::RPG::GameCore::AdventureCharacterController* Field_1_4; // 0x28
	::RPG::GameCore::CharacterAnimZone* _CharacterAnimZoneRef_k__BackingField; // 0x30
	::System::Boolean _HasMoveSinceTeleport_k__BackingField; // 0x38
	::System::Boolean Field_1_7; // 0x39
	::RPG::GameCore::AdventureAnimStateType _CurrentLogicStateType_k__BackingField; // 0x3C
	::System::Single Field_1_8; // 0x40

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::RPG::GameCore::CharacterAnimZone* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_132F118CDF0E4ABA()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_132F118CDF0E4ABA_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_FE327FD0760E1514_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_00D9C214C63942A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_00D9C214C63942A7_OFFSET))(this);
	}

	::System::Void Method_1_75AD7F4D4C3BB765(::RPG::GameCore::AdventureAnimStateType a1, ::System::Boolean a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType, ::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_75AD7F4D4C3BB765_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0581090195E9C81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_0581090195E9C81F_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_11D5322717FDFD9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_11D5322717FDFD9D_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void Method_1_8B6CCAB22CD6DA6F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_8B6CCAB22CD6DA6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C1DA94A81B1BD0B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_3C1DA94A81B1BD0B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07BB45288DFF8852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_07BB45288DFF8852_OFFSET))(this);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Boolean Method_1_387EA1BE4F9FC1D2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_METHOD_1_387EA1BE4F9FC1D2_OFFSET))(this);
	}

	::RPG::GameCore::CharacterAnimZone* get_CharacterAnimZoneRef()
	{
		return ((::RPG::GameCore::CharacterAnimZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_GET_CHARACTERANIMZONEREF_OFFSET))(this);
	}

	::System::Void set_CharacterAnimZoneRef(::RPG::GameCore::CharacterAnimZone* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterAnimZone*))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_SET_CHARACTERANIMZONEREF_OFFSET))(this, value);
	}

	::RPG::GameCore::AdventureAnimStateType get_CurrentLogicStateType()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_GET_CURRENTLOGICSTATETYPE_OFFSET))(this);
	}

	::System::Void set_CurrentLogicStateType(::RPG::GameCore::AdventureAnimStateType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_SET_CURRENTLOGICSTATETYPE_OFFSET))(this, value);
	}

	::System::Boolean get_HasMoveSinceTeleport()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_GET_HASMOVESINCETELEPORT_OFFSET))(this);
	}

	::System::Void set_HasMoveSinceTeleport(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E7811A222424F15E_SET_HASMOVESINCETELEPORT_OFFSET))(this, value);
	}
};
