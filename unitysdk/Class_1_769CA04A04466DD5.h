#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/QuadraticEquation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_769CA04A04466DD5_METHOD_1_02D6CB58D04D08DB_OFFSET UNITYSDK_OFFSET(0xCD24320)
#define CLASS_1_769CA04A04466DD5_METHOD_1_0499609281815ED8_OFFSET UNITYSDK_OFFSET(0xCD24580)
#define CLASS_1_769CA04A04466DD5_METHOD_1_0EC3D1B01450D11A_OFFSET UNITYSDK_OFFSET(0xCD24900)
#define CLASS_1_769CA04A04466DD5_METHOD_1_74C6315ADED0438E_OFFSET UNITYSDK_OFFSET(0xCD24400)
#define CLASS_1_769CA04A04466DD5_METHOD_1_C50A3E7213349C80_OFFSET UNITYSDK_OFFSET(0xCD24FC0)
#define CLASS_1_769CA04A04466DD5_METHOD_1_DC03A16943ED2FEF_OFFSET UNITYSDK_OFFSET(0xCD25A80)
#define CLASS_1_769CA04A04466DD5__CTOR_OFFSET UNITYSDK_OFFSET(0xCD25E40)

inline static constexpr unsigned int Class_1_769CA04A04466DD5_TypeDefinitionIndex = 67458;

class Class_1_769CA04A04466DD5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5__CTOR_OFFSET))(this);
	}

	static ::System::Single Method_1_02D6CB58D04D08DB(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5_METHOD_1_02D6CB58D04D08DB_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector2 Method_1_74C6315ADED0438E(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5_METHOD_1_74C6315ADED0438E_OFFSET))(a1, a2, a3);
	}

	static ::RPG::Client::QuadraticEquation Method_1_0499609281815ED8(::UnityEngine::AnimationCurve* a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::RPG::Client::QuadraticEquation(*)(::UnityEngine::AnimationCurve*, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5_METHOD_1_0499609281815ED8_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::Client::QuadraticEquation Method_1_0EC3D1B01450D11A(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1)
	{
		return ((::RPG::Client::QuadraticEquation(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5_METHOD_1_0EC3D1B01450D11A_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::Double>* Method_1_C50A3E7213349C80(::Il2CppArray<::System::Double>* a1, ::Il2CppArray<::System::Double>* a2)
	{
		return ((::Il2CppArray<::System::Double>*(*)(::Il2CppArray<::System::Double>*, ::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5_METHOD_1_C50A3E7213349C80_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DC03A16943ED2FEF(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_769CA04A04466DD5_METHOD_1_DC03A16943ED2FEF_OFFSET))(a1, a2, a3, a4);
	}
};
