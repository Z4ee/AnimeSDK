#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOPREWINDSNAPSECTION_METHOD_2_A94C582ADB19F8B5_OFFSET UNITYSDK_OFFSET(0x1BCD4450)
#define RPG_GAMECORE_LOOPREWINDSNAPSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD45D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopRewindSnapSection_TypeDefinitionIndex = 19854;

	class LoopRewindSnapSection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartRatio; // 0x10
		::System::Single EndRatio; // 0x14
		::System::Single SnapRatio; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPREWINDSNAPSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A94C582ADB19F8B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoopRewindSnapSection*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoopRewindSnapSection*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPREWINDSNAPSECTION_METHOD_2_A94C582ADB19F8B5_OFFSET))(a1, a2);
		}
	};
}
