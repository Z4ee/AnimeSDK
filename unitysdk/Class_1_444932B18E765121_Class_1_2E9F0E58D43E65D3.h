#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace System { class Action; }

#define CLASS_1_444932B18E765121_CLASS_1_2E9F0E58D43E65D3_METHOD_1_F9EF6E7642E8DC46_OFFSET UNITYSDK_OFFSET(0x18DD2E40)
#define CLASS_1_444932B18E765121_CLASS_1_2E9F0E58D43E65D3__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD2E30)

inline static constexpr unsigned int Class_1_444932B18E765121_Class_1_2E9F0E58D43E65D3_TypeDefinitionIndex = 78741;

class Class_1_444932B18E765121_Class_1_2E9F0E58D43E65D3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_CLASS_1_2E9F0E58D43E65D3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F9EF6E7642E8DC46(::MoleMole::Config::ConfigVentCrawl* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*))((::PBYTE)hIl2Cpp + CLASS_1_444932B18E765121_CLASS_1_2E9F0E58D43E65D3_METHOD_1_F9EF6E7642E8DC46_OFFSET))(this, a1);
	}
};
