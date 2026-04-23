#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKCARDACTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188150A0)
#define RPG_GAMECORE_CLOCKPARKCARDACTIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18815490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardActionRow_TypeDefinitionIndex = 10679;

	class ClockParkCardActionRow : public ::System::Object
	{
	public:
		::System::String* ImgPath3; // 0x10
		::Il2CppArray<::System::UInt32>* SuccessEffectList; // 0x18
		::Il2CppArray<::System::UInt32>* DiceList; // 0x20
		::System::String* ImgPath1; // 0x28
		::System::String* ImgPath; // 0x30
		::System::String* ForeImgPath; // 0x38
		::System::String* ImgPath2; // 0x40
		::Il2CppArray<::System::UInt32>* EffectList; // 0x48
		::RPG::Client::TextID CardDesc; // 0x50
		::System::UInt32 CardActionID; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDACTIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkCardActionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkCardActionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKCARDACTIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
