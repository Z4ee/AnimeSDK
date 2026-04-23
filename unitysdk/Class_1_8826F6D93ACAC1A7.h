#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_8826F6D93ACAC1A7__CTOR_OFFSET UNITYSDK_OFFSET(0x10012160)

inline static constexpr unsigned int Class_1_8826F6D93ACAC1A7_TypeDefinitionIndex = 57276;

class Class_1_8826F6D93ACAC1A7 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8826F6D93ACAC1A7__CTOR_OFFSET))(this);
	}
};
