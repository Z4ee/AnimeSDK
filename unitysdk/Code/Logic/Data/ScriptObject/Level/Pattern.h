#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class Member; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_PATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x11E5A9F0)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int Pattern_TypeDefinitionIndex = 55263;

	class Pattern : public ::System::Object
	{
	public:
		::Il2CppArray<::Code::Logic::Data::ScriptObject::Level::Member*>* membersList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_PATTERN__CTOR_OFFSET))(this);
		}
	};
}
