#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_22;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_F2C18D485B96EF01_CLEAR_OFFSET UNITYSDK_OFFSET(0x16840120)
#define CLASS_1_F2C18D485B96EF01_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x16840080)
#define CLASS_1_F2C18D485B96EF01_METHOD_1_F3C5820BA97C801F_OFFSET UNITYSDK_OFFSET(0x1683FF20)
#define CLASS_1_F2C18D485B96EF01__CTOR_OFFSET UNITYSDK_OFFSET(0x168401A0)

inline static constexpr unsigned int Class_1_F2C18D485B96EF01_TypeDefinitionIndex = 32760;

class Class_1_F2C18D485B96EF01 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_352A8B3482C80E7D_22*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C18D485B96EF01__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F3C5820BA97C801F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C18D485B96EF01_METHOD_1_F3C5820BA97C801F_OFFSET))(this);
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
