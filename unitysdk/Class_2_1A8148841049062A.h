#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_12717824E30066E1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_1_OFFSET UNITYSDK_OFFSET(0x1C4BC480)
#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_2_OFFSET UNITYSDK_OFFSET(0x1C4BC5C0)
#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_3_OFFSET UNITYSDK_OFFSET(0x1C4BC700)
#define CLASS_2_1A8148841049062A_METHOD_2_6F184156BD60CD91_OFFSET UNITYSDK_OFFSET(0x1C4BC340)
#define CLASS_2_1A8148841049062A_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1C4BC840)
#define CLASS_2_1A8148841049062A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4BC900)

inline static constexpr unsigned int Class_2_1A8148841049062A_TypeDefinitionIndex = 41538;

class Class_2_1A8148841049062A : public ::Class_1_12717824E30066E1
{
public:
	::System::Collections::Generic::List_1<::Class_2_1A8148841049062A*>* EGGCADJJJOD; // 0x68
	::System::String* IBCPOFKJGDH; // 0x70
	::UnityEngine::GameObject* CDANMPGNPHN; // 0x78
	::UnityEngine::MonoBehaviour* KCKBEDBOFPN; // 0x80
	::Class_2_1A8148841049062A* BNLCCCCMABF; // 0x88

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
