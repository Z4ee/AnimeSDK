#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_DATASTRUCTURES_COMMON_COMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2330)

namespace MoleMole::DataStructures::Common
{
	inline static constexpr unsigned int Comment_TypeDefinitionIndex = 28151;

	class Comment : public ::System::Object
	{
	public:
		::System::String* Value; // 0x10
		::System::String* _value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATASTRUCTURES_COMMON_COMMENT__CTOR_OFFSET))(this);
		}
	};
}
