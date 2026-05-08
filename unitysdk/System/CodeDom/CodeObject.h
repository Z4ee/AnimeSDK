#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IDictionary; }

#define SYSTEM_CODEDOM_CODEOBJECT_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x19ADB600)
#define SYSTEM_CODEDOM_CODEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19ADB5C0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeObject_TypeDefinitionIndex = 4035;

	class CodeObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Collections::IDictionary* get_UserData()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODEOBJECT_GET_USERDATA_OFFSET))(this);
		}
	};
}
