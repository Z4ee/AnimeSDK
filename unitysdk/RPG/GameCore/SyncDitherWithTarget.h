#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_BCBE3527E62F15F6_OFFSET UNITYSDK_OFFSET(0x1B4443A0)
#define RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_D74219A5F4CC8C80_OFFSET UNITYSDK_OFFSET(0x1B444440)
#define RPG_GAMECORE_SYNCDITHERWITHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B444400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncDitherWithTarget_TypeDefinitionIndex = 19447;

	class SyncDitherWithTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SyncTargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BCBE3527E62F15F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncDitherWithTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncDitherWithTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_BCBE3527E62F15F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D74219A5F4CC8C80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncDitherWithTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncDitherWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_D74219A5F4CC8C80_OFFSET))(a1, a2);
		}
	};
}
