#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_8520F4E95ECDA1C3___C_METHOD_1_8BED9B064DC715AF_OFFSET UNITYSDK_OFFSET(0x1671EDE0)
#define CLASS_2_8520F4E95ECDA1C3___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x1671EDD0)
#define CLASS_2_8520F4E95ECDA1C3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1671ED80)
#define CLASS_2_8520F4E95ECDA1C3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1671EDC0)

inline static constexpr unsigned int Class_2_8520F4E95ECDA1C3___c_TypeDefinitionIndex = 72721;

class Class_2_8520F4E95ECDA1C3___c : public ::System::Object
{
public:
	static ::Class_2_8520F4E95ECDA1C3___c** StaticGet___9()
	{
		return (::Class_2_8520F4E95ECDA1C3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8520F4E95ECDA1C3___c_TypeDefinitionIndex)->GetStaticField(0x3FE20);
	}
	static ::System::Func_2<::MoleMole::UIGeneralHeadRowWidgetController*, ::UnityEngine::GameObject*>** StaticGet___9__108_0()
	{
		return (::System::Func_2<::MoleMole::UIGeneralHeadRowWidgetController*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8520F4E95ECDA1C3___c_TypeDefinitionIndex)->GetStaticField(0x3FE28);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__134_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8520F4E95ECDA1C3___c_TypeDefinitionIndex)->GetStaticField(0x3FE30);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_8BED9B064DC715AF(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_8520F4E95ECDA1C3___C_METHOD_1_8BED9B064DC715AF_OFFSET))(this, a1);
	}
};
