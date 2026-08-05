#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_65431B70BEB038E5___C_METHOD_1_8BED9B064DC715AF_OFFSET UNITYSDK_OFFSET(0x164227C0)
#define CLASS_2_65431B70BEB038E5___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x16422840)
#define CLASS_2_65431B70BEB038E5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16422770)
#define CLASS_2_65431B70BEB038E5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x164227B0)

inline static constexpr unsigned int Class_2_65431B70BEB038E5___c_TypeDefinitionIndex = 54154;

class Class_2_65431B70BEB038E5___c : public ::System::Object
{
public:
	static ::Class_2_65431B70BEB038E5___c** StaticGet___9()
	{
		return (::Class_2_65431B70BEB038E5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_65431B70BEB038E5___c_TypeDefinitionIndex)->GetStaticField(0x38670);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__134_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_65431B70BEB038E5___c_TypeDefinitionIndex)->GetStaticField(0x38678);
	}
	static ::System::Func_2<::MoleMole::UIGeneralHeadRowWidgetController*, ::UnityEngine::GameObject*>** StaticGet___9__108_0()
	{
		return (::System::Func_2<::MoleMole::UIGeneralHeadRowWidgetController*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_65431B70BEB038E5___c_TypeDefinitionIndex)->GetStaticField(0x38680);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_8BED9B064DC715AF(::MoleMole::UIGeneralHeadRowWidgetController* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5___C_METHOD_1_8BED9B064DC715AF_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_65431B70BEB038E5___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
