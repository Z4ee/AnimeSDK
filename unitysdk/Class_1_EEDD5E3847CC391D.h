#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_EEDD5E3847CC391D_COMPARE_OFFSET UNITYSDK_OFFSET(0x16D7C3C0)
#define CLASS_1_EEDD5E3847CC391D__CTOR_OFFSET UNITYSDK_OFFSET(0x16D7C8D0)

inline static constexpr unsigned int Class_1_EEDD5E3847CC391D_TypeDefinitionIndex = 63617;

class Class_1_EEDD5E3847CC391D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEDD5E3847CC391D__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EEDD5E3847CC391D_COMPARE_OFFSET))(this, a1, a2);
	}
};
