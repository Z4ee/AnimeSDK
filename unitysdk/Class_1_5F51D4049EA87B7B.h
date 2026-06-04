#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }

#define CLASS_1_5F51D4049EA87B7B_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x138C7260)
#define CLASS_1_5F51D4049EA87B7B_METHOD_1_27F9A26353AED195_OFFSET UNITYSDK_OFFSET(0x138C7220)
#define CLASS_1_5F51D4049EA87B7B__CTOR_OFFSET UNITYSDK_OFFSET(0x138BB580)

inline static constexpr unsigned int Class_1_5F51D4049EA87B7B_TypeDefinitionIndex = 51205;

class Class_1_5F51D4049EA87B7B : public ::System::Object
{
public:
	::RPG::GameCore::TaskState Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F51D4049EA87B7B__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TaskState Method_1_27F9A26353AED195()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F51D4049EA87B7B_METHOD_1_27F9A26353AED195_OFFSET))(this);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F51D4049EA87B7B_GETCONFIG_OFFSET))(this);
	}
};
