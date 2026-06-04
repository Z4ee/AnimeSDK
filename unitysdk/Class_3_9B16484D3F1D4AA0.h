#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_9B16484D3F1D4AA0_METHOD_3_292FA0EEF6659E6F_OFFSET UNITYSDK_OFFSET(0x18F7E610)
#define CLASS_3_9B16484D3F1D4AA0_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x18F7E590)
#define CLASS_3_9B16484D3F1D4AA0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F7E5E0)

inline static constexpr unsigned int Class_3_9B16484D3F1D4AA0_TypeDefinitionIndex = 21905;

class Class_3_9B16484D3F1D4AA0 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9B16484D3F1D4AA0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9B16484D3F1D4AA0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9B16484D3F1D4AA0*&))((::PBYTE)hIl2Cpp + CLASS_3_9B16484D3F1D4AA0_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_292FA0EEF6659E6F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_9B16484D3F1D4AA0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_9B16484D3F1D4AA0*))((::PBYTE)hIl2Cpp + CLASS_3_9B16484D3F1D4AA0_METHOD_3_292FA0EEF6659E6F_OFFSET))(a1, a2);
	}
};
