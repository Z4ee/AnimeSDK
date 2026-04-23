#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class FilePath; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PERFORMANCESKIPUTILS_REPORTPERFORMANCESKIPDIALOG_OFFSET UNITYSDK_OFFSET(0xAC54D10)
#define RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWOLDPERFORMANCESKIPDIALOG_OFFSET UNITYSDK_OFFSET(0xAC54350)
#define RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWPERFORMANCESKIPDIALOG_OFFSET UNITYSDK_OFFSET(0xAC53CA0)
#define RPG_CLIENT_PERFORMANCESKIPUTILS__CHECKOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xAC54820)
#define RPG_CLIENT_PERFORMANCESKIPUTILS__GETACTORICONPATHLIST_OFFSET UNITYSDK_OFFSET(0xAC54970)
#define RPG_CLIENT_PERFORMANCESKIPUTILS__ISCONTENTEXIST_OFFSET UNITYSDK_OFFSET(0xAC54900)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceSkipUtils_TypeDefinitionIndex = 56003;

	class PerformanceSkipUtils : public ::System::Object
	{
	public:
		// static const ::System::UInt32 AVATAR_ICON_MAX_COUNT = 0x6; // 0x0

		static ::System::Boolean ShowPerformanceSkipDialog(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID, ::System::Action_1<::System::Boolean>* dispatch)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWPERFORMANCESKIPDIALOG_OFFSET))(performanceType, performanceID, dispatch);
		}

		static ::RPG::Client::LuaUIController* ShowOldPerformanceSkipDialog(::System::Object* arg, ::System::UInt32 performanceID, ::System::Boolean isVideo, ::System::Boolean isImportantBranch)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::Object*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWOLDPERFORMANCESKIPDIALOG_OFFSET))(arg, performanceID, isVideo, isImportantBranch);
		}

		static ::System::Void ReportPerformanceSkipDialog(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID, ::System::Boolean isOk, ::System::Guid guid, ::System::Boolean isSecondConfirm)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Boolean, ::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS_REPORTPERFORMANCESKIPDIALOG_OFFSET))(performanceType, performanceID, isOk, guid, isSecondConfirm);
		}

		static ::System::Boolean _CheckOverrideConfig(::RPG::GameCore::ELevelPerformanceType performanceType, ::System::UInt32 performanceID, ::System::Boolean& isImportantBranch, ::Il2CppArray<::System::String*>*& actorList, ::RPG::Client::TextID& descTextID, ::System::Boolean& needSecondConfirm)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Boolean&, ::Il2CppArray<::System::String*>*&, ::RPG::Client::TextID&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS__CHECKOVERRIDECONFIG_OFFSET))(performanceType, performanceID, isImportantBranch, actorList, descTextID, needSecondConfirm);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::FilePath*>* _GetActorIconPathList(::Il2CppArray<::System::String*>* actorList, ::System::Boolean avatarConfigOverridden)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FilePath*>*(*)(::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS__GETACTORICONPATHLIST_OFFSET))(actorList, avatarConfigOverridden);
		}

		static ::System::Boolean _IsContentExist(::RPG::Client::TextID descTextID)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS__ISCONTENTEXIST_OFFSET))(descTextID);
		}
	};
}
