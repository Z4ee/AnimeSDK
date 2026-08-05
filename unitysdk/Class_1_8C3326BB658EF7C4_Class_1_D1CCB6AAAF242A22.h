#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define CLASS_1_8C3326BB658EF7C4_CLASS_1_D1CCB6AAAF242A22_COMPARE_OFFSET UNITYSDK_OFFSET(0x186032C0)
#define CLASS_1_8C3326BB658EF7C4_CLASS_1_D1CCB6AAAF242A22__CCTOR_OFFSET UNITYSDK_OFFSET(0x18603370)
#define CLASS_1_8C3326BB658EF7C4_CLASS_1_D1CCB6AAAF242A22__CTOR_OFFSET UNITYSDK_OFFSET(0x18603360)

inline static constexpr unsigned int Class_1_8C3326BB658EF7C4_Class_1_D1CCB6AAAF242A22_TypeDefinitionIndex = 42967;

class Class_1_8C3326BB658EF7C4_Class_1_D1CCB6AAAF242A22 : public ::System::Object
{
public:
	static ::Class_1_8C3326BB658EF7C4_Class_1_D1CCB6AAAF242A22** StaticGet_Field_1_0()
	{
		return (::Class_1_8C3326BB658EF7C4_Class_1_D1CCB6AAAF242A22**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3326BB658EF7C4_Class_1_D1CCB6AAAF242A22_TypeDefinitionIndex)->GetStaticField(0x35EA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_CLASS_1_D1CCB6AAAF242A22__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_CLASS_1_D1CCB6AAAF242A22__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3Int a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_CLASS_1_D1CCB6AAAF242A22_COMPARE_OFFSET))(this, a1, a2);
	}
};
