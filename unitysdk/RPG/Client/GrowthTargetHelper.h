#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GrowthTargetRelicRecommender; }
namespace RPG::Client { class PreReleaseCharaParam; }

#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKAVATARGROWTHFINISHED_OFFSET UNITYSDK_OFFSET(0x18FC2840)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETINCLUDEALLTRACETREE_OFFSET UNITYSDK_OFFSET(0x18FC2230)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSETTINGHASSEEN_OFFSET UNITYSDK_OFFSET(0x18FC2900)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSHOWRELICRECOMMENDATIONMARK_OFFSET UNITYSDK_OFFSET(0x18FC2340)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKHASGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x18FC2090)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0x18FC2130)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETPRERELEASEPARAM_OFFSET UNITYSDK_OFFSET(0x18FC27A0)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETRELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0x18FC26D0)
#define RPG_CLIENT_GROWTHTARGETHELPER_MARKGROWTHTARGETSETTINGHASSEEN_OFFSET UNITYSDK_OFFSET(0x18FC29C0)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0x18FC21D0)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETINCLUDEALLTRACETREE_OFFSET UNITYSDK_OFFSET(0x18FC2670)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x18FC2460)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetHelper_TypeDefinitionIndex = 62679;

	class GrowthTargetHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckHasGrowthTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKHASGROWTHTARGET_OFFSET))();
		}

		static ::System::UInt32 GetGrowthTargetAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETAVATARID_OFFSET))();
		}

		static ::System::Void SetGrowthTargetAvatarID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETAVATARID_OFFSET))(a1, a2);
		}

		static ::System::Void SetGrowthTargetIncludeAllTraceTree(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETINCLUDEALLTRACETREE_OFFSET))(a1, a2);
		}

		static ::System::Void SetGrowthTarget(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckGrowthTargetIncludeAllTraceTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETINCLUDEALLTRACETREE_OFFSET))();
		}

		static ::System::Boolean CheckGrowthTargetShowRelicRecommendationMark()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSHOWRELICRECOMMENDATIONMARK_OFFSET))();
		}

		static ::RPG::Client::GrowthTargetRelicRecommender* GetRelicRecommender(::RPG::Client::PreReleaseCharaParam* a1)
		{
			return ((::RPG::Client::GrowthTargetRelicRecommender*(*)(::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETRELICRECOMMENDER_OFFSET))(a1);
		}

		static ::RPG::Client::PreReleaseCharaParam* GetGrowthTargetPreReleaseParam()
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETPRERELEASEPARAM_OFFSET))();
		}

		static ::System::Boolean CheckAvatarGrowthFinished(::RPG::Client::PreReleaseCharaParam* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKAVATARGROWTHFINISHED_OFFSET))(a1);
		}

		static ::System::Boolean CheckGrowthTargetSettingHasSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSETTINGHASSEEN_OFFSET))();
		}

		static ::System::Void MarkGrowthTargetSettingHasSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_MARKGROWTHTARGETSETTINGHASSEEN_OFFSET))();
		}
	};
}
