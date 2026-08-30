#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA3DCD5934CBE599;

#define CLASS_1_F917B69C2E81F61E_1_GET_BATTLEEVENTSPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xBA8BE80)
#define CLASS_1_F917B69C2E81F61E_1_GET_ID_OFFSET UNITYSDK_OFFSET(0xBA8BE40)
#define CLASS_1_F917B69C2E81F61E_1_GET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xBA8BE60)
#define CLASS_1_F917B69C2E81F61E_1_SET_BATTLEEVENTSPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xBA8BE90)
#define CLASS_1_F917B69C2E81F61E_1_SET_ID_OFFSET UNITYSDK_OFFSET(0xBA8BE50)
#define CLASS_1_F917B69C2E81F61E_1_SET_SPECIALMARKSTATE_OFFSET UNITYSDK_OFFSET(0xBA8BE70)
#define CLASS_1_F917B69C2E81F61E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA8BEA0)

inline static constexpr unsigned int Class_1_F917B69C2E81F61E_1_TypeDefinitionIndex = 79685;

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
