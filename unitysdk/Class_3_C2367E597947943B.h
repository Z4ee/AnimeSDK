#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_C2367E597947943B_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x1CF2A040)
#define CLASS_3_C2367E597947943B_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1CF29FE0)
#define CLASS_3_C2367E597947943B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2A030)

inline static constexpr unsigned int Class_3_C2367E597947943B_TypeDefinitionIndex = 20169;

class Class_3_C2367E597947943B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* OKPLJHHOCGP; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::RPG::GameCore::DynamicString* GNPPKDGOEDG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2367E597947943B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C2367E597947943B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C2367E597947943B*&))((::PBYTE)hIl2Cpp + CLASS_3_C2367E597947943B_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C2367E597947943B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C2367E597947943B*))((::PBYTE)hIl2Cpp + CLASS_3_C2367E597947943B_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
