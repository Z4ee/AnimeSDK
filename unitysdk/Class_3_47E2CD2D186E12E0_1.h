#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_47E2CD2D186E12E0_1_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1D681000)
#define CLASS_3_47E2CD2D186E12E0_1_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1D681040)
#define CLASS_3_47E2CD2D186E12E0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1D681030)

inline static constexpr unsigned int Class_3_47E2CD2D186E12E0_1_TypeDefinitionIndex = 21186;

class Class_3_47E2CD2D186E12E0_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* MNMHMECGDAK; // 0x18
	::System::Boolean MOKNCFJICIC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_47E2CD2D186E12E0_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_47E2CD2D186E12E0_1*&))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_1_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_47E2CD2D186E12E0_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_47E2CD2D186E12E0_1*))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_1_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
