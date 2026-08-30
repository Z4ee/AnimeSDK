#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8F651F3D2B4BD00E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCCC9A0)
#define CLASS_1_8F651F3D2B4BD00E___C__COMPUTECONVEXHULL_B__0_0_OFFSET UNITYSDK_OFFSET(0xBCCC9E0)
#define CLASS_1_8F651F3D2B4BD00E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCC9D0)

inline static constexpr unsigned int Class_1_8F651F3D2B4BD00E___c_TypeDefinitionIndex = 48032;

class Class_1_8F651F3D2B4BD00E___c : public ::System::Object
{
public:
	static ::Class_1_8F651F3D2B4BD00E___c** StaticGet___9()
	{
		return (::Class_1_8F651F3D2B4BD00E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F651F3D2B4BD00E___c_TypeDefinitionIndex)->GetStaticField(0x60FF0);
	}
	static ::System::Comparison_1<::UnityEngine::Vector2>** StaticGet___9__0_0()
	{
		return (::System::Comparison_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F651F3D2B4BD00E___c_TypeDefinitionIndex)->GetStaticField(0x60FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F651F3D2B4BD00E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F651F3D2B4BD00E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _ComputeConvexHull_b__0_0(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_8F651F3D2B4BD00E___C__COMPUTECONVEXHULL_B__0_0_OFFSET))(this, a1, a2);
	}
};
