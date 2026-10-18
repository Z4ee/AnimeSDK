#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFloatToInt.h"
#include "unitysdk/RPG/GameCore/MarbleOperation.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
#include "unitysdk/RPG/GameCore/MarbleValue.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_60498F12E05EFA60_OFFSET UNITYSDK_OFFSET(0x1D814920)
#define RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_6887245CF20FED4E_OFFSET UNITYSDK_OFFSET(0x1D814980)
#define RPG_GAMECORE_MARBLEMODIFYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D814970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleModifyValue_TypeDefinitionIndex = 16830;

	class MarbleModifyValue : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::RPG::GameCore::MarbleValue ValueType; // 0x14
		::RPG::GameCore::MarbleOperation Operation; // 0x18
		::System::Single Value; // 0x1C
		::System::String* ValueDynamic; // 0x20
		::System::Boolean IsPercent; // 0x28
		::System::Boolean ForceHpChange; // 0x29
		::System::Boolean UseProperty; // 0x2A
		::RPG::GameCore::MarbleTarget PropertyTarget; // 0x2C
		::RPG::GameCore::MarbleValue PropertyType; // 0x30
		::System::Single PropertyFactor; // 0x34
		::System::String* PropertyFactorDynamic; // 0x38
		::RPG::GameCore::MarbleFloatToInt ToInt; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMODIFYVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60498F12E05EFA60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleModifyValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleModifyValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_60498F12E05EFA60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6887245CF20FED4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleModifyValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleModifyValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMODIFYVALUE_METHOD_3_6887245CF20FED4E_OFFSET))(a1, a2);
		}
	};
}
