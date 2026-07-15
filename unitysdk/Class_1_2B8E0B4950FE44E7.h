#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_2B8E0B4950FE44E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16425280)

inline static constexpr unsigned int Class_1_2B8E0B4950FE44E7_TypeDefinitionIndex = 52275;

class Class_1_2B8E0B4950FE44E7 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B8E0B4950FE44E7__CTOR_OFFSET))(this);
	}
};
