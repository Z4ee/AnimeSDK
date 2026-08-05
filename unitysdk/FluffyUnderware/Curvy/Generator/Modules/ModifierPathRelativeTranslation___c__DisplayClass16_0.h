#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGPath; }
namespace FluffyUnderware::Curvy::Generator::Modules { class ModifierPathRelativeTranslation; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F28C840)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION___C__DISPLAYCLASS16_0__ONSLOTDATAREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1F28C850)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int ModifierPathRelativeTranslation___c__DisplayClass16_0_TypeDefinitionIndex = 39608;

	class ModifierPathRelativeTranslation___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGPath* data; // 0x10
		::FluffyUnderware::Curvy::Generator::Modules::ModifierPathRelativeTranslation* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnSlotDataRequest_b__0(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_MODIFIERPATHRELATIVETRANSLATION___C__DISPLAYCLASS16_0__ONSLOTDATAREQUEST_B__0_OFFSET))(this, i);
		}
	};
}
