#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E825DC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL_METHOD_4_3FCC275BB5E44B3A_OFFSET UNITYSDK_OFFSET(0x1E825B90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL_METHOD_4_DD060CA840C8B7C7_OFFSET UNITYSDK_OFFSET(0x1E825BD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E825BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByWorldLevel_TypeDefinitionIndex = 22507;

	class SetDynamicValueByWorldLevel : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::TargetEvaluator* WorldLevelTarget; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3FCC275BB5E44B3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWorldLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWorldLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL_METHOD_4_3FCC275BB5E44B3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DD060CA840C8B7C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByWorldLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByWorldLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL_METHOD_4_DD060CA840C8B7C7_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWORLDLEVEL_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
