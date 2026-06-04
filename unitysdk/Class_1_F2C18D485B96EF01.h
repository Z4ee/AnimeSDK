#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_24;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_F2C18D485B96EF01_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BD0440)
#define CLASS_1_F2C18D485B96EF01_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x18BD03A0)
#define CLASS_1_F2C18D485B96EF01_METHOD_1_5F71324A3BD0695E_OFFSET UNITYSDK_OFFSET(0x18BD0260)
#define CLASS_1_F2C18D485B96EF01__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD04C0)

inline static constexpr unsigned int Class_1_F2C18D485B96EF01_TypeDefinitionIndex = 39317;

class Class_1_F2C18D485B96EF01 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_1CBA230307F9C289_24*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C18D485B96EF01__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5F71324A3BD0695E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C18D485B96EF01_METHOD_1_5F71324A3BD0695E_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C18D485B96EF01_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C18D485B96EF01_CLEAR_OFFSET))(this);
	}
};
