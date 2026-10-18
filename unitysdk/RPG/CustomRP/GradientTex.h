#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }

#define RPG_CUSTOMRP_GRADIENTTEX_GEN_OFFSET UNITYSDK_OFFSET(0x1CC058D0)
#define RPG_CUSTOMRP_GRADIENTTEX_GET_TEX_OFFSET UNITYSDK_OFFSET(0x1CC05AA0)
#define RPG_CUSTOMRP_GRADIENTTEX_INIT_OFFSET UNITYSDK_OFFSET(0x1CC056B0)
#define RPG_CUSTOMRP_GRADIENTTEX_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CC05A50)
#define RPG_CUSTOMRP_GRADIENTTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC05AC0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GradientTex_TypeDefinitionIndex = 37886;

	class GradientTex : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet__DefaultTex()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(GradientTex_TypeDefinitionIndex)->GetStaticField(0x2CA60);
		}
		::UnityEngine::Gradient* Value; // 0x10
		::UnityEngine::Texture2D* _Tex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GRADIENTTEX__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GRADIENTTEX_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Gen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GRADIENTTEX_GEN_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GRADIENTTEX_RELEASE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_Tex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_GRADIENTTEX_GET_TEX_OFFSET))(this);
		}
	};
}
