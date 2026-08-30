#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_OUTERGLOW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6B4550)
#define RPG_CUSTOMRP_OUTERGLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B4540)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int OuterGlow_TypeDefinitionIndex = 37096;

	class OuterGlow : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_OuterGlowColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(OuterGlow_TypeDefinitionIndex)->GetStaticField(0xDA80);
		}
		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OuterGlow_TypeDefinitionIndex)->GetStaticField(0xDA90);
		}
		static ::UnityEngine::Vector4* StaticGet_OuterGlowParams()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(OuterGlow_TypeDefinitionIndex)->GetStaticField(0xDA94);
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
