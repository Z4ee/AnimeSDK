#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntranceShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }

#define RPG_GAMECORE_FUNCUNLOCKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D11D9A0)
#define RPG_GAMECORE_FUNCUNLOCKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D11E640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockConfigRow_TypeDefinitionIndex = 13211;

	class FuncUnlockConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::EntranceShowType>* ShowCondition; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x18
		::System::UInt32 UnlockID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FuncUnlockConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FuncUnlockConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FUNCUNLOCKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
