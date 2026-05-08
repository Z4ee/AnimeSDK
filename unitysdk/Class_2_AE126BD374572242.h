#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIMainCitySidebarItemContext; }
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_000597E145D7A42A;
template <typename T> class Class_2_D05FEB32FD372810;

#define CLASS_2_AE126BD374572242_METHOD_2_49E029E8C4CDEB30_OFFSET UNITYSDK_OFFSET(0xDADB0E0)
#define CLASS_2_AE126BD374572242_METHOD_2_5772C21A1D4055FB_OFFSET UNITYSDK_OFFSET(0xDADB170)
#define CLASS_2_AE126BD374572242_METHOD_2_9527A5C1107F6309_OFFSET UNITYSDK_OFFSET(0xDADA2E0)
#define CLASS_2_AE126BD374572242_METHOD_2_AA7571C7C37690D1_OFFSET UNITYSDK_OFFSET(0xDADAD80)
#define CLASS_2_AE126BD374572242_METHOD_2_C0D8EA2F07A1FBF9_OFFSET UNITYSDK_OFFSET(0xDADAE40)
#define CLASS_2_AE126BD374572242_METHOD_2_F54A80DDD5C9764F_OFFSET UNITYSDK_OFFSET(0xDADB220)
#define CLASS_2_AE126BD374572242_ONSELECT_OFFSET UNITYSDK_OFFSET(0xDADA7F0)
#define CLASS_2_AE126BD374572242__CTOR_OFFSET UNITYSDK_OFFSET(0xDADACE0)

inline static constexpr unsigned int Class_2_AE126BD374572242_TypeDefinitionIndex = 45173;

class Class_2_AE126BD374572242 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIMainCitySidebarItemContext*>* Field_2_2; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarItemGatherContext*>* Field_2_0; // 0x58
	::Class_2_D05FEB32FD372810<::MoleMole::UIMainCitySidebarItemContext*>* Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9527A5C1107F6309(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_METHOD_2_9527A5C1107F6309_OFFSET))(this, a1, a2);
	}

	::System::Void OnSelect(::MoleMole::UIMainCitySidebarItemContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemContext*))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_ONSELECT_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AA7571C7C37690D1(::MoleMole::MonoGamepadModule* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_METHOD_2_AA7571C7C37690D1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C0D8EA2F07A1FBF9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_METHOD_2_C0D8EA2F07A1FBF9_OFFSET))(this);
	}

	::System::Void Method_2_49E029E8C4CDEB30(::MoleMole::UIMainCitySidebarItemGatherContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_METHOD_2_49E029E8C4CDEB30_OFFSET))(this, a1);
	}

	::MoleMole::UIMainCitySidebarItemGatherContext* Method_2_5772C21A1D4055FB()
	{
		return ((::MoleMole::UIMainCitySidebarItemGatherContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_METHOD_2_5772C21A1D4055FB_OFFSET))(this);
	}

	::System::Void Method_2_F54A80DDD5C9764F(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::Enum_3_03024D6472FC8F3A a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + CLASS_2_AE126BD374572242_METHOD_2_F54A80DDD5C9764F_OFFSET))(this, a1, a2, a3, a4);
	}
};
