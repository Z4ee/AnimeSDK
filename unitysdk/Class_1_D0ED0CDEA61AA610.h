#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0ED0CDEA61AA610_Struct_2_09F187266BCD97E7.h"
#include "unitysdk/Class_1_D0ED0CDEA61AA610_Struct_2_82986F1B4842ADA2.h"
#include "unitysdk/Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345;
class Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_89FFBE5C1B95821A_OFFSET UNITYSDK_OFFSET(0x143DB770)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_90A9D3FC07AADABC_OFFSET UNITYSDK_OFFSET(0x143DB7C0)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_90ABD7740456E116_OFFSET UNITYSDK_OFFSET(0x143E0FA0)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_988BFD308A49965D_OFFSET UNITYSDK_OFFSET(0x143E1460)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_B742E1939D14B5D8_OFFSET UNITYSDK_OFFSET(0x143E1470)
#define CLASS_1_D0ED0CDEA61AA610_METHOD_1_F7DA84B2DBBEE47B_OFFSET UNITYSDK_OFFSET(0x143DB860)
#define CLASS_1_D0ED0CDEA61AA610__CTOR_OFFSET UNITYSDK_OFFSET(0x143E1480)

inline static constexpr unsigned int Class_1_D0ED0CDEA61AA610_TypeDefinitionIndex = 66095;

class Class_1_D0ED0CDEA61AA610 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_D0ED0CDEA61AA610_Class_1_99864A5AECFC1D07*, ::Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_1_D0ED0CDEA61AA610_Struct_2_09F187266BCD97E7, ::Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF>* Field_1_8; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Field_1_9; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_10; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_11; // 0x68
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_12; // 0x70
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_13; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_14; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_15; // 0x88
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_16; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_17; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_18; // 0xA0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_19; // 0xA8
	::UnityEngine::Material* Field_1_20; // 0xB0
	::System::Collections::Generic::List_1<::Class_1_D0ED0CDEA61AA610_Struct_2_E408DF06333D3EEF>* Field_1_21; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_22; // 0xC0
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_23; // 0xC8
	::System::Collections::Generic::List_1<::Class_1_D0ED0CDEA61AA610_Class_1_62A0213EB5F9B345*>* Field_1_24; // 0xD0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_25; // 0xD8
	::UnityEngine::Ray Field_1_26; // 0xE0
	::System::Boolean Field_1_27; // 0xF8
	::System::Boolean Field_1_28; // 0xF9
	::Class_1_D0ED0CDEA61AA610_Struct_2_82986F1B4842ADA2 Field_1_29; // 0xFC

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

	::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* Method_1_F7DA84B2DBBEE47B()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0ED0CDEA61AA610_METHOD_1_F7DA84B2DBBEE47B_OFFSET))(this);
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
