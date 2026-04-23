#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateShowCaptionData; }
namespace System { class String; }

#define RPG_CLIENT_FATESTATIC_ASSERT_1_OFFSET UNITYSDK_OFFSET(0xA35C0F0)
#define RPG_CLIENT_FATESTATIC_ASSERT_OFFSET UNITYSDK_OFFSET(0xA35C020)
#define RPG_CLIENT_FATESTATIC_GETDIFFPASSANIMSHOWED_OFFSET UNITYSDK_OFFSET(0xA35BB80)
#define RPG_CLIENT_FATESTATIC_GETMISCDISPLAYTEXT_OFFSET UNITYSDK_OFFSET(0xA333100)
#define RPG_CLIENT_FATESTATIC_GETPREFSISSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA35BB30)
#define RPG_CLIENT_FATESTATIC_ISGUIDEVIDEOAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA35BDF0)
#define RPG_CLIENT_FATESTATIC_ISINFATEBATTLE_OFFSET UNITYSDK_OFFSET(0xA35B990)
#define RPG_CLIENT_FATESTATIC_ISINFATEGUIDEAREAGAME_OFFSET UNITYSDK_OFFSET(0xA344900)
#define RPG_CLIENT_FATESTATIC_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0xA332C30)
#define RPG_CLIENT_FATESTATIC_LOGERROR_OFFSET UNITYSDK_OFFSET(0xA35B930)
#define RPG_CLIENT_FATESTATIC_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0xA35BFE0)
#define RPG_CLIENT_FATESTATIC_LOGWARNING_OFFSET UNITYSDK_OFFSET(0xA35BF90)
#define RPG_CLIENT_FATESTATIC_LOG_1_OFFSET UNITYSDK_OFFSET(0xA35BF50)
#define RPG_CLIENT_FATESTATIC_LOG_OFFSET UNITYSDK_OFFSET(0xA35BF00)
#define RPG_CLIENT_FATESTATIC_PARSECAPTIONPARAM_OFFSET UNITYSDK_OFFSET(0xA35C1B0)
#define RPG_CLIENT_FATESTATIC_SETDIFFPASSANIMSHOWED_OFFSET UNITYSDK_OFFSET(0xA35BC40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatic_TypeDefinitionIndex = 58894;

	class FateStatic : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID GetMiscDisplayText(::System::UInt32 displayID)
		{
			return ((::RPG::Client::TextID(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_GETMISCDISPLAYTEXT_OFFSET))(displayID);
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

		static ::System::Boolean GetDiffPassAnimShowed(::System::UInt32 difficulty)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_GETDIFFPASSANIMSHOWED_OFFSET))(difficulty);
		}

		static ::System::Void SetDiffPassAnimShowed(::System::UInt32 difficulty)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_SETDIFFPASSANIMSHOWED_OFFSET))(difficulty);
		}

		static ::System::Boolean IsGuideVideoAvailable(::System::UInt32 guideVideoID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ISGUIDEVIDEOAVAILABLE_OFFSET))(guideVideoID);
		}

		static ::System::Void Log(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOG_OFFSET))(format, args);
		}

		static ::System::Void Log_1(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOG_1_OFFSET))(msg);
		}

		static ::System::Void LogWarning(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGWARNING_OFFSET))(format, args);
		}

		static ::System::Void LogWarning_1(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGWARNING_1_OFFSET))(msg);
		}

		static ::System::Void LogError(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGERROR_OFFSET))(format, args);
		}

		static ::System::Void LogError_1(::System::String* msg)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_LOGERROR_1_OFFSET))(msg);
		}

		static ::System::Void Assert(::System::Boolean condition, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ASSERT_OFFSET))(condition, format, args);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_ASSERT_1_OFFSET))(condition, msg);
		}

		static ::RPG::Client::FateShowCaptionData* ParseCaptionParam(::System::String* param)
		{
			return ((::RPG::Client::FateShowCaptionData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATIC_PARSECAPTIONPARAM_OFFSET))(param);
		}
	};
}
