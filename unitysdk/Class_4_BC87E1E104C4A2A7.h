#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_4_BC87E1E104C4A2A7_METHOD_4_02FDD26BEE186CA3_OFFSET UNITYSDK_OFFSET(0x182D4660)
#define CLASS_4_BC87E1E104C4A2A7_METHOD_4_5C65AE94D5D93795_OFFSET UNITYSDK_OFFSET(0x182D4590)
#define CLASS_4_BC87E1E104C4A2A7__CTOR_OFFSET UNITYSDK_OFFSET(0x182D4610)

inline static constexpr unsigned int Class_4_BC87E1E104C4A2A7_TypeDefinitionIndex = 20258;

class Class_4_BC87E1E104C4A2A7 : public ::RPG::GameCore::PredicateConfig
{
public:
	::RPG::GameCore::DynamicString* Field_4_1; // 0x20
	::System::Boolean Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_BC87E1E104C4A2A7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_5C65AE94D5D93795(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BC87E1E104C4A2A7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BC87E1E104C4A2A7*&))((::PBYTE)hIl2Cpp + CLASS_4_BC87E1E104C4A2A7_METHOD_4_5C65AE94D5D93795_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_02FDD26BEE186CA3(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_BC87E1E104C4A2A7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_BC87E1E104C4A2A7*))((::PBYTE)hIl2Cpp + CLASS_4_BC87E1E104C4A2A7_METHOD_4_02FDD26BEE186CA3_OFFSET))(a1, a2);
	}
};
