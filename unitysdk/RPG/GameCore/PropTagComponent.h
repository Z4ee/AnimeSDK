#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HoyoTag; }

#define RPG_GAMECORE_PROPTAGCOMPONENT_METHOD_2_40545298EF9C5F67_OFFSET UNITYSDK_OFFSET(0x18C7B0C0)
#define RPG_GAMECORE_PROPTAGCOMPONENT_METHOD_2_C6CC1D298EF0A2CA_OFFSET UNITYSDK_OFFSET(0x18C7B350)
#define RPG_GAMECORE_PROPTAGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C78850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropTagComponent_TypeDefinitionIndex = 16660;

	class PropTagComponent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HoyoTag* Tag; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_40545298EF9C5F67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENT_METHOD_2_40545298EF9C5F67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C6CC1D298EF0A2CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropTagComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropTagComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPTAGCOMPONENT_METHOD_2_C6CC1D298EF0A2CA_OFFSET))(a1, a2);
		}
	};
}
