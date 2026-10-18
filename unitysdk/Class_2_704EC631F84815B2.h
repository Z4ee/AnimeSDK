#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Enum_3_DB663931210BBC27_1.h"
#include "unitysdk/Enum_3_DB663931210BBC27_2.h"

class Class_1_6E147339EEC0E9E4;
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_704EC631F84815B2_METHOD_2_97BC79BDB09179A3_OFFSET UNITYSDK_OFFSET(0x15B09DE0)
#define CLASS_2_704EC631F84815B2_METHOD_2_A03845F318CF9F3C_OFFSET UNITYSDK_OFFSET(0x15B0A010)
#define CLASS_2_704EC631F84815B2_METHOD_2_E9B11CC802D02488_OFFSET UNITYSDK_OFFSET(0x15B09E50)
#define CLASS_2_704EC631F84815B2_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x15B0A180)
#define CLASS_2_704EC631F84815B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B0A220)
#define CLASS_2_704EC631F84815B2__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0A1F0)
#define CLASS_2_704EC631F84815B2__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B09D40)

inline static constexpr unsigned int Class_2_704EC631F84815B2_TypeDefinitionIndex = 71458;

class Class_2_704EC631F84815B2 : public ::Class_1_34917908B7833130
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_2, ::System::String*>** StaticGet_MEGMMHLDHHF()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_2, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_704EC631F84815B2_TypeDefinitionIndex)->GetStaticField(0x6BE50);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_1, ::System::String*>** StaticGet_DOKLAJNEDGF()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DB663931210BBC27_1, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_704EC631F84815B2_TypeDefinitionIndex)->GetStaticField(0x6BE58);
	}
	::UnityEngine::UI::Image* MKOCDHEFAME; // 0x60
	::UnityEngine::RectTransform* HACIPINNIOG; // 0x68
	::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_97BC79BDB09179A3(::Class_1_6E147339EEC0E9E4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6E147339EEC0E9E4*))((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2_METHOD_2_97BC79BDB09179A3_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_2_E9B11CC802D02488(::Enum_3_DB663931210BBC27_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_1))((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2_METHOD_2_E9B11CC802D02488_OFFSET))(this, a1);
	}

	::System::Void Method_2_A03845F318CF9F3C(::Enum_3_DB663931210BBC27_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_2))((::PBYTE)hIl2Cpp + CLASS_2_704EC631F84815B2_METHOD_2_A03845F318CF9F3C_OFFSET))(this, a1);
	}
};
