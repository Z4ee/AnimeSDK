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

#define CLASS_2_8B5019D8789E2A3F_METHOD_2_1033B43C898812F7_OFFSET UNITYSDK_OFFSET(0x16D2CFB0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x16D2A820)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x16D2AEA0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_3_OFFSET UNITYSDK_OFFSET(0x16D2BAC0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16D27E30)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_23C8F63A91A3381B_OFFSET UNITYSDK_OFFSET(0x16D2B370)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_27DB0AAEF389BB29_OFFSET UNITYSDK_OFFSET(0x16D2C260)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_28092AE644740F78_OFFSET UNITYSDK_OFFSET(0x16D25F00)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_3DBDEC2CCC11C462_OFFSET UNITYSDK_OFFSET(0x16D2CBD0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x16D289E0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x16D2D5D0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_64852D2F315C2B34_1_OFFSET UNITYSDK_OFFSET(0x16D2D410)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_64852D2F315C2B34_OFFSET UNITYSDK_OFFSET(0x16D2A650)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_6CF527402A644C13_OFFSET UNITYSDK_OFFSET(0x16D2A960)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_7C96C65E6F94E09E_OFFSET UNITYSDK_OFFSET(0x16D28190)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_866057E5772343C9_1_OFFSET UNITYSDK_OFFSET(0x16D2D340)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_866057E5772343C9_OFFSET UNITYSDK_OFFSET(0x16D2A580)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_B1A2A317BA488115_OFFSET UNITYSDK_OFFSET(0x16D2AFE0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x16D2A570)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_C485DD4925F82638_1_OFFSET UNITYSDK_OFFSET(0x16D2CCA0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_C485DD4925F82638_OFFSET UNITYSDK_OFFSET(0x16D27B20)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16D2A810)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16D2CB80)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x16D27980)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x16D2BC00)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_EDD89BBE1EB73801_OFFSET UNITYSDK_OFFSET(0x16D2BC80)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_F2049CF2448AAF57_OFFSET UNITYSDK_OFFSET(0x16D2C1E0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_F341713968C18D0A_OFFSET UNITYSDK_OFFSET(0x16D275F0)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x16D28110)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_FE1F55EE7FED14F0_OFFSET UNITYSDK_OFFSET(0x16D2C680)
#define CLASS_2_8B5019D8789E2A3F_METHOD_2_FF7D42127627E96E_OFFSET UNITYSDK_OFFSET(0x16D27F70)
#define CLASS_2_8B5019D8789E2A3F_ONSELECT_OFFSET UNITYSDK_OFFSET(0x16D27150)
#define CLASS_2_8B5019D8789E2A3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D275A0)
#define CLASS_2_8B5019D8789E2A3F__CTOR_OFFSET UNITYSDK_OFFSET(0x16D27540)

inline static constexpr unsigned int Class_2_8B5019D8789E2A3F_TypeDefinitionIndex = 87556;

class Class_2_8B5019D8789E2A3F : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_7()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B5019D8789E2A3F_TypeDefinitionIndex)->GetStaticField(0x40210);
	}
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftLocationContext*>* Field_2_0; // 0x50
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_5; // 0x58
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_1; // 0x60
	::System::Int32 Field_2_2; // 0x68
	::System::Int32 Field_2_3; // 0x6C
	::System::Int32 Field_2_4; // 0x70
	::System::Boolean Field_2_6; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_28092AE644740F78(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_28092AE644740F78_OFFSET))(this, a1, a2);
	}

	::System::Void OnSelect(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_ONSELECT_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerable* Method_2_F341713968C18D0A()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_F341713968C18D0A_OFFSET))(this);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Int32 Method_2_C485DD4925F82638(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_C485DD4925F82638_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::String* Method_2_FF7D42127627E96E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_FF7D42127627E96E_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C96C65E6F94E09E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_7C96C65E6F94E09E_OFFSET))(this, a1, a2);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_866057E5772343C9(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_866057E5772343C9_OFFSET))(this, a1);
	}

	::MonoUITableScrollV2_InitScrollViewData* Method_2_64852D2F315C2B34()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_64852D2F315C2B34_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_6CF527402A644C13(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_6CF527402A644C13_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_B1A2A317BA488115()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_B1A2A317BA488115_OFFSET))(this);
	}

	::System::Void Method_2_23C8F63A91A3381B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_23C8F63A91A3381B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_1290EA767C459179_3_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::MoleMole::UIUrbanMapLeftLocationRowContext* Method_2_EDD89BBE1EB73801()
	{
		return ((::MoleMole::UIUrbanMapLeftLocationRowContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_EDD89BBE1EB73801_OFFSET))(this);
	}

	::System::Void Method_2_F2049CF2448AAF57(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_F2049CF2448AAF57_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_27DB0AAEF389BB29(::MoleMole::MonoGamepadModule* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_27DB0AAEF389BB29_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FE1F55EE7FED14F0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_FE1F55EE7FED14F0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3DBDEC2CCC11C462(::MoleMole::UIUrbanMapLeftLocationContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationContext*))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_3DBDEC2CCC11C462_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C485DD4925F82638_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_C485DD4925F82638_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1033B43C898812F7(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_1033B43C898812F7_OFFSET))(this, a1, a2);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_866057E5772343C9_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_866057E5772343C9_1_OFFSET))(this, a1);
	}

	::MonoUITableScrollV2_InitScrollViewData* Method_2_64852D2F315C2B34_1()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_64852D2F315C2B34_1_OFFSET))(this);
	}

	::System::Boolean Method_2_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B5019D8789E2A3F_METHOD_2_4DB14E9CF0E552EE_OFFSET))(this);
	}
};
