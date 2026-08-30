#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TALKFIGURE_METHOD_3_30A0D11E6A19258B_OFFSET UNITYSDK_OFFSET(0x1D59DCF0)
#define RPG_GAMECORE_TALKFIGURE_METHOD_3_44E3329450C68142_OFFSET UNITYSDK_OFFSET(0x1D59DCA0)
#define RPG_GAMECORE_TALKFIGURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59DCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkFigure_TypeDefinitionIndex = 21679;

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

		static ::System::Void Method_3_44E3329450C68142(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkFigure*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkFigure*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_METHOD_3_44E3329450C68142_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30A0D11E6A19258B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TalkFigure* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkFigure*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKFIGURE_METHOD_3_30A0D11E6A19258B_OFFSET))(a1, a2);
		}
	};
}
