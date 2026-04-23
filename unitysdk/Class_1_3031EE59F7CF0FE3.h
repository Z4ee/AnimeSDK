#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_9940F9E16DD482B4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_67575AC56C6FBCEB_OFFSET UNITYSDK_OFFSET(0x11B06C70)
#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_6E2128B3A802AA33_OFFSET UNITYSDK_OFFSET(0x11B06E40)
#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_95589B1C94856A93_OFFSET UNITYSDK_OFFSET(0x11B06D10)
#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_990A69FAF75D4065_OFFSET UNITYSDK_OFFSET(0x11B06BB0)
#define CLASS_1_3031EE59F7CF0FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x11B06F60)

inline static constexpr unsigned int Class_1_3031EE59F7CF0FE3_TypeDefinitionIndex = 57539;

class Class_1_3031EE59F7CF0FE3 : public ::System::Object
{
public:
	::Class_1_9940F9E16DD482B4* Field_1_2; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::UnityEngine::Vector2Int Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Method_1_990A69FAF75D4065()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3_METHOD_1_990A69FAF75D4065_OFFSET))(this);
	}

	::System::String* Method_1_67575AC56C6FBCEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3_METHOD_1_67575AC56C6FBCEB_OFFSET))(this);
	}

	::System::Int32 Method_1_95589B1C94856A93()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3_METHOD_1_95589B1C94856A93_OFFSET))(this);
	}

	static ::Class_1_3031EE59F7CF0FE3* Method_1_6E2128B3A802AA33(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector2Int a3)
	{
		return ((::Class_1_3031EE59F7CF0FE3*(*)(::System::UInt32, ::System::UInt32, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3_METHOD_1_6E2128B3A802AA33_OFFSET))(a1, a2, a3);
	}
};
