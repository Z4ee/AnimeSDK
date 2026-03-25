#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_5C60BB6944611378_OFFSET UNITYSDK_OFFSET(0x176D2B40)
#define RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_CAD40592DB7CEBEC_OFFSET UNITYSDK_OFFSET(0x176D2A30)
#define RPG_GAMECORE_SETLASTKILLFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x176D2B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLastKillFinish_TypeDefinitionIndex = 21640;

	class SetLastKillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		// static const ::System::String* LevelResultEndFinishEventStr; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CAD40592DB7CEBEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLastKillFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLastKillFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_CAD40592DB7CEBEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C60BB6944611378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLastKillFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_5C60BB6944611378_OFFSET))(a1, a2);
		}
	};
}
