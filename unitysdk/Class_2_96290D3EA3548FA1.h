#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_D798F8FBCDD8B14D;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_96290D3EA3548FA1_METHOD_2_C4850B85816C7F0A_OFFSET UNITYSDK_OFFSET(0x13F1B870)
#define CLASS_2_96290D3EA3548FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1B910)
#define CLASS_2_96290D3EA3548FA1__ONBIND_OFFSET UNITYSDK_OFFSET(0x13F1B7D0)

inline static constexpr unsigned int Class_2_96290D3EA3548FA1_TypeDefinitionIndex = 72245;

class Class_2_96290D3EA3548FA1 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Text* IAANMCFCPIH; // 0x60
	::Class_2_D798F8FBCDD8B14D* DOIGHMPHHIF; // 0x68

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
};
