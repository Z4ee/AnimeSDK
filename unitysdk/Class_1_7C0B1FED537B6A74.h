#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_1DFA7EEEC04804D1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_DA77831942E480A9;
class Class_2_6331FD28828DD557;
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_7C0B1FED537B6A74_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7743D0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_03E1940D4FE0F784_OFFSET UNITYSDK_OFFSET(0x1F776900)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_11686A9A57464199_OFFSET UNITYSDK_OFFSET(0x1F7756C0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_13B7129DF98444A6_OFFSET UNITYSDK_OFFSET(0x1F775760)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0x1F776070)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_181D38188B394471_OFFSET UNITYSDK_OFFSET(0x1F774DA0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x1F776420)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_404D053D548BB5E8_OFFSET UNITYSDK_OFFSET(0x1F774A90)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_7715113020A0C413_OFFSET UNITYSDK_OFFSET(0x1F775160)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_8B07E406AC83D684_OFFSET UNITYSDK_OFFSET(0x1F7761E0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1F774420)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_A1E37D8FC0177BE6_OFFSET UNITYSDK_OFFSET(0x1F776690)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_AFF657DAE7825F7B_OFFSET UNITYSDK_OFFSET(0x1F774FC0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x1F774F30)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_C5DF2B2D4B679B6C_1_OFFSET UNITYSDK_OFFSET(0x1F7769A0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_C5DF2B2D4B679B6C_OFFSET UNITYSDK_OFFSET(0x1F776610)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_D932EF17A378F4DD_OFFSET UNITYSDK_OFFSET(0x1F7764B0)
#define CLASS_1_7C0B1FED537B6A74_METHOD_1_EC7DC7FA5B23736B_OFFSET UNITYSDK_OFFSET(0x1F775620)
#define CLASS_1_7C0B1FED537B6A74__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7749A0)
#define CLASS_1_7C0B1FED537B6A74__CTOR_OFFSET UNITYSDK_OFFSET(0x1F774700)

inline static constexpr unsigned int Class_1_7C0B1FED537B6A74_TypeDefinitionIndex = 94712;

class Class_1_7C0B1FED537B6A74 : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_DA77831942E480A9*>** StaticGet_Field_1_15()
	{
		return (::System::Comparison_1<::Class_1_DA77831942E480A9*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B1FED537B6A74_TypeDefinitionIndex)->GetStaticField(0x52620);
	}
	static ::Class_1_7C0B1FED537B6A74** StaticGet_Field_1_2()
	{
		return (::Class_1_7C0B1FED537B6A74**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B1FED537B6A74_TypeDefinitionIndex)->GetStaticField(0x52628);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet_Field_1_8()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7C0B1FED537B6A74_TypeDefinitionIndex)->GetStaticField(0x52630);
	}
	// static const ::System::String* Field_1_7; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x10
	::Class_2_6331FD28828DD557* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_DA77831942E480A9*>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_DA77831942E480A9*>*>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_DA77831942E480A9*>* Field_1_11; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_DA77831942E480A9*>*>* Field_1_10; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetRequestHandle>* Field_1_6; // 0x40
	::System::Boolean Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_404D053D548BB5E8(::Class_1_DA77831942E480A9* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA77831942E480A9*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_404D053D548BB5E8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_1_AFF657DAE7825F7B(::Class_1_DA77831942E480A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA77831942E480A9*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_AFF657DAE7825F7B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7715113020A0C413(::System::Collections::Generic::List_1<::Class_1_DA77831942E480A9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DA77831942E480A9*>*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_7715113020A0C413_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_11686A9A57464199(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_11686A9A57464199_OFFSET))(this, a1);
	}

	::System::Void Method_1_13B7129DF98444A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_13B7129DF98444A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::UnityEngine::Texture2D* Method_1_8B07E406AC83D684(::System::Int32 a1, ::System::String* a2)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_8B07E406AC83D684_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C8305164A0C9B06(::Class_2_6331FD28828DD557* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6331FD28828DD557*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC7DC7FA5B23736B(::Class_1_DA77831942E480A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA77831942E480A9*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_EC7DC7FA5B23736B_OFFSET))(this, a1);
	}

	::Struct_2_1DFA7EEEC04804D1 Method_1_D932EF17A378F4DD(::System::Int32 a1)
	{
		return ((::Struct_2_1DFA7EEEC04804D1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_D932EF17A378F4DD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C5DF2B2D4B679B6C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_C5DF2B2D4B679B6C_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1E37D8FC0177BE6(::Class_1_DA77831942E480A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA77831942E480A9*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_A1E37D8FC0177BE6_OFFSET))(this, a1);
	}

	::UnityEngine::Texture2D* Method_1_03E1940D4FE0F784(::System::Int32 a1)
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_03E1940D4FE0F784_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C5DF2B2D4B679B6C_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_C5DF2B2D4B679B6C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_181D38188B394471(::Class_1_DA77831942E480A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DA77831942E480A9*))((::PBYTE)hIl2Cpp + CLASS_1_7C0B1FED537B6A74_METHOD_1_181D38188B394471_OFFSET))(this, a1);
	}
};
