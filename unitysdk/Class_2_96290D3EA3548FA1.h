#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_D798F8FBCDD8B14D;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_96290D3EA3548FA1_METHOD_2_C4850B85816C7F0A_OFFSET UNITYSDK_OFFSET(0x12386AB0)
#define CLASS_2_96290D3EA3548FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x12386B50)
#define CLASS_2_96290D3EA3548FA1__ONBIND_OFFSET UNITYSDK_OFFSET(0x12386A10)
#define CLASS_2_96290D3EA3548FA1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12386B80)

inline static constexpr unsigned int Class_2_96290D3EA3548FA1_TypeDefinitionIndex = 67563;

class Class_2_96290D3EA3548FA1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60
	::Class_2_D798F8FBCDD8B14D* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96290D3EA3548FA1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96290D3EA3548FA1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C4850B85816C7F0A(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_96290D3EA3548FA1_METHOD_2_C4850B85816C7F0A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96290D3EA3548FA1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
