#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE76D30)
#define RPG_GAMECORE_MULTIPLEPATHAVATARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE77120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiplePathAvatarConfigRow_TypeDefinitionIndex = 12709;

	class MultiplePathAvatarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x10
		::System::String* ChangeConfigPath; // 0x18
		::System::UInt32 AvatarID; // 0x20
		::RPG::GameCore::GenderType Gender; // 0x24
		::System::UInt32 BaseAvatarID; // 0x28
		::System::Boolean AllowRepeatUnlockReward; // 0x2C
		::System::Boolean IsEarlyUnlock; // 0x2D
		::RPG::Client::TextID Desc; // 0x30
		::RPG::Client::TextID UnlockToast; // 0x40

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
