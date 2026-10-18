#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVREGISTERPET_METHOD_3_8C219D39B9F365FA_OFFSET UNITYSDK_OFFSET(0x1D3AC420)
#define RPG_GAMECORE_ADVREGISTERPET_METHOD_3_E2D459FC444CB557_OFFSET UNITYSDK_OFFSET(0x1D3AC350)
#define RPG_GAMECORE_ADVREGISTERPET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AC410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRegisterPet_TypeDefinitionIndex = 20941;

	class AdvRegisterPet : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREGISTERPET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E2D459FC444CB557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRegisterPet*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRegisterPet*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREGISTERPET_METHOD_3_E2D459FC444CB557_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8C219D39B9F365FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvRegisterPet* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvRegisterPet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREGISTERPET_METHOD_3_8C219D39B9F365FA_OFFSET))(a1, a2);
		}
	};
}
