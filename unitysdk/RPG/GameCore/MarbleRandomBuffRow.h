#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLERANDOMBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D23A680)
#define RPG_GAMECORE_MARBLERANDOMBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D23ABB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleRandomBuffRow_TypeDefinitionIndex = 11859;

	class MarbleRandomBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConditionList; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ParamList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID Desc; // 0x38
		::System::UInt32 UnlockSubMission; // 0x48
		::RPG::GameCore::MultiPlayerGameMode GameMode; // 0x4C
		::System::UInt32 ActivityID; // 0x50
		::System::UInt32 EffectType; // 0x54
		::System::UInt32 ID; // 0x58
		::System::UInt32 SetInactive; // 0x5C
		::System::UInt32 IsRepeat; // 0x60
		::System::Int32 Weight; // 0x64
		::System::UInt32 EffectParam; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleRandomBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleRandomBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLERANDOMBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
