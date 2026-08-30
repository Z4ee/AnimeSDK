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

#define RPG_CLIENT_PERFORMANCESKIPUTILS_REPORTPERFORMANCESKIPDIALOG_OFFSET UNITYSDK_OFFSET(0xDA5BC70)
#define RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWOLDPERFORMANCESKIPDIALOG_OFFSET UNITYSDK_OFFSET(0xDA5B320)
#define RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWPERFORMANCESKIPDIALOG_OFFSET UNITYSDK_OFFSET(0xDA5ACB0)
#define RPG_CLIENT_PERFORMANCESKIPUTILS__CHECKOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xDA5B730)
#define RPG_CLIENT_PERFORMANCESKIPUTILS__GETACTORICONPATHLIST_OFFSET UNITYSDK_OFFSET(0xDA5B880)
#define RPG_CLIENT_PERFORMANCESKIPUTILS__ISCONTENTEXIST_OFFSET UNITYSDK_OFFSET(0xDA5B810)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceSkipUtils_TypeDefinitionIndex = 60839;

	class PerformanceSkipUtils : public ::System::Object
	{
	public:
		// static const ::System::UInt32 AVATAR_ICON_MAX_COUNT = 0x6; // 0x0

		static ::System::Boolean ShowPerformanceSkipDialog(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2, ::System::Action_1<::System::Boolean>* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWPERFORMANCESKIPDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LuaUIController* ShowOldPerformanceSkipDialog(::System::Object* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::Object*, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS_SHOWOLDPERFORMANCESKIPDIALOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportPerformanceSkipDialog(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Guid a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Boolean, ::System::Guid, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS_REPORTPERFORMANCESKIPDIALOG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean _CheckOverrideConfig(::RPG::GameCore::ELevelPerformanceType a1, ::System::UInt32 a2, ::System::Boolean& a3, ::Il2CppArray<::System::String*>*& a4, ::RPG::Client::TextID& a5, ::System::Boolean& a6)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32, ::System::Boolean&, ::Il2CppArray<::System::String*>*&, ::RPG::Client::TextID&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS__CHECKOVERRIDECONFIG_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::FilePath*>* _GetActorIconPathList(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::FilePath*>*(*)(::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS__GETACTORICONPATHLIST_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsContentExist(::RPG::Client::TextID a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS__ISCONTENTEXIST_OFFSET))(a1);
		}
	};
}
