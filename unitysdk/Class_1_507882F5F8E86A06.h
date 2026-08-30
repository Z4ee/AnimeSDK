#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6E07DF52D9AB44EB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_507882F5F8E86A06_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x18F28660)
#define CLASS_1_507882F5F8E86A06_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x18F28680)
#define CLASS_1_507882F5F8E86A06_METHOD_1_0D752C766117E4BD_OFFSET UNITYSDK_OFFSET(0x18F28730)
#define CLASS_1_507882F5F8E86A06_METHOD_1_67013AED7A137AC2_OFFSET UNITYSDK_OFFSET(0x18F29F70)
#define CLASS_1_507882F5F8E86A06_METHOD_1_7D39C7905D2CF474_OFFSET UNITYSDK_OFFSET(0x18F29080)
#define CLASS_1_507882F5F8E86A06_METHOD_1_A71E0DDC4CDB8292_OFFSET UNITYSDK_OFFSET(0x18F290E0)
#define CLASS_1_507882F5F8E86A06_METHOD_1_AD4A894C8A8D0EE9_OFFSET UNITYSDK_OFFSET(0x18F286A0)
#define CLASS_1_507882F5F8E86A06_METHOD_1_BA45C85D2944586C_OFFSET UNITYSDK_OFFSET(0x18F28D70)
#define CLASS_1_507882F5F8E86A06_METHOD_1_BBD608C3D3B890FF_OFFSET UNITYSDK_OFFSET(0x18F294A0)
#define CLASS_1_507882F5F8E86A06_METHOD_1_C0CEF191BDE8EE39_OFFSET UNITYSDK_OFFSET(0x18F29DC0)
#define CLASS_1_507882F5F8E86A06_METHOD_1_D29022F321E44429_OFFSET UNITYSDK_OFFSET(0x18F293B0)
#define CLASS_1_507882F5F8E86A06_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x18F28CC0)
#define CLASS_1_507882F5F8E86A06_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x18F28670)
#define CLASS_1_507882F5F8E86A06_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x18F28690)
#define CLASS_1_507882F5F8E86A06__CTOR_OFFSET UNITYSDK_OFFSET(0x18F29FC0)

inline static constexpr unsigned int Class_1_507882F5F8E86A06_TypeDefinitionIndex = 52345;

class Class_1_507882F5F8E86A06 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* EBNPHHCEJKD; // 0x10
	::Struct_2_6E07DF52D9AB44EB IJNBNFHBENO; // 0x18
	::UnityEngine::Vector2Int _Size_k__BackingField; // 0x30
	::UnityEngine::Vector2Int _Offset_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2Int get_Offset()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_SET_OFFSET_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int get_Size()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_GET_SIZE_OFFSET))(this);
	}

	::System::Void set_Size(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_SET_SIZE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int Method_1_AD4A894C8A8D0EE9()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_AD4A894C8A8D0EE9_OFFSET))(this);
	}

	::System::Void Method_1_0D752C766117E4BD(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Collections::Generic::IEnumerable_1<::Struct_2_6E07DF52D9AB44EB>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Collections::Generic::IEnumerable_1<::Struct_2_6E07DF52D9AB44EB>*))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_0D752C766117E4BD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BA45C85D2944586C(::Struct_2_6E07DF52D9AB44EB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E07DF52D9AB44EB))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_BA45C85D2944586C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_A71E0DDC4CDB8292(::System::Collections::Generic::List_1<::UnityEngine::Bounds>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_A71E0DDC4CDB8292_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBD608C3D3B890FF(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_BBD608C3D3B890FF_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7D39C7905D2CF474(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_7D39C7905D2CF474_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D29022F321E44429(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_D29022F321E44429_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0CEF191BDE8EE39(::Class_1_507882F5F8E86A06* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_507882F5F8E86A06*))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_C0CEF191BDE8EE39_OFFSET))(this, a1);
	}

	::Class_1_507882F5F8E86A06* Method_1_67013AED7A137AC2(::Class_1_507882F5F8E86A06* a1)
	{
		return ((::Class_1_507882F5F8E86A06*(*)(::PVOID, ::Class_1_507882F5F8E86A06*))((::PBYTE)hIl2Cpp + CLASS_1_507882F5F8E86A06_METHOD_1_67013AED7A137AC2_OFFSET))(this, a1);
	}
};
