#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_740AF06446D92B20_OFFSET UNITYSDK_OFFSET(0x1D2FD4D0)
#define RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_E2BA896B801DEE37_OFFSET UNITYSDK_OFFSET(0x1D2FD510)
#define RPG_GAMECORE_OPENFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FD500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenFarmElement_TypeDefinitionIndex = 21837;

	class OpenFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_740AF06446D92B20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_740AF06446D92B20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2BA896B801DEE37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENFARMELEMENT_METHOD_3_E2BA896B801DEE37_OFFSET))(a1, a2);
		}
	};
}
