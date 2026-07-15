#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E20B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_METHOD_4_124881ECF9E0C8CB_OFFSET UNITYSDK_OFFSET(0x1C2E1E80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_METHOD_4_34B0D55BD23B39B6_OFFSET UNITYSDK_OFFSET(0x1C2E1EC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E1EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByFormationIndex_TypeDefinitionIndex = 22430;

	class SetDynamicValueByFormationIndex : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TeamMemberCountingOption CountingOption; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_124881ECF9E0C8CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFormationIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFormationIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_METHOD_4_124881ECF9E0C8CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34B0D55BD23B39B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFormationIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFormationIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_METHOD_4_34B0D55BD23B39B6_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFORMATIONINDEX_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
