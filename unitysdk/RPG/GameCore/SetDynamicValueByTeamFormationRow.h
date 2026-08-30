#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D4F7D70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4F7D30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1D4F7F80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTeamFormationRow_TypeDefinitionIndex = 22664;

	class SetDynamicValueByTeamFormationRow : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::System::Boolean ActiveRow; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByTeamFormationRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
