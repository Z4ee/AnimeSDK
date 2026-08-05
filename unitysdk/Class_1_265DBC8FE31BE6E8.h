#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_8E2613C0147FD640_OFFSET UNITYSDK_OFFSET(0x14DF89A0)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_9AED738B9DBB144C_OFFSET UNITYSDK_OFFSET(0x14DF8E20)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_A02AEECE2ED91F5E_OFFSET UNITYSDK_OFFSET(0x14DF92C0)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_A0941DB3262C4802_OFFSET UNITYSDK_OFFSET(0x14DF8D70)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_BC6708992C503977_OFFSET UNITYSDK_OFFSET(0x14DF9470)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_CB37F5999F8332D6_OFFSET UNITYSDK_OFFSET(0x14DF8C10)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x14DF88F0)
#define CLASS_1_265DBC8FE31BE6E8_METHOD_1_FFF30A265AB2549D_OFFSET UNITYSDK_OFFSET(0x14DF84A0)
#define CLASS_1_265DBC8FE31BE6E8__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF8290)

inline static constexpr unsigned int Class_1_265DBC8FE31BE6E8_TypeDefinitionIndex = 59324;

class Class_1_265DBC8FE31BE6E8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Bounds, ::UnityEngine::Matrix4x4>>* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* Field_1_19; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_12; // 0x20
	::UnityEngine::Bounds Field_1_6; // 0x28
	::System::ValueTuple_2<::System::Single, ::System::Single> Field_1_18; // 0x40
	::UnityEngine::Vector3 Field_1_0; // 0x48
	::MoleMole::Vector2Int Field_1_11; // 0x54
	::System::Int32 Field_1_4; // 0x5C
	::UnityEngine::Vector3 Field_1_1; // 0x60
	::System::Int32 Field_1_10; // 0x6C
	::System::Int32 Field_1_8; // 0x70
	::System::Int32 Field_1_15; // 0x74
	::UnityEngine::Vector2 Field_1_13; // 0x78
	::UnityEngine::Vector3 Field_1_7; // 0x80
	::System::Int32 Field_1_9; // 0x8C
	::UnityEngine::Vector2 Field_1_5; // 0x90

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector2 a4, ::System::Int32 a5, ::MoleMole::Vector2Int a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::System::Int32, ::MoleMole::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> Method_1_FFF30A265AB2549D(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_FFF30A265AB2549D_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_1_8E2613C0147FD640(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_8E2613C0147FD640_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB37F5999F8332D6(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_CB37F5999F8332D6_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_A0941DB3262C4802(::Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F& a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_A0941DB3262C4802_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_1_9AED738B9DBB144C(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_9AED738B9DBB144C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A02AEECE2ED91F5E(::Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Matrix4x4 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F&, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_A02AEECE2ED91F5E_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F Method_1_BC6708992C503977(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
	{
		return ((::Class_1_265DBC8FE31BE6E8_Struct_2_8F7D411D7220AF8F(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CLASS_1_265DBC8FE31BE6E8_METHOD_1_BC6708992C503977_OFFSET))(this, a1, a2);
	}
};
