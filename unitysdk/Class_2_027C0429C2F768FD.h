#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define CLASS_2_027C0429C2F768FD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x95BBFE0)
#define CLASS_2_027C0429C2F768FD_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x95BBF70)
#define CLASS_2_027C0429C2F768FD__CTOR_OFFSET UNITYSDK_OFFSET(0x95BC060)

inline static constexpr unsigned int Class_2_027C0429C2F768FD_TypeDefinitionIndex = 66083;

class Class_2_027C0429C2F768FD : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_027C0429C2F768FD__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_027C0429C2F768FD_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_027C0429C2F768FD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}
};
