#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTTAROTBOOKTALK_METHOD_3_0E5F1A49FBFF66D5_OFFSET UNITYSDK_OFFSET(0x1B0BF0E0)
#define RPG_GAMECORE_STARTTAROTBOOKTALK_METHOD_3_58B68D37C7307098_OFFSET UNITYSDK_OFFSET(0x1B0BF1B0)
#define RPG_GAMECORE_STARTTAROTBOOKTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0BF1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartTarotBookTalk_TypeDefinitionIndex = 20343;

	class StartTarotBookTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTAROTBOOKTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E5F1A49FBFF66D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartTarotBookTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartTarotBookTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTAROTBOOKTALK_METHOD_3_0E5F1A49FBFF66D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58B68D37C7307098(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartTarotBookTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartTarotBookTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTTAROTBOOKTALK_METHOD_3_58B68D37C7307098_OFFSET))(a1, a2);
		}
	};
}
