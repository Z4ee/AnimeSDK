#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class TraceWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_320656FCC337E7EB_METHOD_2_4D7415801DC140C5_OFFSET UNITYSDK_OFFSET(0x18FA17D0)
#define CLASS_2_320656FCC337E7EB_METHOD_2_661EFEFA453C5C1A_OFFSET UNITYSDK_OFFSET(0x18FA1910)
#define CLASS_2_320656FCC337E7EB_METHOD_2_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x18FA1660)
#define CLASS_2_320656FCC337E7EB_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x18FA1340)
#define CLASS_2_320656FCC337E7EB__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA12E0)

inline static constexpr unsigned int Class_2_320656FCC337E7EB_TypeDefinitionIndex = 52281;

class Class_2_320656FCC337E7EB : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::TraceWithDetectProjectileData* Field_2_0; // 0x48
	::UnityEngine::Collider* Field_2_1; // 0x50
	::System::Boolean Field_2_2; // 0x58
	::System::Boolean Field_2_3; // 0x59
	::System::Boolean Field_2_4; // 0x5A
	::System::Int32 Field_2_5; // 0x5C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_320656FCC337E7EB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_320656FCC337E7EB_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_8A8F4D8840527053()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_320656FCC337E7EB_METHOD_2_8A8F4D8840527053_OFFSET))(this);
	}

	::System::Void Method_2_4D7415801DC140C5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_320656FCC337E7EB_METHOD_2_4D7415801DC140C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_661EFEFA453C5C1A(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_320656FCC337E7EB_METHOD_2_661EFEFA453C5C1A_OFFSET))(this, a1, a2);
	}
};
