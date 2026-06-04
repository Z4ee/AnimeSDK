#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_5325286AD2465A2A_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1914C4A0)
#define CLASS_3_5325286AD2465A2A_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1914C520)
#define CLASS_3_5325286AD2465A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1914C4F0)

inline static constexpr unsigned int Class_3_5325286AD2465A2A_TypeDefinitionIndex = 9878;

class Class_3_5325286AD2465A2A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5325286AD2465A2A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5325286AD2465A2A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5325286AD2465A2A*&))((::PBYTE)hIl2Cpp + CLASS_3_5325286AD2465A2A_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_5325286AD2465A2A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_5325286AD2465A2A*))((::PBYTE)hIl2Cpp + CLASS_3_5325286AD2465A2A_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
