#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TALKFIGURE_METHOD_3_30A0D11E6A19258B_OFFSET UNITYSDK_OFFSET(0x177A8620)
#define RPG_GAMECORE_TALKFIGURE_METHOD_3_BE14FAAD6545BAC6_OFFSET UNITYSDK_OFFSET(0x177A8580)
#define RPG_GAMECORE_TALKFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0x177A85E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkFigure_TypeDefinitionIndex = 20096;

	class TalkFigure : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18
		::System::String* ImagePath; // 0x20
		::System::Boolean TriggerSound; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BE14FAAD6545BAC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkFigure*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkFigure*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_METHOD_3_BE14FAAD6545BAC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30A0D11E6A19258B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkFigure* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkFigure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_METHOD_3_30A0D11E6A19258B_OFFSET))(a1, a2);
		}
	};
}
