#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::Data::ScriptObject::Level { class Member; }

#define CODE_LOGIC_DATA_SCRIPTOBJECT_LEVEL_PATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF7C70)

namespace Code::Logic::Data::ScriptObject::Level
{
	inline static constexpr unsigned int Pattern_TypeDefinitionIndex = 44528;

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
