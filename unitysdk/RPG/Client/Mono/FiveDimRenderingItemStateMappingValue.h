#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MONO_FIVEDIMRENDERINGITEMSTATEMAPPINGVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E27F90)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimRenderingItemStateMappingValue_TypeDefinitionIndex = 75548;

	class FiveDimRenderingItemStateMappingValue : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::RPG::GameCore::FDRIStateMaskEnum FDRIState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMRENDERINGITEMSTATEMAPPINGVALUE__CTOR_OFFSET))(this);
		}
	};
}
