#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_LEVELSECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18222BC0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelSectionData_TypeDefinitionIndex = 57100;

	class LevelSectionData : public ::System::Object
	{
	public:
		::System::String* stageName; // 0x10
		::System::String* bornPos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELSECTIONDATA__CTOR_OFFSET))(this);
		}
	};
}
