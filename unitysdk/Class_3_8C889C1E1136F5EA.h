#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_8C889C1E1136F5EA_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x16C11920)
#define CLASS_3_8C889C1E1136F5EA_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x16C119A0)
#define CLASS_3_8C889C1E1136F5EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C11970)

inline static constexpr unsigned int Class_3_8C889C1E1136F5EA_TypeDefinitionIndex = 20898;

class Class_3_8C889C1E1136F5EA : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_1; // 0x18
	::System::Boolean Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8C889C1E1136F5EA__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8C889C1E1136F5EA*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8C889C1E1136F5EA*&))((::PBYTE)hIl2Cpp + CLASS_3_8C889C1E1136F5EA_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8C889C1E1136F5EA* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8C889C1E1136F5EA*))((::PBYTE)hIl2Cpp + CLASS_3_8C889C1E1136F5EA_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
