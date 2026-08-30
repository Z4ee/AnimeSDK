#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_5C60BB6944611378_OFFSET UNITYSDK_OFFSET(0x1E083360)
#define RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_74AEFA164C66A7B5_OFFSET UNITYSDK_OFFSET(0x1E083290)
#define RPG_GAMECORE_SETLASTKILLFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E083350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLastKillFinish_TypeDefinitionIndex = 23148;

	class SetLastKillFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		// static const ::System::String* LevelResultEndFinishEventStr; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74AEFA164C66A7B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLastKillFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLastKillFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_74AEFA164C66A7B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C60BB6944611378(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLastKillFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLastKillFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLASTKILLFINISH_METHOD_3_5C60BB6944611378_OFFSET))(a1, a2);
		}
	};
}
