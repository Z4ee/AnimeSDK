#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4DF3292AA5AADAD0_4;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x104EF9F0)
#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS75_0___GETDYNAMICCELLLOOKATPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0x104F08C0)

inline static constexpr unsigned int Class_1_044382BF73D8EA3B___c__DisplayClass75_0_TypeDefinitionIndex = 63474;

class Class_1_044382BF73D8EA3B___c__DisplayClass75_0 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_4DF3292AA5AADAD0_4*>* overrideGrids; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetDynamicCellLookAtPosition_b__0(::System::UInt32 startZ, ::System::UInt32 endZ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS75_0___GETDYNAMICCELLLOOKATPOSITION_B__0_OFFSET))(this, startZ, endZ);
	}
};
