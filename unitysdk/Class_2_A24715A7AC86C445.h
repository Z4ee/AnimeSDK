#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class MainCitySidebarPrefabConfig; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMainCitySidebarContext; }
namespace MoleMole { class UIMainCitySidebarItemGatherContext; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_A24715A7AC86C445_METHOD_2_1B5E14665E3DB01A_OFFSET UNITYSDK_OFFSET(0x161B3840)
#define CLASS_2_A24715A7AC86C445_METHOD_2_5BC5A5993D2B51B0_OFFSET UNITYSDK_OFFSET(0x161B4060)
#define CLASS_2_A24715A7AC86C445_METHOD_2_8D388218652F2B2F_OFFSET UNITYSDK_OFFSET(0x161B5130)
#define CLASS_2_A24715A7AC86C445_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x161B51B0)
#define CLASS_2_A24715A7AC86C445_METHOD_2_AA7571C7C37690D1_OFFSET UNITYSDK_OFFSET(0x161B3FA0)
#define CLASS_2_A24715A7AC86C445_METHOD_2_BDC4863E355C9BF9_OFFSET UNITYSDK_OFFSET(0x161B3C40)
#define CLASS_2_A24715A7AC86C445_METHOD_2_D76FF39C0BBE6396_1_OFFSET UNITYSDK_OFFSET(0x161B4F30)
#define CLASS_2_A24715A7AC86C445_METHOD_2_D76FF39C0BBE6396_OFFSET UNITYSDK_OFFSET(0x161B3DA0)
#define CLASS_2_A24715A7AC86C445_METHOD_2_DE990B14B960380F_OFFSET UNITYSDK_OFFSET(0x161B3230)
#define CLASS_2_A24715A7AC86C445_METHOD_2_E2E852C522DA4B78_OFFSET UNITYSDK_OFFSET(0x161B42F0)
#define CLASS_2_A24715A7AC86C445__CCTOR_OFFSET UNITYSDK_OFFSET(0x161B3800)
#define CLASS_2_A24715A7AC86C445__CTOR_OFFSET UNITYSDK_OFFSET(0x161B3760)

inline static constexpr unsigned int Class_2_A24715A7AC86C445_TypeDefinitionIndex = 66829;

class Class_2_A24715A7AC86C445 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A24715A7AC86C445_TypeDefinitionIndex)->GetStaticField(0x36C80);
	}
	::System::Collections::Generic::List_1<::MoleMole::UIMainCitySidebarItemGatherContext*>* Field_2_0; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarContext*>* Field_2_4; // 0x58
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_3; // 0x60
	::Class_2_000597E145D7A42A<::MoleMole::MainCitySidebarPrefabConfig*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445__CCTOR_OFFSET))();
	}

	::System::Void Method_2_DE990B14B960380F(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_DE990B14B960380F_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_1B5E14665E3DB01A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_1B5E14665E3DB01A_OFFSET))(this);
	}

	::System::Boolean Method_2_BDC4863E355C9BF9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_BDC4863E355C9BF9_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_D76FF39C0BBE6396(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_D76FF39C0BBE6396_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AA7571C7C37690D1(::MoleMole::MonoGamepadModule* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_AA7571C7C37690D1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_5BC5A5993D2B51B0(::MoleMole::UIMainCitySidebarItemGatherContext* a1, ::MoleMole::UIMainCitySidebarItemGatherContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIMainCitySidebarItemGatherContext*, ::MoleMole::UIMainCitySidebarItemGatherContext*))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_5BC5A5993D2B51B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E2E852C522DA4B78(::System::Boolean a1, ::MoleMole::UIMainCitySidebarContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIMainCitySidebarContext*))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_E2E852C522DA4B78_OFFSET))(this, a1, a2);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_D76FF39C0BBE6396_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_D76FF39C0BBE6396_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_8D388218652F2B2F(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_8D388218652F2B2F_OFFSET))(this, a1);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A24715A7AC86C445_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}
};
