#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_AC794F73D7F41681_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1832ACF0)
#define CLASS_3_AC794F73D7F41681_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1832AD70)
#define CLASS_3_AC794F73D7F41681__CTOR_OFFSET UNITYSDK_OFFSET(0x1832AD40)

inline static constexpr unsigned int Class_3_AC794F73D7F41681_TypeDefinitionIndex = 10075;

class Class_3_AC794F73D7F41681 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC794F73D7F41681__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AC794F73D7F41681*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AC794F73D7F41681*&))((::PBYTE)hIl2Cpp + CLASS_3_AC794F73D7F41681_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_AC794F73D7F41681* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_AC794F73D7F41681*))((::PBYTE)hIl2Cpp + CLASS_3_AC794F73D7F41681_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
