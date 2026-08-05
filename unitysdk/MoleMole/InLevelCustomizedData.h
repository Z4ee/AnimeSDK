#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_INLEVELCUSTOMIZEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173806B0)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelCustomizedData_TypeDefinitionIndex = 83556;

	class InLevelCustomizedData : public ::System::Object
	{
	public:
		::System::String* paramName; // 0x10
		::Enum_3_5D65F42F0EEB3310 paramType; // 0x18
		::System::String* paramComment; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCUSTOMIZEDDATA__CTOR_OFFSET))(this);
		}
	};
}
