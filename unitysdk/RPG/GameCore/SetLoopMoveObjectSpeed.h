#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_METHOD_3_4EFFADDB8C10EA08_OFFSET UNITYSDK_OFFSET(0x1D5044A0)
#define RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_METHOD_3_D8BAC9E2F2A2E73D_OFFSET UNITYSDK_OFFSET(0x1D5044E0)
#define RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5044D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLoopMoveObjectSpeed_TypeDefinitionIndex = 20195;

	class SetLoopMoveObjectSpeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18
		::System::Single MoveSpeed; // 0x20
		::System::Single Duration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4EFFADDB8C10EA08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoopMoveObjectSpeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoopMoveObjectSpeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_METHOD_3_4EFFADDB8C10EA08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D8BAC9E2F2A2E73D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetLoopMoveObjectSpeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetLoopMoveObjectSpeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPMOVEOBJECTSPEED_METHOD_3_D8BAC9E2F2A2E73D_OFFSET))(a1, a2);
		}
	};
}
