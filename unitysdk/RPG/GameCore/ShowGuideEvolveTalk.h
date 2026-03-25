#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_08A49B504AFD4FCD_OFFSET UNITYSDK_OFFSET(0x176FC740)
#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_E4DDE1146AF0759A_OFFSET UNITYSDK_OFFSET(0x176FC7C0)
#define RPG_GAMECORE_SHOWGUIDEEVOLVETALK__CTOR_OFFSET UNITYSDK_OFFSET(0x176FC790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideEvolveTalk_TypeDefinitionIndex = 22372;

	class ShowGuideEvolveTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* TalkIDList; // 0x18
		::System::UInt32 Season; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_08A49B504AFD4FCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideEvolveTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideEvolveTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_08A49B504AFD4FCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E4DDE1146AF0759A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideEvolveTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideEvolveTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEEVOLVETALK_METHOD_3_E4DDE1146AF0759A_OFFSET))(a1, a2);
		}
	};
}
