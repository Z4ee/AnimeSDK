#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_D840400A176259F3;

#define CLASS_1_F82AA535BFD76553_APPLYSYNCTOWWISE_OFFSET UNITYSDK_OFFSET(0x14604FB0)
#define CLASS_1_F82AA535BFD76553_COMPUTESYNC_OFFSET UNITYSDK_OFFSET(0x14604CC0)
#define CLASS_1_F82AA535BFD76553_INIT_OFFSET UNITYSDK_OFFSET(0x146051D0)
#define CLASS_1_F82AA535BFD76553_METHOD_1_DD48CFE18FB993C6_OFFSET UNITYSDK_OFFSET(0x14605360)
#define CLASS_1_F82AA535BFD76553_ONSYNC_OFFSET UNITYSDK_OFFSET(0x14605150)
#define CLASS_1_F82AA535BFD76553_POLISH_OFFSET UNITYSDK_OFFSET(0x14605270)
#define CLASS_1_F82AA535BFD76553_RECYCLE_OFFSET UNITYSDK_OFFSET(0x146052C0)
#define CLASS_1_F82AA535BFD76553__CTOR_OFFSET UNITYSDK_OFFSET(0x14605350)

inline static constexpr unsigned int Class_1_F82AA535BFD76553_TypeDefinitionIndex = 52825;

class Class_1_F82AA535BFD76553 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553__CTOR_OFFSET))(this);
	}

	::System::Void ComputeSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_COMPUTESYNC_OFFSET))(this, a1, a2);
	}

	::System::Void ApplySyncToWwise(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_APPLYSYNCTOWWISE_OFFSET))(this, a1);
	}

	::System::Void OnSync(::Class_1_D840400A176259F3* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Init(::Class_1_D840400A176259F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D840400A176259F3*))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_INIT_OFFSET))(this, a1);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_RECYCLE_OFFSET))(this);
	}

	static ::Class_1_F82AA535BFD76553* Method_1_DD48CFE18FB993C6(::Foundation::ViewObject::ViewObjectHandle a1)
	{
		return ((::Class_1_F82AA535BFD76553*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + CLASS_1_F82AA535BFD76553_METHOD_1_DD48CFE18FB993C6_OFFSET))(a1);
	}
};
