#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2_InitScrollViewData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIUrbanMapLeftLocationContext; }
namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_5CEF452850C154D5_METHOD_2_00A0C00A6A36CF42_OFFSET UNITYSDK_OFFSET(0x112D8320)
#define CLASS_2_5CEF452850C154D5_METHOD_2_1033B43C898812F7_OFFSET UNITYSDK_OFFSET(0x112DEC20)
#define CLASS_2_5CEF452850C154D5_METHOD_2_143942116393CC0F_OFFSET UNITYSDK_OFFSET(0x112DF4E0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x112DA490)
#define CLASS_2_5CEF452850C154D5_METHOD_2_1D9D49C4D09FFEF4_OFFSET UNITYSDK_OFFSET(0x112DDA70)
#define CLASS_2_5CEF452850C154D5_METHOD_2_27DB0AAEF389BB29_OFFSET UNITYSDK_OFFSET(0x112DDB40)
#define CLASS_2_5CEF452850C154D5_METHOD_2_37CA4C6B25E2E7FF_OFFSET UNITYSDK_OFFSET(0x112D9ED0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x112DD500)
#define CLASS_2_5CEF452850C154D5_METHOD_2_579101B91BBCFAA2_OFFSET UNITYSDK_OFFSET(0x112DA410)
#define CLASS_2_5CEF452850C154D5_METHOD_2_64852D2F315C2B34_1_OFFSET UNITYSDK_OFFSET(0x112DD270)
#define CLASS_2_5CEF452850C154D5_METHOD_2_64852D2F315C2B34_OFFSET UNITYSDK_OFFSET(0x112DD030)
#define CLASS_2_5CEF452850C154D5_METHOD_2_67A3A9A709BA6CED_OFFSET UNITYSDK_OFFSET(0x112DE100)
#define CLASS_2_5CEF452850C154D5_METHOD_2_866057E5772343C9_1_OFFSET UNITYSDK_OFFSET(0x112DD430)
#define CLASS_2_5CEF452850C154D5_METHOD_2_866057E5772343C9_OFFSET UNITYSDK_OFFSET(0x112DCB20)
#define CLASS_2_5CEF452850C154D5_METHOD_2_87739D6F279B055A_OFFSET UNITYSDK_OFFSET(0x112DC2B0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_B1A2A317BA488115_OFFSET UNITYSDK_OFFSET(0x112DEFB0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x112DF970)
#define CLASS_2_5CEF452850C154D5_METHOD_2_C485DD4925F82638_1_OFFSET UNITYSDK_OFFSET(0x112DF980)
#define CLASS_2_5CEF452850C154D5_METHOD_2_C485DD4925F82638_OFFSET UNITYSDK_OFFSET(0x112D9BC0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x112DE710)
#define CLASS_2_5CEF452850C154D5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x112DC120)
#define CLASS_2_5CEF452850C154D5_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x112DF340)
#define CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0x112DCBF0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_2_OFFSET UNITYSDK_OFFSET(0x112DCD30)
#define CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_3_OFFSET UNITYSDK_OFFSET(0x112DCE70)
#define CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x112DC170)
#define CLASS_2_5CEF452850C154D5_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x112DCFB0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_F341713968C18D0A_OFFSET UNITYSDK_OFFSET(0x112DD6E0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x112DD1F0)
#define CLASS_2_5CEF452850C154D5_METHOD_2_FE1F55EE7FED14F0_OFFSET UNITYSDK_OFFSET(0x112DE720)
#define CLASS_2_5CEF452850C154D5_METHOD_2_FF7D42127627E96E_OFFSET UNITYSDK_OFFSET(0x112DDF60)
#define CLASS_2_5CEF452850C154D5_ONSELECT_OFFSET UNITYSDK_OFFSET(0x112D9720)
#define CLASS_2_5CEF452850C154D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x112D9B70)
#define CLASS_2_5CEF452850C154D5__CTOR_OFFSET UNITYSDK_OFFSET(0x112D9B10)

inline static constexpr unsigned int Class_2_5CEF452850C154D5_TypeDefinitionIndex = 48373;

class Class_2_5CEF452850C154D5 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5CEF452850C154D5_TypeDefinitionIndex)->GetStaticField(0x2F910);
	}
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_5; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftLocationContext*>* Field_2_0; // 0x58
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_1; // 0x60
	::System::Int32 Field_2_3; // 0x68
	::System::Int32 Field_2_2; // 0x6C
	::System::Boolean Field_2_6; // 0x70
	::System::Int32 Field_2_4; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5__CCTOR_OFFSET))();
	}

	::System::Void Method_2_00A0C00A6A36CF42(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_00A0C00A6A36CF42_OFFSET))(this, a1, a2);
	}

	::System::Void OnSelect(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_ONSELECT_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C485DD4925F82638(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_C485DD4925F82638_OFFSET))(this, a1);
	}

	::MoleMole::UIUrbanMapLeftLocationRowContext* Method_2_37CA4C6B25E2E7FF()
	{
		return ((::MoleMole::UIUrbanMapLeftLocationRowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_37CA4C6B25E2E7FF_OFFSET))(this);
	}

	::System::Void Method_2_579101B91BBCFAA2(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_579101B91BBCFAA2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_87739D6F279B055A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_87739D6F279B055A_OFFSET))(this, a1, a2);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_866057E5772343C9(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_866057E5772343C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_2_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_E7EF6BC52B28648C_3_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::MonoUITableScrollV2_InitScrollViewData* Method_2_64852D2F315C2B34()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_64852D2F315C2B34_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::MonoUITableScrollV2_InitScrollViewData* Method_2_64852D2F315C2B34_1()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_64852D2F315C2B34_1_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_866057E5772343C9_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_866057E5772343C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Boolean Method_2_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_4DB14E9CF0E552EE_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_F341713968C18D0A()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_F341713968C18D0A_OFFSET))(this);
	}

	::System::Void Method_2_1D9D49C4D09FFEF4(::MoleMole::UIUrbanMapLeftLocationContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationContext*))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_1D9D49C4D09FFEF4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_27DB0AAEF389BB29(::MoleMole::MonoGamepadModule* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_27DB0AAEF389BB29_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_FF7D42127627E96E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_FF7D42127627E96E_OFFSET))(this);
	}

	::System::Void Method_2_67A3A9A709BA6CED(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_67A3A9A709BA6CED_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_FE1F55EE7FED14F0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_FE1F55EE7FED14F0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1033B43C898812F7(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_1033B43C898812F7_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_2_B1A2A317BA488115()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_B1A2A317BA488115_OFFSET))(this);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_2_143942116393CC0F(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_143942116393CC0F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C485DD4925F82638_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5CEF452850C154D5_METHOD_2_C485DD4925F82638_1_OFFSET))(this, a1);
	}
};
