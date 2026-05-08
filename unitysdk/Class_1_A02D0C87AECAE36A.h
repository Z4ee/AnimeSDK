#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_1_A02D0C87AECAE36A_METHOD_1_138FB0876437E13A_OFFSET UNITYSDK_OFFSET(0x1533E270)
#define CLASS_1_A02D0C87AECAE36A_METHOD_1_7A31017B4514944B_OFFSET UNITYSDK_OFFSET(0x1533DF90)
#define CLASS_1_A02D0C87AECAE36A_METHOD_1_ADA7C83013A284A9_OFFSET UNITYSDK_OFFSET(0x1533DB60)

inline static constexpr unsigned int Class_1_A02D0C87AECAE36A_TypeDefinitionIndex = 44653;

class Class_1_A02D0C87AECAE36A : public ::System::Object
{
public:
	static ::System::Void Method_1_ADA7C83013A284A9(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::Foundation::AssetPath a3, ::System::Boolean a4, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam a5)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::Foundation::AssetPath, ::System::Boolean, ::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam))((::PBYTE)hIl2Cpp + CLASS_1_A02D0C87AECAE36A_METHOD_1_ADA7C83013A284A9_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_7A31017B4514944B(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02D0C87AECAE36A_METHOD_1_7A31017B4514944B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_138FB0876437E13A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A02D0C87AECAE36A_METHOD_1_138FB0876437E13A_OFFSET))(a1);
	}
};
