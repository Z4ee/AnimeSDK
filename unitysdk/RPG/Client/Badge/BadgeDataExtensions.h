#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_503;
namespace System { class String; }

#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETEXPIRETIMETEXT_OFFSET UNITYSDK_OFFSET(0xC7DFCF0)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_1_OFFSET UNITYSDK_OFFSET(0xC7DFCA0)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_OFFSET UNITYSDK_OFFSET(0xC7DFBD0)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7E0000)
#define RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS__GETFORMATEEXPIRETIME_OFFSET UNITYSDK_OFFSET(0xC7DFEA0)

namespace RPG::Client::Badge
{
	inline static constexpr unsigned int BadgeDataExtensions_TypeDefinitionIndex = 74997;

	class BadgeDataExtensions : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__EXPIRE_TIME_TEXT_ID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BadgeDataExtensions_TypeDefinitionIndex)->GetStaticField(0x569F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::System::Boolean GetIsResident(::Class_0_16E4307DCC419505_503* a1)
		{
			return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_OFFSET))(a1);
		}

		static ::System::String* GetExpireTimeText(::Class_0_16E4307DCC419505_503* a1)
		{
			return ((::System::String*(*)(::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETEXPIRETIMETEXT_OFFSET))(a1);
		}

		static ::System::String* _GetFormateExpireTime(::Class_0_16E4307DCC419505_503* a1)
		{
			return ((::System::String*(*)(::Class_0_16E4307DCC419505_503*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS__GETFORMATEEXPIRETIME_OFFSET))(a1);
		}

		static ::System::Boolean GetIsResident_1(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEDATAEXTENSIONS_GETISRESIDENT_1_OFFSET))(a1);
		}
	};
}
