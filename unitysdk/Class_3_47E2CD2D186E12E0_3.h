#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define CLASS_3_47E2CD2D186E12E0_3_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1B2F8C60)
#define CLASS_3_47E2CD2D186E12E0_3_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1B2F8CA0)
#define CLASS_3_47E2CD2D186E12E0_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F8C90)

inline static constexpr unsigned int Class_3_47E2CD2D186E12E0_3_TypeDefinitionIndex = 20660;

class Class_3_47E2CD2D186E12E0_3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicString* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_47E2CD2D186E12E0_3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_47E2CD2D186E12E0_3*&))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_3_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_47E2CD2D186E12E0_3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_47E2CD2D186E12E0_3*))((::PBYTE)hIl2Cpp + CLASS_3_47E2CD2D186E12E0_3_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
