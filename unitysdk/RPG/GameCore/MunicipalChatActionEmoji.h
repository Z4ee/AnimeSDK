#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MunicipalChatActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_METHOD_3_109139A4EDA7C9E0_OFFSET UNITYSDK_OFFSET(0x1B1D3340)
#define RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_METHOD_3_82BC65BD5711027A_OFFSET UNITYSDK_OFFSET(0x1B1D3EC0)
#define RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D3320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionEmoji_TypeDefinitionIndex = 16248;

	class MunicipalChatActionEmoji : public ::RPG::GameCore::MunicipalChatActionBase
	{
	public:
		::System::Boolean IsVertical; // 0x20
		::System::String* BubbleBGPath; // 0x28
		::System::UInt32 PositionIndex; // 0x30
		::Il2CppArray<::System::String*>* EmojiIconPaths; // 0x38
		::System::Single Duration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_82BC65BD5711027A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionEmoji*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionEmoji*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_METHOD_3_82BC65BD5711027A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_109139A4EDA7C9E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionEmoji* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionEmoji*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONEMOJI_METHOD_3_109139A4EDA7C9E0_OFFSET))(a1, a2);
		}
	};
}
