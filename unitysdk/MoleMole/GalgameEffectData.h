#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAMEEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BC1CF0)

namespace MoleMole
{
	inline static constexpr unsigned int GalgameEffectData_TypeDefinitionIndex = 82533;

	class GalgameEffectData : public ::System::Object
	{
	public:
		::System::String* EffectName; // 0x10
		::System::String* AttachPointName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAMEEFFECTDATA__CTOR_OFFSET))(this);
		}
	};
}
