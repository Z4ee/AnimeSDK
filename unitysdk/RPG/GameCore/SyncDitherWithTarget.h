#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_0CB0FE25B4995FDF_OFFSET UNITYSDK_OFFSET(0x19CE98F0)
#define RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_D74219A5F4CC8C80_OFFSET UNITYSDK_OFFSET(0x19CE99C0)
#define RPG_GAMECORE_SYNCDITHERWITHTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE9970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncDitherWithTarget_TypeDefinitionIndex = 19092;

	class SyncDitherWithTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SyncTargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0CB0FE25B4995FDF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncDitherWithTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncDitherWithTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_0CB0FE25B4995FDF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D74219A5F4CC8C80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncDitherWithTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncDitherWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_METHOD_3_D74219A5F4CC8C80_OFFSET))(a1, a2);
		}
	};
}
