#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OVERRIDEMODIFIERNAME_METHOD_3_4B44CC7647D8ABBB_OFFSET UNITYSDK_OFFSET(0x18BCC5E0)
#define RPG_GAMECORE_OVERRIDEMODIFIERNAME_METHOD_3_C4CBCAFA6343F601_OFFSET UNITYSDK_OFFSET(0x18BCC700)
#define RPG_GAMECORE_OVERRIDEMODIFIERNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCC680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideModifierName_TypeDefinitionIndex = 22699;

	class OverrideModifierName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ModifierName; // 0x18
		::System::String* OverrideName; // 0x20
		::System::Boolean IsFullRedirect; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* DynamicValues; // 0x30
		::RPG::GameCore::DynamicFloat* Chance; // 0x38
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x40
		::RPG::GameCore::DynamicFloat* MaxLayer; // 0x48
		::RPG::GameCore::DynamicFloat* LayerAddWhenStack; // 0x50
		::RPG::GameCore::DynamicFloat* ChanceAddedRatio; // 0x58
		::RPG::GameCore::DynamicFloat* ChanceDelta; // 0x60
		::RPG::GameCore::DynamicFloat* LifeTimeAddedRatio; // 0x68
		::RPG::GameCore::DynamicFloat* LifeTimeDelta; // 0x70
		::RPG::GameCore::DynamicFloat* MaxLayerAddedRatio; // 0x78
		::RPG::GameCore::DynamicFloat* MaxLayerDelta; // 0x80
		::RPG::GameCore::DynamicFloat* LayerAddWhenStackAddedRatio; // 0x88
		::RPG::GameCore::DynamicFloat* LayerAddWhenStackDelta; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMODIFIERNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B44CC7647D8ABBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideModifierName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideModifierName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMODIFIERNAME_METHOD_3_4B44CC7647D8ABBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4CBCAFA6343F601(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideModifierName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideModifierName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEMODIFIERNAME_METHOD_3_C4CBCAFA6343F601_OFFSET))(a1, a2);
		}
	};
}
