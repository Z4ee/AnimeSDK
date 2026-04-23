#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_OUTERGLOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x18147E40)
#define RPG_CUSTOMRP_OUTERGLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x18147E30)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int OuterGlow_TypeDefinitionIndex = 35155;

	class OuterGlow : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OuterGlow_TypeDefinitionIndex)->GetStaticField(0x10480);
		}
		static ::UnityEngine::Color* StaticGet_OuterGlowColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(OuterGlow_TypeDefinitionIndex)->GetStaticField(0x10484);
		}
		static ::UnityEngine::Vector4* StaticGet_OuterGlowParams()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(OuterGlow_TypeDefinitionIndex)->GetStaticField(0x10494);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_OUTERGLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_OUTERGLOW__CCTOR_OFFSET))();
		}
	};
}
