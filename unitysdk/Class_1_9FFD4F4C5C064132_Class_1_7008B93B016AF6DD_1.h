#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_9FFD4F4C5C064132_CLASS_1_7008B93B016AF6DD_1_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xC0234F0)
#define CLASS_1_9FFD4F4C5C064132_CLASS_1_7008B93B016AF6DD_1_METHOD_1_E2C273CA106EBD0B_OFFSET UNITYSDK_OFFSET(0xC0235A0)
#define CLASS_1_9FFD4F4C5C064132_CLASS_1_7008B93B016AF6DD_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC0233F0)

inline static constexpr unsigned int Class_1_9FFD4F4C5C064132_Class_1_7008B93B016AF6DD_1_TypeDefinitionIndex = 65335;

class Class_1_9FFD4F4C5C064132_Class_1_7008B93B016AF6DD_1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9FFD4F4C5C064132_CLASS_1_7008B93B016AF6DD_1__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFD4F4C5C064132_CLASS_1_7008B93B016AF6DD_1_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_E2C273CA106EBD0B()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9FFD4F4C5C064132_CLASS_1_7008B93B016AF6DD_1_METHOD_1_E2C273CA106EBD0B_OFFSET))(this);
	}
};
