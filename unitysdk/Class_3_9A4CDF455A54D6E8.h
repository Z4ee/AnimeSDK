#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }

#define CLASS_3_9A4CDF455A54D6E8_METHOD_3_953B57F1CC8DAE52_OFFSET UNITYSDK_OFFSET(0x1929D6F0)
#define CLASS_3_9A4CDF455A54D6E8_METHOD_3_AC95490D1B53DE21_OFFSET UNITYSDK_OFFSET(0x1929D770)
#define CLASS_3_9A4CDF455A54D6E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1929D740)

inline static constexpr unsigned int Class_3_9A4CDF455A54D6E8_TypeDefinitionIndex = 20316;

class Class_3_9A4CDF455A54D6E8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A4CDF455A54D6E8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_953B57F1CC8DAE52(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9A4CDF455A54D6E8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9A4CDF455A54D6E8*&))((::PBYTE)hIl2Cpp + CLASS_3_9A4CDF455A54D6E8_METHOD_3_953B57F1CC8DAE52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_AC95490D1B53DE21(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9A4CDF455A54D6E8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9A4CDF455A54D6E8*))((::PBYTE)hIl2Cpp + CLASS_3_9A4CDF455A54D6E8_METHOD_3_AC95490D1B53DE21_OFFSET))(a1, a2);
	}
};
