#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSERVERSTATEROTATION_METHOD_2_4D66A4CA9CF00829_OFFSET UNITYSDK_OFFSET(0x17524780)
#define RPG_GAMECORE_PROPSERVERSTATEROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x175247C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropServerStateRotation_TypeDefinitionIndex = 18638;

	class PropServerStateRotation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERSTATEROTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D66A4CA9CF00829(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropServerStateRotation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropServerStateRotation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERSTATEROTATION_METHOD_2_4D66A4CA9CF00829_OFFSET))(a1, a2);
		}
	};
}
