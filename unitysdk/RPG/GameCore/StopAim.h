#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STOPAIM_METHOD_3_58D3286A0D54A58F_OFFSET UNITYSDK_OFFSET(0x1CAFC5F0)
#define RPG_GAMECORE_STOPAIM_METHOD_3_60FD34F3D59AC77E_OFFSET UNITYSDK_OFFSET(0x1CAFC5A0)
#define RPG_GAMECORE_STOPAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFC5E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopAim_TypeDefinitionIndex = 22157;

	class StopAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AimerName; // 0x18
		::System::Single TransitTime; // 0x20
		::System::Boolean IsEffect; // 0x24
		::System::String* EffectPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPAIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_60FD34F3D59AC77E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopAim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopAim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPAIM_METHOD_3_60FD34F3D59AC77E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58D3286A0D54A58F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopAim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPAIM_METHOD_3_58D3286A0D54A58F_OFFSET))(a1, a2);
		}
	};
}
