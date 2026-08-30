#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_47E2CD2D186E12E0_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1CCD72B0)
#define CLASS_3_47E2CD2D186E12E0_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1CCD72F0)
#define CLASS_3_47E2CD2D186E12E0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD72E0)

inline static constexpr unsigned int Class_3_47E2CD2D186E12E0_TypeDefinitionIndex = 20753;

class Class_3_47E2CD2D186E12E0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* HCKELNILFPJ; // 0x18
	::System::Boolean CAGCHKJHMPD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_47E2CD2D186E12E0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_47E2CD2D186E12E0*&))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_47E2CD2D186E12E0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_47E2CD2D186E12E0*))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
