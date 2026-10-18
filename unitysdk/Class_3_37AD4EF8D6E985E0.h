#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimPortalTarget; }

#define CLASS_3_37AD4EF8D6E985E0_METHOD_3_77BC119BD93E2767_OFFSET UNITYSDK_OFFSET(0x1D200BD0)
#define CLASS_3_37AD4EF8D6E985E0_METHOD_3_92AC418AB3CED05A_OFFSET UNITYSDK_OFFSET(0x1D200C10)
#define CLASS_3_37AD4EF8D6E985E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D200C00)

inline static constexpr unsigned int Class_3_37AD4EF8D6E985E0_TypeDefinitionIndex = 21461;

class Class_3_37AD4EF8D6E985E0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FiveDimPortalTarget* MCLLALGABAB; // 0x18
	::System::Boolean FIIGINAGCKL; // 0x20
	::System::Boolean OOMOFODFCBH; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_37AD4EF8D6E985E0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_77BC119BD93E2767(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_37AD4EF8D6E985E0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_37AD4EF8D6E985E0*&))((::PBYTE)hIl2Cpp + CLASS_3_37AD4EF8D6E985E0_METHOD_3_77BC119BD93E2767_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_92AC418AB3CED05A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_37AD4EF8D6E985E0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_37AD4EF8D6E985E0*))((::PBYTE)hIl2Cpp + CLASS_3_37AD4EF8D6E985E0_METHOD_3_92AC418AB3CED05A_OFFSET))(a1, a2);
	}
};
