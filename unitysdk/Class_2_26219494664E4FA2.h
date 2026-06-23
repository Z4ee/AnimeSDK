#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
class MonoUITableScrollV2_InitScrollViewData;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIUrbanMapLeftLocationRowContext; }
namespace MoleMole { class UrbanMapBangkovScrollViewContext; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_26219494664E4FA2_METHOD_2_045A1C47ECCFF414_OFFSET UNITYSDK_OFFSET(0x128BDF90)
#define CLASS_2_26219494664E4FA2_METHOD_2_06936BD8F32EA396_OFFSET UNITYSDK_OFFSET(0x128BC560)
#define CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x128BE720)
#define CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x128BEBF0)
#define CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_3_OFFSET UNITYSDK_OFFSET(0x128BF5E0)
#define CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x128BE5E0)
#define CLASS_2_26219494664E4FA2_METHOD_2_28F762C5C36B043B_OFFSET UNITYSDK_OFFSET(0x128BED40)
#define CLASS_2_26219494664E4FA2_METHOD_2_3513F614EB9E425C_OFFSET UNITYSDK_OFFSET(0x128BE220)
#define CLASS_2_26219494664E4FA2_METHOD_2_4814A0EDDBD66EE5_OFFSET UNITYSDK_OFFSET(0x128B8FA0)
#define CLASS_2_26219494664E4FA2_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x128BA8E0)
#define CLASS_2_26219494664E4FA2_METHOD_2_64852D2F315C2B34_OFFSET UNITYSDK_OFFSET(0x128BEA30)
#define CLASS_2_26219494664E4FA2_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x128BD0A0)
#define CLASS_2_26219494664E4FA2_METHOD_2_7C5B714A2B37D02A_OFFSET UNITYSDK_OFFSET(0x128BF300)
#define CLASS_2_26219494664E4FA2_METHOD_2_7C96C65E6F94E09E_OFFSET UNITYSDK_OFFSET(0x128BBD10)
#define CLASS_2_26219494664E4FA2_METHOD_2_866057E5772343C9_1_OFFSET UNITYSDK_OFFSET(0x128BF070)
#define CLASS_2_26219494664E4FA2_METHOD_2_866057E5772343C9_OFFSET UNITYSDK_OFFSET(0x128BEFA0)
#define CLASS_2_26219494664E4FA2_METHOD_2_8A78614B38E20E5B_OFFSET UNITYSDK_OFFSET(0x128BA2D0)
#define CLASS_2_26219494664E4FA2_METHOD_2_B0C3E7C1A30C67A8_OFFSET UNITYSDK_OFFSET(0x128BE930)
#define CLASS_2_26219494664E4FA2_METHOD_2_B7711D67B612F246_1_OFFSET UNITYSDK_OFFSET(0x128BF560)
#define CLASS_2_26219494664E4FA2_METHOD_2_B7711D67B612F246_OFFSET UNITYSDK_OFFSET(0x128BE860)
#define CLASS_2_26219494664E4FA2_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x128BED30)
#define CLASS_2_26219494664E4FA2_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x128BF2F0)
#define CLASS_2_26219494664E4FA2_METHOD_2_CE4E532CAE79636C_OFFSET UNITYSDK_OFFSET(0x128BF720)
#define CLASS_2_26219494664E4FA2_METHOD_2_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x128BCFF0)
#define CLASS_2_26219494664E4FA2_METHOD_2_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0x128BF7F0)
#define CLASS_2_26219494664E4FA2_METHOD_2_E69F3DFB7CDFE412_OFFSET UNITYSDK_OFFSET(0x128BE8E0)
#define CLASS_2_26219494664E4FA2_METHOD_2_E8C8875CDAFBDE88_OFFSET UNITYSDK_OFFSET(0x128BF140)
#define CLASS_2_26219494664E4FA2_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x128BF990)
#define CLASS_2_26219494664E4FA2_METHOD_2_F2049CF2448AAF57_OFFSET UNITYSDK_OFFSET(0x128BE560)
#define CLASS_2_26219494664E4FA2_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x128BBC90)
#define CLASS_2_26219494664E4FA2_ONSELECT_OFFSET UNITYSDK_OFFSET(0x128BA130)
#define CLASS_2_26219494664E4FA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x128BA280)
#define CLASS_2_26219494664E4FA2__CTOR_OFFSET UNITYSDK_OFFSET(0x128BA1D0)

inline static constexpr unsigned int Class_2_26219494664E4FA2_TypeDefinitionIndex = 80138;

class Class_2_26219494664E4FA2 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_Field_2_8()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_26219494664E4FA2_TypeDefinitionIndex)->GetStaticField(0x45CF0);
	}
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* Field_2_5; // 0x50
	::Il2CppArray<::UnityEngine::Vector3>* Field_2_6; // 0x58
	::Class_2_000597E145D7A42A<::MoleMole::UrbanMapBangkovScrollViewContext*>* Field_2_0; // 0x60
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_1; // 0x68
	::System::Int32 Field_2_2; // 0x70
	::System::Int32 Field_2_3; // 0x74
	::System::Int32 Field_2_4; // 0x78
	::System::Boolean Field_2_7; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_4814A0EDDBD66EE5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_4814A0EDDBD66EE5_OFFSET))(this, a1, a2);
	}

	::System::Void OnSelect(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_ONSELECT_OFFSET))(this, a1);
	}

	::System::Void Method_2_8A78614B38E20E5B(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_8A78614B38E20E5B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::System::String* Method_2_06936BD8F32EA396()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_06936BD8F32EA396_OFFSET))(this);
	}

	::System::Boolean Method_2_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Void Method_2_F2049CF2448AAF57(::MonoUITableScrollV2_MoveContext a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_F2049CF2448AAF57_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Int32 Method_2_B7711D67B612F246(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_B7711D67B612F246_OFFSET))(this, a1);
	}

	::System::Void Method_2_E69F3DFB7CDFE412()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_E69F3DFB7CDFE412_OFFSET))(this);
	}

	::System::Boolean Method_2_B0C3E7C1A30C67A8(::MoleMole::MonoGamepadModule* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_B0C3E7C1A30C67A8_OFFSET))(this, a1, a2);
	}

	::MonoUITableScrollV2_InitScrollViewData* Method_2_64852D2F315C2B34()
	{
		return ((::MonoUITableScrollV2_InitScrollViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_64852D2F315C2B34_OFFSET))(this);
	}

	::System::Int32 Method_2_045A1C47ECCFF414(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_045A1C47ECCFF414_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_28F762C5C36B043B()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_28F762C5C36B043B_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_866057E5772343C9(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_866057E5772343C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C96C65E6F94E09E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_7C96C65E6F94E09E_OFFSET))(this, a1, a2);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_2_866057E5772343C9_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_866057E5772343C9_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E8C8875CDAFBDE88(::MoleMole::MonoGamepadModule* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_E8C8875CDAFBDE88_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_7C5B714A2B37D02A(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_7C5B714A2B37D02A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_B7711D67B612F246_1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_B7711D67B612F246_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_1290EA767C459179_3_OFFSET))(this);
	}

	::System::Void Method_2_CE4E532CAE79636C(::MoleMole::UrbanMapBangkovScrollViewContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UrbanMapBangkovScrollViewContext*))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_CE4E532CAE79636C_OFFSET))(this, a1);
	}

	::System::Void Method_2_3513F614EB9E425C(::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_3513F614EB9E425C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DD1EE3A48E307831()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_DD1EE3A48E307831_OFFSET))(this);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26219494664E4FA2_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}
};
