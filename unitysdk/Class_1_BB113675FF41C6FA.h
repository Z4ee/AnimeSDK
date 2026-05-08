#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BB113675FF41C6FA_METHOD_1_420F5543CED5025E_1_OFFSET UNITYSDK_OFFSET(0xDEE2F00)
#define CLASS_1_BB113675FF41C6FA_METHOD_1_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0xDEE2DE0)
#define CLASS_1_BB113675FF41C6FA__CTOR_OFFSET UNITYSDK_OFFSET(0xDEE2DD0)

inline static constexpr unsigned int Class_1_BB113675FF41C6FA_TypeDefinitionIndex = 64585;

class Class_1_BB113675FF41C6FA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB113675FF41C6FA__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_420F5543CED5025E()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB113675FF41C6FA_METHOD_1_420F5543CED5025E_OFFSET))();
	}

	static ::System::String* Method_1_420F5543CED5025E_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB113675FF41C6FA_METHOD_1_420F5543CED5025E_1_OFFSET))();
	}
};
