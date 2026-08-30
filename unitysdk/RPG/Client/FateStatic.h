#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateShowCaptionData; }
namespace System { class String; }

#define RPG_CLIENT_FATESTATIC_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1B5D5910)
#define RPG_CLIENT_FATESTATIC_ASSERT_OFFSET UNITYSDK_OFFSET(0x1B5D5840)
#define RPG_CLIENT_FATESTATIC_GETDIFFPASSANIMSHOWED_OFFSET UNITYSDK_OFFSET(0x1B5D53A0)
#define RPG_CLIENT_FATESTATIC_GETMISCDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0x1B5D4F70)
#define RPG_CLIENT_FATESTATIC_GETPREFSISSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x1B5D5350)
#define RPG_CLIENT_FATESTATIC_ISGUIDEVIDEOAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1B5D5610)
#define RPG_CLIENT_FATESTATIC_ISINFATEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B5D5020)
#define RPG_CLIENT_FATESTATIC_ISINFATEGUIDEAREAGAME_OFFSET UNITYSDK_OFFSET(0x1B5D51D0)
#define RPG_CLIENT_FATESTATIC_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1B5D4EC0)
#define RPG_CLIENT_FATESTATIC_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1B5D4F10)
#define RPG_CLIENT_FATESTATIC_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1B5D5800)
#define RPG_CLIENT_FATESTATIC_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1B5D57B0)
#define RPG_CLIENT_FATESTATIC_LOG_1_OFFSET UNITYSDK_OFFSET(0x1B5D5770)
#define RPG_CLIENT_FATESTATIC_LOG_OFFSET UNITYSDK_OFFSET(0x1B5D5720)
#define RPG_CLIENT_FATESTATIC_PARSECAPTIONPARAM_OFFSET UNITYSDK_OFFSET(0x1B5D59D0)
#define RPG_CLIENT_FATESTATIC_SETDIFFPASSANIMSHOWED_OFFSET UNITYSDK_OFFSET(0x1B5D5460)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatic_TypeDefinitionIndex = 64090;

	class FateStatic : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID GetMiscDisplayText(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_GETMISCDISPLAYTEXT_OFFSET))(a1);
		}

		static ::System::Boolean IsInFateBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ISINFATEBATTLE_OFFSET))();
		}

		static ::System::Boolean IsInFateGuideAreaGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ISINFATEGUIDEAREAGAME_OFFSET))();
		}

		static ::System::Boolean GetPrefsIsSimpleDesc()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_GETPREFSISSIMPLEDESC_OFFSET))();
		}

		static ::System::Boolean GetDiffPassAnimShowed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_GETDIFFPASSANIMSHOWED_OFFSET))(a1);
		}

		static ::System::Void SetDiffPassAnimShowed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_SETDIFFPASSANIMSHOWED_OFFSET))(a1);
		}

		static ::System::Boolean IsGuideVideoAvailable(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ISGUIDEVIDEOAVAILABLE_OFFSET))(a1);
		}

		static ::System::Void Log(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOG_OFFSET))(a1, a2);
		}

		static ::System::Void Log_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOG_1_OFFSET))(a1);
		}

		static ::System::Void LogWarning(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGWARNING_OFFSET))(a1, a2);
		}

		static ::System::Void LogWarning_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGWARNING_1_OFFSET))(a1);
		}

		static ::System::Void LogError(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGERROR_OFFSET))(a1, a2);
		}

		static ::System::Void LogError_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGERROR_1_OFFSET))(a1);
		}

		static ::System::Void Assert(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ASSERT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Assert_1(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ASSERT_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::FateShowCaptionData* ParseCaptionParam(::System::String* a1)
		{
			return ((::RPG::Client::FateShowCaptionData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_PARSECAPTIONPARAM_OFFSET))(a1);
		}
	};
}
