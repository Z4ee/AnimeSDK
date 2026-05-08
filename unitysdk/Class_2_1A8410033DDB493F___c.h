#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovBangbooSelectItemWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_1A8410033DDB493F___C_METHOD_1_2F8D1540CD2A24BA_OFFSET UNITYSDK_OFFSET(0x1123A5E0)
#define CLASS_2_1A8410033DDB493F___C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1123A520)
#define CLASS_2_1A8410033DDB493F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1123A4D0)
#define CLASS_2_1A8410033DDB493F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1123A510)

inline static constexpr unsigned int Class_2_1A8410033DDB493F___c_TypeDefinitionIndex = 73551;

class Class_2_1A8410033DDB493F___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__18_13()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A8410033DDB493F___c_TypeDefinitionIndex)->GetStaticField(0x33D20);
	}
	static ::System::Comparison_1<::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data*>** StaticGet___9__17_1()
	{
		return (::System::Comparison_1<::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A8410033DDB493F___c_TypeDefinitionIndex)->GetStaticField(0x33D28);
	}
	static ::Class_2_1A8410033DDB493F___c** StaticGet___9()
	{
		return (::Class_2_1A8410033DDB493F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_1A8410033DDB493F___c_TypeDefinitionIndex)->GetStaticField(0x33D30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1A8410033DDB493F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8410033DDB493F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8410033DDB493F___C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Int32 Method_1_2F8D1540CD2A24BA(::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data* a1, ::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data*, ::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data*))((::PBYTE)hIl2Cpp + CLASS_2_1A8410033DDB493F___C_METHOD_1_2F8D1540CD2A24BA_OFFSET))(this, a1, a2);
	}
};
