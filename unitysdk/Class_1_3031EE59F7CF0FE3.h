#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_9940F9E16DD482B4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_6E2128B3A802AA33_OFFSET UNITYSDK_OFFSET(0xD7E33C0)
#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_95589B1C94856A93_OFFSET UNITYSDK_OFFSET(0xD7E3290)
#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_BBEF41F5EF3BBDD6_OFFSET UNITYSDK_OFFSET(0xD7E3100)
#define CLASS_1_3031EE59F7CF0FE3_METHOD_1_F6607C3EEA45E849_OFFSET UNITYSDK_OFFSET(0xD7E31F0)
#define CLASS_1_3031EE59F7CF0FE3__CTOR_OFFSET UNITYSDK_OFFSET(0xD7E34E0)

inline static constexpr unsigned int Class_1_3031EE59F7CF0FE3_TypeDefinitionIndex = 62452;

class Class_1_3031EE59F7CF0FE3 : public ::System::Object
{
public:
	::Class_1_9940F9E16DD482B4* AEOJEPKGNAC; // 0x10
	::UnityEngine::Vector2Int MBOMJGLEPMA; // 0x18
	::System::UInt32 PDCMDACNCCN; // 0x20
	::System::UInt32 HKAHFHHICEN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* Method_1_BBEF41F5EF3BBDD6()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3_METHOD_1_BBEF41F5EF3BBDD6_OFFSET))(this);
	}

	::System::String* Method_1_F6607C3EEA45E849()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3031EE59F7CF0FE3_METHOD_1_F6607C3EEA45E849_OFFSET))(this);
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
