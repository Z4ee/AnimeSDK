#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSTARTFARMELEMENT_METHOD_3_6BBE6702D8B3A356_OFFSET UNITYSDK_OFFSET(0x1B9A3150)
#define RPG_GAMECORE_PROPSTARTFARMELEMENT_METHOD_3_6C8B3693C9128093_OFFSET UNITYSDK_OFFSET(0x1B9A3080)
#define RPG_GAMECORE_PROPSTARTFARMELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A3140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStartFarmElement_TypeDefinitionIndex = 21280;

	class PropStartFarmElement : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTFARMELEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C8B3693C9128093(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStartFarmElement*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStartFarmElement*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTFARMELEMENT_METHOD_3_6C8B3693C9128093_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6BBE6702D8B3A356(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStartFarmElement* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStartFarmElement*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTARTFARMELEMENT_METHOD_3_6BBE6702D8B3A356_OFFSET))(a1, a2);
		}
	};
}
