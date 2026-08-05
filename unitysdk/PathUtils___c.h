#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathUtils_IndexedPathDistance.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define PATHUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC3D3E0)
#define PATHUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3D420)
#define PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BC3D430)
#define PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_1_OFFSET UNITYSDK_OFFSET(0x1BC3D490)

inline static constexpr unsigned int PathUtils___c_TypeDefinitionIndex = 83941;

class PathUtils___c : public ::System::Object
{
public:
	static ::PathUtils___c** StaticGet___9()
	{
		return (::PathUtils___c**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x437A0);
	}
	static ::System::Comparison_1<::PathUtils_IndexedPathDistance>** StaticGet___9__6_0()
	{
		return (::System::Comparison_1<::PathUtils_IndexedPathDistance>**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x437A8);
	}
	static ::System::Func_2<::PathUtils_IndexedPathDistance, ::System::Int32>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::PathUtils_IndexedPathDistance, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PathUtils___c_TypeDefinitionIndex)->GetStaticField(0x437B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PATHUTILS___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHUTILS___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _FindNearestPointsByPath_b__6_0(::PathUtils_IndexedPathDistance a, ::PathUtils_IndexedPathDistance b)
	{
		return ((::System::Int32(*)(::PVOID, ::PathUtils_IndexedPathDistance, ::PathUtils_IndexedPathDistance))((::PBYTE)hIl2Cpp + PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_0_OFFSET))(this, a, b);
	}

	::System::Int32 _FindNearestPointsByPath_b__6_1(::PathUtils_IndexedPathDistance item)
	{
		return ((::System::Int32(*)(::PVOID, ::PathUtils_IndexedPathDistance))((::PBYTE)hIl2Cpp + PATHUTILS___C__FINDNEARESTPOINTSBYPATH_B__6_1_OFFSET))(this, item);
	}
};
