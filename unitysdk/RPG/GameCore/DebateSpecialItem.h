#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DEBATESPECIALITEM_METHOD_2_80B1C5B732671A79_OFFSET UNITYSDK_OFFSET(0x1D019800)
#define RPG_GAMECORE_DEBATESPECIALITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D019930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateSpecialItem_TypeDefinitionIndex = 21680;

	class DebateSpecialItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::String* TriggerCustomString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESPECIALITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_80B1C5B732671A79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DebateSpecialItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DebateSpecialItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBATESPECIALITEM_METHOD_2_80B1C5B732671A79_OFFSET))(a1, a2);
		}
	};
}
