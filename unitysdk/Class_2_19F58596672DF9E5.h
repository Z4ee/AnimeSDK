#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_451601B8BB62C38C_6;
class Class_1_EFAE533959663742;
class Class_2_A944C35C433158AC;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_19F58596672DF9E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177F06B0)
#define CLASS_2_19F58596672DF9E5_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x177F0500)
#define CLASS_2_19F58596672DF9E5_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x177F04F0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3AB92A310C458D7A_OFFSET UNITYSDK_OFFSET(0x177F2090)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3BCB6A831A0CC363_OFFSET UNITYSDK_OFFSET(0x177F3650)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_1_OFFSET UNITYSDK_OFFSET(0x177F2B30)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_2_OFFSET UNITYSDK_OFFSET(0x177F3780)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x177F2BD0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3D7C8028EBFBA9A4_OFFSET UNITYSDK_OFFSET(0x177F3EF0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3DAADDFE5E89E82B_OFFSET UNITYSDK_OFFSET(0x177F37F0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_3FD3EB647B47C885_OFFSET UNITYSDK_OFFSET(0x177F33B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_4273C463AE155BFB_OFFSET UNITYSDK_OFFSET(0x177F1090)
#define CLASS_2_19F58596672DF9E5_METHOD_2_42E626231565E1E4_OFFSET UNITYSDK_OFFSET(0x177F2D10)
#define CLASS_2_19F58596672DF9E5_METHOD_2_43841C47716286CE_1_OFFSET UNITYSDK_OFFSET(0x177F0F20)
#define CLASS_2_19F58596672DF9E5_METHOD_2_43841C47716286CE_OFFSET UNITYSDK_OFFSET(0x177F0D20)
#define CLASS_2_19F58596672DF9E5_METHOD_2_482EEA11E3F46C3E_OFFSET UNITYSDK_OFFSET(0x177F0910)
#define CLASS_2_19F58596672DF9E5_METHOD_2_50FBFE3CA796577A_1_OFFSET UNITYSDK_OFFSET(0x177F31A0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_50FBFE3CA796577A_OFFSET UNITYSDK_OFFSET(0x177F2F90)
#define CLASS_2_19F58596672DF9E5_METHOD_2_52DFB2841270BF9F_1_OFFSET UNITYSDK_OFFSET(0x177F4110)
#define CLASS_2_19F58596672DF9E5_METHOD_2_52DFB2841270BF9F_OFFSET UNITYSDK_OFFSET(0x177F2910)
#define CLASS_2_19F58596672DF9E5_METHOD_2_57E9EA809B95083F_OFFSET UNITYSDK_OFFSET(0x177F05C0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_6FC8AF496F5916AD_OFFSET UNITYSDK_OFFSET(0x177F1AB0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_73052712910A9EE7_OFFSET UNITYSDK_OFFSET(0x177F0B50)
#define CLASS_2_19F58596672DF9E5_METHOD_2_7DB540F7EC4E5E2C_OFFSET UNITYSDK_OFFSET(0x177F4720)
#define CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_1_OFFSET UNITYSDK_OFFSET(0x177F4370)
#define CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_OFFSET UNITYSDK_OFFSET(0x177F27B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_1_OFFSET UNITYSDK_OFFSET(0x177F4050)
#define CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_2_OFFSET UNITYSDK_OFFSET(0x177F49B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x177F2C50)
#define CLASS_2_19F58596672DF9E5_METHOD_2_870FF73CE31C0D23_OFFSET UNITYSDK_OFFSET(0x177F1FE0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_8F54650C0C7FD373_OFFSET UNITYSDK_OFFSET(0x177F07F0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x177F1B50)
#define CLASS_2_19F58596672DF9E5_METHOD_2_9BE88A8FED9C577F_OFFSET UNITYSDK_OFFSET(0x177F4870)
#define CLASS_2_19F58596672DF9E5_METHOD_2_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x177F46B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x177F4330)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CB15442998B4BFD1_OFFSET UNITYSDK_OFFSET(0x177F1BB0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CCBB5FECCB6E198C_OFFSET UNITYSDK_OFFSET(0x177F15B0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_CF50FCA720F99C48_OFFSET UNITYSDK_OFFSET(0x177F3C80)
#define CLASS_2_19F58596672DF9E5_METHOD_2_D675670EA8F43CD1_OFFSET UNITYSDK_OFFSET(0x177F44D0)
#define CLASS_2_19F58596672DF9E5_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x177F2580)
#define CLASS_2_19F58596672DF9E5_ONCREATE_OFFSET UNITYSDK_OFFSET(0x177F0670)
#define CLASS_2_19F58596672DF9E5_UPDATE_OFFSET UNITYSDK_OFFSET(0x177F1020)
#define CLASS_2_19F58596672DF9E5__CTOR_OFFSET UNITYSDK_OFFSET(0x177F1E30)

