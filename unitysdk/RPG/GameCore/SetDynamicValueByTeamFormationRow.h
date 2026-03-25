#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x176C6240)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176C6170)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x176C6450)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x176C61F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTeamFormationRow_TypeDefinitionIndex = 21116;

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

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SetDynamicValueByTeamFormationRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByTeamFormationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_FROMBINARYIMPL_OFFSET))(array, val);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTEAMFORMATIONROW_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
