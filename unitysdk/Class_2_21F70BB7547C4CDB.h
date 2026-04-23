#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9DD8A46984F1AFFD;

#define CLASS_2_21F70BB7547C4CDB_CLEAR_OFFSET UNITYSDK_OFFSET(0x18056BB0)
#define CLASS_2_21F70BB7547C4CDB_METHOD_2_0C62EE194D19C669_OFFSET UNITYSDK_OFFSET(0x18056C60)
#define CLASS_2_21F70BB7547C4CDB_METHOD_2_0D12C41373AA4636_OFFSET UNITYSDK_OFFSET(0x18057280)
#define CLASS_2_21F70BB7547C4CDB__CTOR_OFFSET UNITYSDK_OFFSET(0x18057570)
#define CLASS_2_21F70BB7547C4CDB___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x18057580)

inline static constexpr unsigned int Class_2_21F70BB7547C4CDB_TypeDefinitionIndex = 39355;

class Class_2_21F70BB7547C4CDB : public ::Class_1_D3F97394EEAB34D6
{
public:
	::UnityEngine::Vector3 Field_2_2; // 0x338
	::System::Single Field_2_1; // 0x344
	::System::Boolean Field_2_4; // 0x348
	::UnityEngine::Vector3 Field_2_3; // 0x34C
	::UnityEngine::Vector3 Field_2_0; // 0x358

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F70BB7547C4CDB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F70BB7547C4CDB_CLEAR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_0C62EE194D19C669(::Class_2_9DD8A46984F1AFFD* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_9DD8A46984F1AFFD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_21F70BB7547C4CDB_METHOD_2_0C62EE194D19C669_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_0D12C41373AA4636(::Class_2_9DD8A46984F1AFFD* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_9DD8A46984F1AFFD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_21F70BB7547C4CDB_METHOD_2_0D12C41373AA4636_OFFSET))(a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21F70BB7547C4CDB___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
