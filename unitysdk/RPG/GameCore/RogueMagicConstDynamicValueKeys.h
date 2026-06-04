#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS_METHOD_2_E60FE9E4224B2DCC_OFFSET UNITYSDK_OFFSET(0x19B44430)
#define RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS__CTOR_OFFSET UNITYSDK_OFFSET(0x19B445D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicConstDynamicValueKeys_TypeDefinitionIndex = 16260;

	class RogueMagicConstDynamicValueKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ScepterID; // 0x10
		::System::String* ScepterActiveUnitTriggerCount; // 0x18
		::System::String* MagicUnitLevel; // 0x20
		::System::String* MagicUnitIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E60FE9E4224B2DCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicConstDynamicValueKeys*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicConstDynamicValueKeys*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONSTDYNAMICVALUEKEYS_METHOD_2_E60FE9E4224B2DCC_OFFSET))(a1, a2);
		}
	};
}
