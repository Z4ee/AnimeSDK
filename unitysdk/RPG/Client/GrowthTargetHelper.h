#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GrowthTargetRelicRecommender; }
namespace RPG::Client { class PreReleaseCharaParam; }

#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKAVATARGROWTHFINISHED_OFFSET UNITYSDK_OFFSET(0xA5D9CC0)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETINCLUDEALLTRACETREE_OFFSET UNITYSDK_OFFSET(0xA5D9740)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSETTINGHASSEEN_OFFSET UNITYSDK_OFFSET(0xA5D9D80)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSHOWRELICRECOMMENDATIONMARK_OFFSET UNITYSDK_OFFSET(0xA5D9850)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKHASGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xA5D95A0)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xA5D9640)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETPRERELEASEPARAM_OFFSET UNITYSDK_OFFSET(0xA5D9C20)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETRELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0xA5D9B30)
#define RPG_CLIENT_GROWTHTARGETHELPER_MARKGROWTHTARGETSETTINGHASSEEN_OFFSET UNITYSDK_OFFSET(0xA5D9E40)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xA5D96E0)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETINCLUDEALLTRACETREE_OFFSET UNITYSDK_OFFSET(0xA5D9AD0)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xA5D9970)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetHelper_TypeDefinitionIndex = 60402;

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

		static ::System::Void SetGrowthTargetAvatarID(::System::UInt32 avatarID, ::System::UInt32 setSource)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETAVATARID_OFFSET))(avatarID, setSource);
		}

		static ::System::Void SetGrowthTargetIncludeAllTraceTree(::System::Boolean includeAllTraceTree, ::System::UInt32 setSource)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETINCLUDEALLTRACETREE_OFFSET))(includeAllTraceTree, setSource);
		}

		static ::System::Void SetGrowthTarget(::System::UInt32 avatarID, ::System::Boolean includeAllTraceTree, ::System::Boolean showRelicRecommendationMark, ::System::UInt32 setSource)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGET_OFFSET))(avatarID, includeAllTraceTree, showRelicRecommendationMark, setSource);
		}

		static ::System::Boolean CheckGrowthTargetIncludeAllTraceTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETINCLUDEALLTRACETREE_OFFSET))();
		}

		static ::System::Boolean CheckGrowthTargetShowRelicRecommendationMark()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSHOWRELICRECOMMENDATIONMARK_OFFSET))();
		}

		static ::RPG::Client::GrowthTargetRelicRecommender* GetRelicRecommender(::RPG::Client::PreReleaseCharaParam* preReleaseCharaParam)
		{
			return ((::RPG::Client::GrowthTargetRelicRecommender*(*)(::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETRELICRECOMMENDER_OFFSET))(preReleaseCharaParam);
		}

		static ::RPG::Client::PreReleaseCharaParam* GetGrowthTargetPreReleaseParam()
		{
			return ((::RPG::Client::PreReleaseCharaParam*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETPRERELEASEPARAM_OFFSET))();
		}

		static ::System::Boolean CheckAvatarGrowthFinished(::RPG::Client::PreReleaseCharaParam* preReleaseCharaParam)
		{
			return ((::System::Boolean(*)(::RPG::Client::PreReleaseCharaParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKAVATARGROWTHFINISHED_OFFSET))(preReleaseCharaParam);
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
