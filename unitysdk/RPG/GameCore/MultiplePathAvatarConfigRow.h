#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2DD400)
#define RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DD7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiplePathAvatarConfigRow_TypeDefinitionIndex = 12709;

	class MultiplePathAvatarConfigRow : public ::System::Object
	{
	public:
		::System::String* ChangeConfigPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::RPG::Client::TextID UnlockToast; // 0x20
		::RPG::GameCore::GenderType Gender; // 0x30
		::System::Boolean IsEarlyUnlock; // 0x34
		::System::Boolean AllowRepeatUnlockReward; // 0x35
		::System::UInt32 AvatarID; // 0x38
		::System::UInt32 BaseAvatarID; // 0x3C
		::RPG::Client::TextID Desc; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MultiplePathAvatarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MultiplePathAvatarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
