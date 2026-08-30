#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM_METHOD_2_F9638EDB50AA69E8_OFFSET UNITYSDK_OFFSET(0x1D437AA0)
#define RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D437D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphUpdateTwoPointFourParam_TypeDefinitionIndex = 21409;

	class PhotoGraphUpdateTwoPointFourParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x10
		::RPG::GameCore::DynamicString* AimContainerName; // 0x18
		::RPG::GameCore::DynamicFloat* RectRangeX; // 0x20
		::RPG::GameCore::DynamicFloat* RectRangeY; // 0x28
		::RPG::GameCore::DynamicFloat* Damping; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F9638EDB50AA69E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM_METHOD_2_F9638EDB50AA69E8_OFFSET))(a1, a2);
		}
	};
}
