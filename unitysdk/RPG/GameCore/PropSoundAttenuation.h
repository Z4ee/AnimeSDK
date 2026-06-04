#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPSOUNDATTENUATION_METHOD_2_EF6541D6F476CBBE_OFFSET UNITYSDK_OFFSET(0x19A9AA30)
#define RPG_GAMECORE_PROPSOUNDATTENUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9ABD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSoundAttenuation_TypeDefinitionIndex = 16682;

	class PropSoundAttenuation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single MaxRTPCValue; // 0x18
		::System::Single MaxDistance; // 0x1C
		::System::Single ZeroDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDATTENUATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF6541D6F476CBBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSoundAttenuation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSoundAttenuation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDATTENUATION_METHOD_2_EF6541D6F476CBBE_OFFSET))(a1, a2);
		}
	};
}
