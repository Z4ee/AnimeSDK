#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCounterType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1C2E4410)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_METHOD_4_150E5991E6FD63B2_OFFSET UNITYSDK_OFFSET(0x1C2E41B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_METHOD_4_E2E0F950C900DFC3_OFFSET UNITYSDK_OFFSET(0x1C2E41F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E41E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMagicUnitCounter_TypeDefinitionIndex = 22278;

	class SetDynamicValueByMagicUnitCounter : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::RPG::GameCore::RogueMagicUnitCounterType Value; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_150E5991E6FD63B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_METHOD_4_150E5991E6FD63B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2E0F950C900DFC3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByMagicUnitCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_METHOD_4_E2E0F950C900DFC3_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMAGICUNITCOUNTER_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