inline static constexpr unsigned int Class_2_19F58596672DF9E5_TypeDefinitionIndex = 80693;

class Class_2_19F58596672DF9E5 : public ::Foundation::SingletonDisposable_1<::Class_2_19F58596672DF9E5*>
{
public:
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_A944C35C433158AC*>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_EFAE533959663742*>* Field_2_15; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_2_7; // 0x20
	::System::Collections::Generic::Queue_1<::Class_2_A944C35C433158AC*>* Field_2_5; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_A944C35C433158AC*>* Field_2_1; // 0x30
	::Class_2_A944C35C433158AC* Field_2_4; // 0x38
	::System::Boolean Field_2_6; // 0x40
	::System::Int32 Field_2_10; // 0x44
	::System::Int32 Field_2_11; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FC8AF496F5916AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_6FC8AF496F5916AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_870FF73CE31C0D23(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_870FF73CE31C0D23_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8F54650C0C7FD373(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_8F54650C0C7FD373_OFFSET))(this, a1);
	}

	::System::Void Method_2_3AB92A310C458D7A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3AB92A310C458D7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_7E0102A7D81125F5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_52DFB2841270BF9F(::Class_2_A944C35C433158AC* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A944C35C433158AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_52DFB2841270BF9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_A944C35C433158AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A944C35C433158AC*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_2_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::Class_2_A944C35C433158AC* Method_2_42E626231565E1E4(::System::String* a1, ::System::Action_1<::UnityEngine::Transform*>* a2, ::System::Action_1<::UnityEngine::Transform*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::UnityEngine::Transform* a7, ::Class_1_451601B8BB62C38C_6* a8)
	{
		return ((::Class_2_A944C35C433158AC*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::UnityEngine::Transform*, ::Class_1_451601B8BB62C38C_6*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_42E626231565E1E4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_3C8305164A0C9B06_1(::Class_2_A944C35C433158AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A944C35C433158AC*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_50FBFE3CA796577A(::Class_2_A944C35C433158AC* a1, ::System::Double a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A944C35C433158AC*, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_50FBFE3CA796577A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_50FBFE3CA796577A_1(::Class_2_A944C35C433158AC* a1, ::System::Double a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A944C35C433158AC*, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_50FBFE3CA796577A_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3FD3EB647B47C885(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3FD3EB647B47C885_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4273C463AE155BFB(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_4273C463AE155BFB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3BCB6A831A0CC363(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3BCB6A831A0CC363_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_73052712910A9EE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_73052712910A9EE7_OFFSET))(this);
	}

	::System::Void Method_2_3C8305164A0C9B06_2(::Class_2_A944C35C433158AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A944C35C433158AC*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3C8305164A0C9B06_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCBB5FECCB6E198C(::System::Single a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CCBB5FECCB6E198C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_43841C47716286CE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_43841C47716286CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DAADDFE5E89E82B(::Class_2_A944C35C433158AC* a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A944C35C433158AC*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3DAADDFE5E89E82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CB15442998B4BFD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CB15442998B4BFD1_OFFSET))(this, a1);
	}

	::Class_2_A944C35C433158AC* Method_2_CF50FCA720F99C48(::System::String* a1, ::System::String* a2, ::System::Action_1<::UnityEngine::Transform*>* a3, ::System::Action_1<::UnityEngine::Transform*>* a4, ::System::Action* a5, ::System::Action* a6, ::System::Boolean a7, ::UnityEngine::Transform* a8, ::Class_1_451601B8BB62C38C_6* a9)
	{
		return ((::Class_2_A944C35C433158AC*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::UnityEngine::Transform*, ::Class_1_451601B8BB62C38C_6*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CF50FCA720F99C48_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::Class_1_EFAE533959663742* Method_2_3D7C8028EBFBA9A4(::System::String* a1)
	{
		return ((::Class_1_EFAE533959663742*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_3D7C8028EBFBA9A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_86143FF46EAE82B7_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_482EEA11E3F46C3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_482EEA11E3F46C3E_OFFSET))(this);
	}

	::System::Boolean Method_2_52DFB2841270BF9F_1(::Class_2_A944C35C433158AC* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A944C35C433158AC*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_52DFB2841270BF9F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7E0102A7D81125F5_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_7E0102A7D81125F5_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D675670EA8F43CD1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_D675670EA8F43CD1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void Method_2_7DB540F7EC4E5E2C(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_7DB540F7EC4E5E2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9BE88A8FED9C577F(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_9BE88A8FED9C577F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_43841C47716286CE_1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_43841C47716286CE_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_86143FF46EAE82B7_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_86143FF46EAE82B7_2_OFFSET))(this, a1);
	}

	::Class_2_A944C35C433158AC* Method_2_57E9EA809B95083F()
	{
		return ((::Class_2_A944C35C433158AC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19F58596672DF9E5_METHOD_2_57E9EA809B95083F_OFFSET))(this);
	}
};
