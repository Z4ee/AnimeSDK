#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_8FE5649592E2167C_OFFSET UNITYSDK_OFFSET(0x194223A0)
#define RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_902AE7AF0D5FA7B0_OFFSET UNITYSDK_OFFSET(0x19422290)
#define RPG_GAMECORE_ADVENDISOMETRIC__CTOR_OFFSET UNITYSDK_OFFSET(0x19422370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEndIsometric_TypeDefinitionIndex = 20985;

	class AdvEndIsometric : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_902AE7AF0D5FA7B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEndIsometric*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEndIsometric*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_902AE7AF0D5FA7B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FE5649592E2167C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvEndIsometric* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvEndIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENDISOMETRIC_METHOD_3_8FE5649592E2167C_OFFSET))(a1, a2);
		}
	};
}
