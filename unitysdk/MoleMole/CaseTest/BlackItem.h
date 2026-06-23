#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CASETEST_BLACKITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11082500)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int BlackItem_TypeDefinitionIndex = 69743;

	class BlackItem : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::String* name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_BLACKITEM__CTOR_OFFSET))(this);
		}
	};
}
