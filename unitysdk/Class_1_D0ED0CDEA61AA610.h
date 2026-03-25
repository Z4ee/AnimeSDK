#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0ED0CDEA61AA610_Struct_2_4753009D0AD89794.h"
#include "unitysdk/Class_1_D0ED0CDEA61AA610_Struct_2_82986F1B4842ADA2.h"
#include "unitysdk/Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D0ED0CDEA61AA610_Class_1_B440A32A7B5DD70F;
class Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_89FFBE5C1B95821A_OFFSET UNITYSDK_OFFSET(0x10BB0800)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_90A9D3FC07AADABC_OFFSET UNITYSDK_OFFSET(0x10BB0850)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_90ABD7740456E116_OFFSET UNITYSDK_OFFSET(0x10BB4B60)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_988BFD308A49965D_OFFSET UNITYSDK_OFFSET(0x10BB4FA0)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_B742E1939D14B5D8_OFFSET UNITYSDK_OFFSET(0x10BB4FB0)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_D606E24ADEDB8A0D_OFFSET UNITYSDK_OFFSET(0x10BB08F0)
#define CLASS_1_D0ED0CDEA61AA610__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB4FC0)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_TypeDefinitionIndex = 57881;

class Class_1_D0ED0CDEA61AA610 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_20; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_22; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_23; // 0x20
	::System::Collections::Generic::List_1<::Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891*>* Field_1_27; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_15; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_14; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_18; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_29; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_19; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Field_1_3; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_25; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_8; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_16; // 0x70
	::System::Collections::Generic::List_1<::Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF>* Field_1_26; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_13; // 0x80
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_17; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_11; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_10; // 0x98
	::UnityEngine::Material* Field_1_1; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Field_1_28; // 0xA8
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_24; // 0xB0
	::System::Collections::Generic::Dictionary_2<::Class_1_D0ED0CDEA61AA610_Class_1_B440A32A7B5DD70F*, ::Class_1_D0ED0CDEA61AA610_Class_1_CE6A8579BF06A891*>* Field_1_21; // 0xB8
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_12; // 0xC0
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0xC8
	::System::Collections::Generic::Dictionary_2<::Class_1_D0ED0CDEA61AA610_Struct_2_4753009D0AD89794, ::Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF>* Field_1_6; // 0xD0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0xD8
	::System::Boolean Field_1_0; // 0xE0
	::System::Boolean Field_1_2; // 0xE1
	::Class_1_D0ED0CDEA61AA610_Struct_2_82986F1B4842ADA2 Field_1_4; // 0xE4
	::UnityEngine::Ray Field_1_5; // 0xFC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_89FFBE5C1B95821A(::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_89FFBE5C1B95821A_OFFSET))(this, a1);
	}

	::System::Void Method_1_90A9D3FC07AADABC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_90A9D3FC07AADABC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Method_1_D606E24ADEDB8A0D()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_D606E24ADEDB8A0D_OFFSET))(this);
	}

	::System::Void Method_1_90ABD7740456E116(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a6, ::UnityEngine::Material* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_90ABD7740456E116_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_988BFD308A49965D_OFFSET))(this);
	}

	::System::Void Method_1_B742E1939D14B5D8(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_B742E1939D14B5D8_OFFSET))(this, a1);
	}
};
