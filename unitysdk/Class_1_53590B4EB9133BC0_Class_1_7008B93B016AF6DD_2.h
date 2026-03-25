#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_53590B4EB9133BC0_CLASS_1_7008B93B016AF6DD_2_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x8B997B0)
#define CLASS_1_53590B4EB9133BC0_CLASS_1_7008B93B016AF6DD_2_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0x8B99860)
#define CLASS_1_53590B4EB9133BC0_CLASS_1_7008B93B016AF6DD_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8B995A0)

inline static constexpr unsigned int Class_1_53590B4EB9133BC0_Class_1_7008B93B016AF6DD_2_TypeDefinitionIndex = 53008;

class Class_1_53590B4EB9133BC0_Class_1_7008B93B016AF6DD_2 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_CLASS_1_7008B93B016AF6DD_2__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_CLASS_1_7008B93B016AF6DD_2_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_53590B4EB9133BC0_CLASS_1_7008B93B016AF6DD_2_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}
};
