#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournModifierForbidOpenDoorReason.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_89;

#define CLASS_1_9163324AF6560D8D_GET_FORBIDREASON_OFFSET UNITYSDK_OFFSET(0x9554EF0)
#define CLASS_1_9163324AF6560D8D_GET_ISCANOPENDOOR_OFFSET UNITYSDK_OFFSET(0x9554ED0)
#define CLASS_1_9163324AF6560D8D_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x9554E70)
#define CLASS_1_9163324AF6560D8D_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0x9554DD0)
#define CLASS_1_9163324AF6560D8D_SET_FORBIDREASON_OFFSET UNITYSDK_OFFSET(0x9554F00)
#define CLASS_1_9163324AF6560D8D_SET_ISCANOPENDOOR_OFFSET UNITYSDK_OFFSET(0x9554EE0)
#define CLASS_1_9163324AF6560D8D__CTOR_OFFSET UNITYSDK_OFFSET(0x9554E60)

inline static constexpr unsigned int Class_1_9163324AF6560D8D_TypeDefinitionIndex = 62394;

class Class_1_9163324AF6560D8D : public ::System::Object
{
public:
	::System::Boolean _IsCanOpenDoor_k__BackingField; // 0x10
	::RPG::GameCore::RogueTournModifierForbidOpenDoorReason _ForbidReason_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D__CTOR_OFFSET))(this);
	}

	static ::Class_1_9163324AF6560D8D* Method_1_250203490119AF47(::Class_1_21C7581DFE99F091_89* a1)
	{
		return ((::Class_1_9163324AF6560D8D*(*)(::Class_1_21C7581DFE99F091_89*))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_21C7581DFE99F091_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_89*))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCanOpenDoor()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D_GET_ISCANOPENDOOR_OFFSET))(this);
	}

	::System::Void set_IsCanOpenDoor(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D_SET_ISCANOPENDOOR_OFFSET))(this, value);
	}

	::RPG::GameCore::RogueTournModifierForbidOpenDoorReason get_ForbidReason()
	{
		return ((::RPG::GameCore::RogueTournModifierForbidOpenDoorReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D_GET_FORBIDREASON_OFFSET))(this);
	}

	::System::Void set_ForbidReason(::RPG::GameCore::RogueTournModifierForbidOpenDoorReason value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournModifierForbidOpenDoorReason))((::PBYTE)hIl2Cpp + CLASS_1_9163324AF6560D8D_SET_FORBIDREASON_OFFSET))(this, value);
	}
};
