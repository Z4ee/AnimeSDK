#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D9AF3173C1DA69AF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A495E97DAB27F2CA_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x8708D10)
#define CLASS_1_A495E97DAB27F2CA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x8708D30)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x87091C0)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_67013AED7A137AC2_OFFSET UNITYSDK_OFFSET(0x870AA00)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_70C94CF7CAAC2993_OFFSET UNITYSDK_OFFSET(0x8708DE0)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_71E45816CC8CE101_OFFSET UNITYSDK_OFFSET(0x8709B30)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_7D39C7905D2CF474_OFFSET UNITYSDK_OFFSET(0x8709600)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_AD4A894C8A8D0EE9_OFFSET UNITYSDK_OFFSET(0x8708D50)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_BA45C85D2944586C_OFFSET UNITYSDK_OFFSET(0x87092B0)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_C0CEF191BDE8EE39_OFFSET UNITYSDK_OFFSET(0x870A850)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_D29022F321E44429_OFFSET UNITYSDK_OFFSET(0x8709A50)
#define CLASS_1_A495E97DAB27F2CA_METHOD_1_EEE4666ED7267629_OFFSET UNITYSDK_OFFSET(0x8709660)
#define CLASS_1_A495E97DAB27F2CA_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x8708D20)
#define CLASS_1_A495E97DAB27F2CA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x8708D40)
#define CLASS_1_A495E97DAB27F2CA__CTOR_OFFSET UNITYSDK_OFFSET(0x870AA50)

inline static constexpr unsigned int Class_1_A495E97DAB27F2CA_TypeDefinitionIndex = 42083;

class Class_1_A495E97DAB27F2CA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_2; // 0x10
	::UnityEngine::Vector2Int _Size_k__BackingField; // 0x18
	::Struct_2_D9AF3173C1DA69AF Field_1_3; // 0x20
	::UnityEngine::Vector2Int _Offset_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2Int get_Offset()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_GET_OFFSET_OFFSET))(this);
	}

	::System::Void set_Offset(::UnityEngine::Vector2Int value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_SET_OFFSET_OFFSET))(this, value);
	}

	::UnityEngine::Vector2Int get_Size()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_GET_SIZE_OFFSET))(this);
	}

	::System::Void set_Size(::UnityEngine::Vector2Int value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_SET_SIZE_OFFSET))(this, value);
	}

	::UnityEngine::Vector2Int Method_1_AD4A894C8A8D0EE9()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_AD4A894C8A8D0EE9_OFFSET))(this);
	}

	::System::Void Method_1_70C94CF7CAAC2993(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Collections::Generic::IEnumerable_1<::Struct_2_D9AF3173C1DA69AF>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Collections::Generic::IEnumerable_1<::Struct_2_D9AF3173C1DA69AF>*))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_70C94CF7CAAC2993_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BA45C85D2944586C(::Struct_2_D9AF3173C1DA69AF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D9AF3173C1DA69AF))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_BA45C85D2944586C_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_EEE4666ED7267629(::System::Collections::Generic::List_1<::UnityEngine::Bounds>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Bounds>*))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_EEE4666ED7267629_OFFSET))(this, a1);
	}

	::System::Void Method_1_71E45816CC8CE101(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_71E45816CC8CE101_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7D39C7905D2CF474(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_7D39C7905D2CF474_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D29022F321E44429(::UnityEngine::Vector2Int a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_D29022F321E44429_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0CEF191BDE8EE39(::Class_1_A495E97DAB27F2CA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A495E97DAB27F2CA*))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_C0CEF191BDE8EE39_OFFSET))(this, a1);
	}

	::Class_1_A495E97DAB27F2CA* Method_1_67013AED7A137AC2(::Class_1_A495E97DAB27F2CA* a1)
	{
		return ((::Class_1_A495E97DAB27F2CA*(*)(::PVOID, ::Class_1_A495E97DAB27F2CA*))((::PBYTE)hIl2Cpp + CLASS_1_A495E97DAB27F2CA_METHOD_1_67013AED7A137AC2_OFFSET))(this, a1);
	}
};
