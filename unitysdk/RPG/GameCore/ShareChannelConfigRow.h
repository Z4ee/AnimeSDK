#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SHARECHANNELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E09B050)
#define RPG_GAMECORE_SHARECHANNELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E09B8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShareChannelConfigRow_TypeDefinitionIndex = 14328;

	class ShareChannelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* DisplayLanguageList; // 0x10
		::System::String* UrlTitle; // 0x18
		::System::String* Title; // 0x20
		::System::String* Content; // 0x28
		::System::String* Forum; // 0x30
		::Il2CppArray<::System::String*>* Topics; // 0x38
		::System::String* IconPath; // 0x40
		::System::String* Platform; // 0x48
		::System::Boolean ShareByNative; // 0x50
		::System::UInt32 ShareChannelID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShareChannelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShareChannelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHARECHANNELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
