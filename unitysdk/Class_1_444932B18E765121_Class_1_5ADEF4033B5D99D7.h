#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { class Action; }

#define CLASS_1_444932B18E765121_CLASS_1_5ADEF4033B5D99D7_METHOD_1_4377C319650F7C6B_OFFSET UNITYSDK_OFFSET(0x1343C390)
#define CLASS_1_444932B18E765121_CLASS_1_5ADEF4033B5D99D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1343C380)

inline static constexpr unsigned int Class_1_444932B18E765121_Class_1_5ADEF4033B5D99D7_TypeDefinitionIndex = 55959;

class Class_1_444932B18E765121_Class_1_5ADEF4033B5D99D7 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_CLASS_1_5ADEF4033B5D99D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4377C319650F7C6B(::MoleMole::Config::ConfigVentCrawl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_CLASS_1_5ADEF4033B5D99D7_METHOD_1_4377C319650F7C6B_OFFSET))(this, a1);
	}
};
