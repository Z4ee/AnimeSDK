#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199E25C0)
#define RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199E27D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatQuickFunctionConfigRow_TypeDefinitionIndex = 13640;

	class PamChatQuickFunctionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::TextID BtnName; // 0x18
		::RPG::Client::TextID PlayerInputText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamChatQuickFunctionConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamChatQuickFunctionConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMCHATQUICKFUNCTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
