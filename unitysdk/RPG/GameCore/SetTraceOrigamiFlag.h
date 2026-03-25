#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETTRACEORIGAMIFLAG_METHOD_3_4D550F98A6CF6B8C_OFFSET UNITYSDK_OFFSET(0x176E51F0)
#define RPG_GAMECORE_SETTRACEORIGAMIFLAG_METHOD_3_939B4861772FF118_OFFSET UNITYSDK_OFFSET(0x176E5300)
#define RPG_GAMECORE_SETTRACEORIGAMIFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x176E52D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTraceOrigamiFlag_TypeDefinitionIndex = 20036;

	class SetTraceOrigamiFlag : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACEORIGAMIFLAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4D550F98A6CF6B8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTraceOrigamiFlag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTraceOrigamiFlag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACEORIGAMIFLAG_METHOD_3_4D550F98A6CF6B8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_939B4861772FF118(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTraceOrigamiFlag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTraceOrigamiFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTRACEORIGAMIFLAG_METHOD_3_939B4861772FF118_OFFSET))(a1, a2);
		}
	};
}
