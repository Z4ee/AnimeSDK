#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_223;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }

#define CLASS_1_562CFB3355018A26_CLEAR_OFFSET UNITYSDK_OFFSET(0x16865E00)
#define CLASS_1_562CFB3355018A26_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16865EC0)
#define CLASS_1_562CFB3355018A26_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16865F90)
#define CLASS_1_562CFB3355018A26__CTOR_OFFSET UNITYSDK_OFFSET(0x16865FD0)

inline static constexpr unsigned int Class_1_562CFB3355018A26_TypeDefinitionIndex = 33517;

class Class_1_562CFB3355018A26 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_223* Field_1_0; // 0x10
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_7; // 0x18
	::System::Action* Field_1_8; // 0x20
	::RPG::PoolHashSet_1<::System::Int32>* Field_1_6; // 0x28
	::System::Boolean Field_1_2; // 0x30
	::System::Boolean Field_1_1; // 0x31
	::System::Boolean Field_1_5; // 0x32
	::System::Boolean Field_1_4; // 0x33
	::System::Single Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562CFB3355018A26_ONRECYCLE_OFFSET))(this);
	}
};
