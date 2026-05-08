#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9E4C3C79299D8BD_METHOD_1_2D8A4C8F5B7C3014_OFFSET UNITYSDK_OFFSET(0x13390630)
#define CLASS_1_D9E4C3C79299D8BD_METHOD_1_6533DC33308961E1_OFFSET UNITYSDK_OFFSET(0x13390420)
#define CLASS_1_D9E4C3C79299D8BD_METHOD_1_8C7FC6C597B7AE70_OFFSET UNITYSDK_OFFSET(0x13390360)
#define CLASS_1_D9E4C3C79299D8BD__CTOR_OFFSET UNITYSDK_OFFSET(0x13390350)

inline static constexpr unsigned int Class_1_D9E4C3C79299D8BD_TypeDefinitionIndex = 42600;

class Class_1_D9E4C3C79299D8BD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9E4C3C79299D8BD__CTOR_OFFSET))(this);
	}

	static ::MoleMole::Vector2Int Method_1_8C7FC6C597B7AE70(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
	{
		return ((::MoleMole::Vector2Int(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D9E4C3C79299D8BD_METHOD_1_8C7FC6C597B7AE70_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_1_6533DC33308961E1(::UnityEngine::Bounds a1, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* a2, ::System::Int32 a3, ::System::Random* a4)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Bounds, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>*, ::System::Int32, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_D9E4C3C79299D8BD_METHOD_1_6533DC33308961E1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_2D8A4C8F5B7C3014(::System::Random* a1, ::System::Single a2, ::UnityEngine::Bounds a3, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>* a4, ::System::Int32 a5)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::System::Random*, ::System::Single, ::UnityEngine::Bounds, ::System::Func_2<::UnityEngine::Vector2, ::System::Boolean>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D9E4C3C79299D8BD_METHOD_1_2D8A4C8F5B7C3014_OFFSET))(a1, a2, a3, a4, a5);
	}
};
