#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E53A490)
#define RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53ABA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDiceBranchValueRow_TypeDefinitionIndex = 14736;

	class RogueNousDiceBranchValueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::RPG::Client::TextID BranchEffectDesc; // 0x18
		::System::UInt32 AeonID; // 0x28
		::System::UInt32 BranchID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueNousDiceBranchValueRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueNousDiceBranchValueRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDICEBRANCHVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
