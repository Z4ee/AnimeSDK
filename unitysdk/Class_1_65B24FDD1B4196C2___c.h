#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Sofa/Runtime/ReactiveBinding/Example/ConfirmDialogReactiveBtnMode.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_65B24FDD1B4196C2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A094B90)
#define CLASS_1_65B24FDD1B4196C2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A094BD0)
#define CLASS_1_65B24FDD1B4196C2___C__GET_BGINTERACTABLESTREAM_B__55_0_OFFSET UNITYSDK_OFFSET(0x1A094CA0)
#define CLASS_1_65B24FDD1B4196C2___C__GET_CANCELBUTTONVISIBLESTREAM_B__53_0_OFFSET UNITYSDK_OFFSET(0x1A094C90)
#define CLASS_1_65B24FDD1B4196C2___C__GET_CLOSEBUTTONVISIBLESTREAM_B__57_0_OFFSET UNITYSDK_OFFSET(0x1A094CB0)
#define CLASS_1_65B24FDD1B4196C2___C__GET_OKBUTTONVISIBLESTREAM_B__51_0_OFFSET UNITYSDK_OFFSET(0x1A094C80)
#define CLASS_1_65B24FDD1B4196C2___C__GET_RESOLVEDTITLEID_B__49_0_OFFSET UNITYSDK_OFFSET(0x1A094BE0)

inline static constexpr unsigned int Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex = 50366;

class Class_1_65B24FDD1B4196C2___c : public ::System::Object
{
public:
	static ::Class_1_65B24FDD1B4196C2___c** StaticGet___9()
	{
		return (::Class_1_65B24FDD1B4196C2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex)->GetStaticField(0x60A40);
	}
	static ::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>** StaticGet___9__55_0()
	{
		return (::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex)->GetStaticField(0x60A48);
	}
	static ::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>** StaticGet___9__57_0()
	{
		return (::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex)->GetStaticField(0x60A50);
	}
	static ::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>** StaticGet___9__53_0()
	{
		return (::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex)->GetStaticField(0x60A58);
	}
	static ::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>** StaticGet___9__51_0()
	{
		return (::System::Func_2<::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex)->GetStaticField(0x60A60);
	}
	static ::System::Func_2<::RPG::Client::TextID, ::RPG::Client::TextID>** StaticGet___9__49_0()
	{
		return (::System::Func_2<::RPG::Client::TextID, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_65B24FDD1B4196C2___c_TypeDefinitionIndex)->GetStaticField(0x60A68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::TextID _get_ResolvedTitleId_b__49_0(::RPG::Client::TextID a1)
	{
		return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__GET_RESOLVEDTITLEID_B__49_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_OkButtonVisibleStream_b__51_0(::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__GET_OKBUTTONVISIBLESTREAM_B__51_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_CancelButtonVisibleStream_b__53_0(::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__GET_CANCELBUTTONVISIBLESTREAM_B__53_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_BgInteractableStream_b__55_0(::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__GET_BGINTERACTABLESTREAM_B__55_0_OFFSET))(this, a1);
	}

	::System::Boolean _get_CloseButtonVisibleStream_b__57_0(::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Sofa::Runtime::ReactiveBinding::Example::ConfirmDialogReactiveBtnMode))((::PBYTE)hIl2Cpp + CLASS_1_65B24FDD1B4196C2___C__GET_CLOSEBUTTONVISIBLESTREAM_B__57_0_OFFSET))(this, a1);
	}
};
