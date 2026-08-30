#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_B1B59A99726AE7F9_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x16588930)
#define CLASS_2_B1B59A99726AE7F9_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x165888E0)
#define CLASS_2_B1B59A99726AE7F9_GET_BYDEVICESPOTCHANGE_OFFSET UNITYSDK_OFFSET(0x165888C0)
#define CLASS_2_B1B59A99726AE7F9_GET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x16588880)
#define CLASS_2_B1B59A99726AE7F9_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x165888A0)
#define CLASS_2_B1B59A99726AE7F9_METHOD_2_9909EADCCE01D376_OFFSET UNITYSDK_OFFSET(0x16588820)
#define CLASS_2_B1B59A99726AE7F9_SET_BYDEVICESPOTCHANGE_OFFSET UNITYSDK_OFFSET(0x165888D0)
#define CLASS_2_B1B59A99726AE7F9_SET_STATETYPE_OFFSET UNITYSDK_OFFSET(0x16588890)
#define CLASS_2_B1B59A99726AE7F9_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x165888B0)
#define CLASS_2_B1B59A99726AE7F9__CTOR_OFFSET UNITYSDK_OFFSET(0x16588980)

inline static constexpr unsigned int Class_2_B1B59A99726AE7F9_TypeDefinitionIndex = 56853;

class Class_2_B1B59A99726AE7F9 : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* OFHDAHHPNPJ; // 0x18
	::System::Boolean _Visible_k__BackingField; // 0x20
	::System::Boolean _ByDeviceSpotChange_k__BackingField; // 0x21
	::RPG::GameCore::EraStateType _StateType_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9__CTOR_OFFSET))(this);
	}

	::Class_2_B1B59A99726AE7F9* Method_2_9909EADCCE01D376(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EraStateType a2, ::System::Boolean a3)
	{
		return ((::Class_2_B1B59A99726AE7F9*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EraStateType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_METHOD_2_9909EADCCE01D376_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::EraStateType get_StateType()
	{
		return ((::RPG::GameCore::EraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_GET_STATETYPE_OFFSET))(this);
	}

	::System::Void set_StateType(::RPG::GameCore::EraStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraStateType))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_SET_STATETYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_Visible()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_GET_VISIBLE_OFFSET))(this);
	}

	::System::Void set_Visible(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_SET_VISIBLE_OFFSET))(this, a1);
	}

	::System::Boolean get_ByDeviceSpotChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_GET_BYDEVICESPOTCHANGE_OFFSET))(this);
	}

	::System::Void set_ByDeviceSpotChange(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_SET_BYDEVICESPOTCHANGE_OFFSET))(this, a1);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1B59A99726AE7F9_GETEVENTTYPE_OFFSET))(this);
	}
};
