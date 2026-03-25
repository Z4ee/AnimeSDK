#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_5F4E9805F4FECFD5_OFFSET UNITYSDK_OFFSET(0x1747BAE0)
#define RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_6FA023BFBDDC3213_OFFSET UNITYSDK_OFFSET(0x1747BA60)
#define RPG_GAMECORE_OPENFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1747BAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmElement_TypeDefinitionIndex = 20267;

	class OpenFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FA023BFBDDC3213(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_6FA023BFBDDC3213_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5F4E9805F4FECFD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_5F4E9805F4FECFD5_OFFSET))(a1, a2);
		}
	};
}
