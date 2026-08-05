#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_0A16B249216FA488;

#define MOLEMOLE_ACTIVITYAVATARWDIGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12795580)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityAvatarWdigetContext_TypeDefinitionIndex = 73202;

	class ActivityAvatarWdigetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_0A16B249216FA488* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYAVATARWDIGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
