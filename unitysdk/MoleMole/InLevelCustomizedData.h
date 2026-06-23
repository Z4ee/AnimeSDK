#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E0707159A4819BEE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_INLEVELCUSTOMIZEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13026C60)

namespace MoleMole
{
	inline static constexpr unsigned int InLevelCustomizedData_TypeDefinitionIndex = 57293;

	class InLevelCustomizedData : public ::System::Object
	{
	public:
		::System::String* paramName; // 0x10
		::Enum_3_E0707159A4819BEE paramType; // 0x18
		::System::String* paramComment; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INLEVELCUSTOMIZEDDATA__CTOR_OFFSET))(this);
		}
	};
}
