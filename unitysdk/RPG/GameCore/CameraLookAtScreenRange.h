#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAMERALOOKATSCREENRANGE_METHOD_2_995C21E4DE7C99D7_OFFSET UNITYSDK_OFFSET(0x1CF7C750)
#define RPG_GAMECORE_CAMERALOOKATSCREENRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7C860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraLookAtScreenRange_TypeDefinitionIndex = 20268;

	class CameraLookAtScreenRange : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single XRange; // 0x10
		::System::Single YRange; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_995C21E4DE7C99D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraLookAtScreenRange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraLookAtScreenRange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGE_METHOD_2_995C21E4DE7C99D7_OFFSET))(a1, a2);
		}
	};
}
