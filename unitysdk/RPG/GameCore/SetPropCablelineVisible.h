#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETPROPCABLELINEVISIBLE_METHOD_3_48E2F83BEA976108_OFFSET UNITYSDK_OFFSET(0x1D50B0E0)
#define RPG_GAMECORE_SETPROPCABLELINEVISIBLE_METHOD_3_B1133F26E44E972B_OFFSET UNITYSDK_OFFSET(0x1D50B120)
#define RPG_GAMECORE_SETPROPCABLELINEVISIBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D50B110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropCablelineVisible_TypeDefinitionIndex = 21025;

	class SetPropCablelineVisible : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LinePropInstanceID; // 0x18
		::System::Boolean IsVisible; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCABLELINEVISIBLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_48E2F83BEA976108(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropCablelineVisible*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropCablelineVisible*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCABLELINEVISIBLE_METHOD_3_48E2F83BEA976108_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1133F26E44E972B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetPropCablelineVisible* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetPropCablelineVisible*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPCABLELINEVISIBLE_METHOD_3_B1133F26E44E972B_OFFSET))(a1, a2);
		}
	};
}
