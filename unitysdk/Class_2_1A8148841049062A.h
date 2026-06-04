#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4532365BD3F1290.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_1_OFFSET UNITYSDK_OFFSET(0x18CFE4E0)
#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_2_OFFSET UNITYSDK_OFFSET(0x18CFE620)
#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_3_OFFSET UNITYSDK_OFFSET(0x18CFE760)
#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_OFFSET UNITYSDK_OFFSET(0x18CFE3A0)
#define CLASS_2_1A8148841049062A_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x18CFE8A0)
#define CLASS_2_1A8148841049062A__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFE960)

inline static constexpr unsigned int Class_2_1A8148841049062A_TypeDefinitionIndex = 39791;

class Class_2_1A8148841049062A : public ::Class_1_F4532365BD3F1290
{
public:
	::System::String* Field_2_0; // 0x68
	::UnityEngine::GameObject* Field_2_1; // 0x70
	::UnityEngine::MonoBehaviour* Field_2_2; // 0x78
	::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* Field_2_3; // 0x80
	::Class_2_1A8148841049062A* Field_2_4; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8148841049062A__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_6F184156BD60CD91(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F184156BD60CD91_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F184156BD60CD91_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_2_OFFSET))(this, a1);
	}

	::System::Single Method_2_6F184156BD60CD91_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_3_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A8148841049062A_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}
};
