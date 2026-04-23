#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5A8AAC0D452999FD_METHOD_1_05D1F3797D5E7413_OFFSET UNITYSDK_OFFSET(0x981D370)
#define CLASS_1_5A8AAC0D452999FD_METHOD_1_7223CD34BEFCBF48_OFFSET UNITYSDK_OFFSET(0x981D5A0)
#define CLASS_1_5A8AAC0D452999FD_METHOD_1_D85141E7DFA32120_OFFSET UNITYSDK_OFFSET(0x981D450)
#define CLASS_1_5A8AAC0D452999FD__CTOR_OFFSET UNITYSDK_OFFSET(0x981D440)

inline static constexpr unsigned int Class_1_5A8AAC0D452999FD_TypeDefinitionIndex = 62921;

class Class_1_5A8AAC0D452999FD : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A8AAC0D452999FD__CTOR_OFFSET))(this);
	}

	static ::Class_1_5A8AAC0D452999FD* Method_1_05D1F3797D5E7413(::System::Boolean a1)
	{
		return ((::Class_1_5A8AAC0D452999FD*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A8AAC0D452999FD_METHOD_1_05D1F3797D5E7413_OFFSET))(a1);
	}

	::System::Void Method_1_D85141E7DFA32120()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A8AAC0D452999FD_METHOD_1_D85141E7DFA32120_OFFSET))(this);
	}

	::System::Void Method_1_7223CD34BEFCBF48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A8AAC0D452999FD_METHOD_1_7223CD34BEFCBF48_OFFSET))(this);
	}
};
