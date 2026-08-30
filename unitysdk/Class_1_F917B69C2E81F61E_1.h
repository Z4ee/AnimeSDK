#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA3DCD5934CBE599;

#define CLASS_1_F917B69C2E81F61E_1_GET_BATTLEEVENTSPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x19A9C2C0)
#define CLASS_1_F917B69C2E81F61E_1_GET_ID_OFFSET UNITYSDK_OFFSET(0x19A9C280)
#define CLASS_1_F917B69C2E81F61E_1_GET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x19A9C2A0)
#define CLASS_1_F917B69C2E81F61E_1_SET_BATTLEEVENTSPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x19A9C2D0)
#define CLASS_1_F917B69C2E81F61E_1_SET_ID_OFFSET UNITYSDK_OFFSET(0x19A9C290)
#define CLASS_1_F917B69C2E81F61E_1_SET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0x19A9C2B0)
#define CLASS_1_F917B69C2E81F61E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9C2E0)

inline static constexpr unsigned int Class_1_F917B69C2E81F61E_1_TypeDefinitionIndex = 79684;

class Class_1_F917B69C2E81F61E_1 : public ::System::Object
{
public:
	::Class_1_FA3DCD5934CBE599* _BattleEventSpecialMarkState_k__BackingField; // 0x10
	::Class_1_FA3DCD5934CBE599* _SpecialMarkState_k__BackingField; // 0x18
	::System::UInt32 _ID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1_SET_ID_OFFSET))(this, a1);
	}

	::Class_1_FA3DCD5934CBE599* get_SpecialMarkState()
	{
		return ((::Class_1_FA3DCD5934CBE599*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1_GET_SPECIALMARKSTATE_OFFSET))(this);
	}

	::System::Void set_SpecialMarkState(::Class_1_FA3DCD5934CBE599* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA3DCD5934CBE599*))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1_SET_SPECIALMARKSTATE_OFFSET))(this, a1);
	}

	::Class_1_FA3DCD5934CBE599* get_BattleEventSpecialMarkState()
	{
		return ((::Class_1_FA3DCD5934CBE599*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1_GET_BATTLEEVENTSPECIALMARKSTATE_OFFSET))(this);
	}

	::System::Void set_BattleEventSpecialMarkState(::Class_1_FA3DCD5934CBE599* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA3DCD5934CBE599*))((::PBYTE)hIl2Cpp + CLASS_1_F917B69C2E81F61E_1_SET_BATTLEEVENTSPECIALMARKSTATE_OFFSET))(this, a1);
	}
};
