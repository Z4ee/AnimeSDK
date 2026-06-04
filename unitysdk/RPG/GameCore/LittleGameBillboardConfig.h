#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_METHOD_3_3E192A0159270300_OFFSET UNITYSDK_OFFSET(0x19898170)
#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_METHOD_3_C80F1CBFD56A2798_OFFSET UNITYSDK_OFFSET(0x19898210)
#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19898580)
#define RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x198981F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameBillboardConfig_TypeDefinitionIndex = 17921;

	class LittleGameBillboardConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		static ::RPG::GameCore::LittleGameBillboardConfig** StaticGet_DefaultBillboardConfig()
		{
			return (::RPG::GameCore::LittleGameBillboardConfig**)Il2CppClass::FromTypeDefinitionIndex(LittleGameBillboardConfig_TypeDefinitionIndex)->GetStaticField(0x281F0);
		}
		::System::Boolean IsBillboard; // 0x10
		::System::Boolean ShowName; // 0x11
		::System::Boolean ShowIcon; // 0x12
		::System::Boolean ShowBubble; // 0x13
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 MapIconID; // 0x28
		::System::Boolean IsOverrideShowDistance; // 0x2C
		::System::Single OverrideShowDistance; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_3E192A0159270300(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBillboardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBillboardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_METHOD_3_3E192A0159270300_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C80F1CBFD56A2798(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameBillboardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameBillboardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEBILLBOARDCONFIG_METHOD_3_C80F1CBFD56A2798_OFFSET))(a1, a2);
		}
	};
}
