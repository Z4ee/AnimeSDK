#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPSPECIALVISIONCONFIG_METHOD_2_8EB957D2710286C8_OFFSET UNITYSDK_OFFSET(0x1D371EE0)
#define RPG_GAMECORE_PROPSPECIALVISIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D372130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSpecialVisionConfig_TypeDefinitionIndex = 20272;

	class PropSpecialVisionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x18
		::System::Boolean TargetIsOwner; // 0x20
		::RPG::GameCore::DynamicString* PropKey; // 0x28
		::System::UInt32 StencilRefGBuffer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSPECIALVISIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8EB957D2710286C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSpecialVisionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSpecialVisionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSPECIALVISIONCONFIG_METHOD_2_8EB957D2710286C8_OFFSET))(a1, a2);
		}
	};
}
