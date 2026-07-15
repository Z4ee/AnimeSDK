#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A_27;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F9F7F0)
#define CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS75_0___GETDYNAMICCELLLOOKATPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0x18FA0A40)

inline static constexpr unsigned int Class_1_7EE2012A32ADD2BD___c__DisplayClass75_0_TypeDefinitionIndex = 74061;

class Class_1_7EE2012A32ADD2BD___c__DisplayClass75_0 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_963E317C37FB5E9A_27*>* overrideGrids; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
	}

	::System::Int32 __GetDynamicCellLookAtPosition_b__0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7EE2012A32ADD2BD___C__DISPLAYCLASS75_0___GETDYNAMICCELLLOOKATPOSITION_B__0_OFFSET))(this, a1, a2);
	}
};
