#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_VertexLitMonoPlugin; }
namespace RPG::Client::TAUtils { class RendererMaterials; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x1AC52570)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x1AC50DF0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x1AC50AC0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x1AC50B10)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1AC50CD0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1AC50D30)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x1AC50D90)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15EA61D0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_8594010D6A57C9BB_1_OFFSET UNITYSDK_OFFSET(0x1AC52520)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_8594010D6A57C9BB_OFFSET UNITYSDK_OFFSET(0x1AC504A0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1AC504F0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1AC50E50)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC525C0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC525B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_VertexLitBehavior_TypeDefinitionIndex = 70549;

	class Effect_VertexLitBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SceneLightPositionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x141A0);
		}
		static ::System::Int32* StaticGet__SceneLightColorColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x141A4);
		}
		static ::System::Int32* StaticGet__PointLightColorsShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x141A8);
		}
		static ::System::Int32* StaticGet__PointLightPosRangesShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x141AC);
		}
		// static const ::System::Int32 _POINTLIGHT_MAX_NUM = 0x4; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererMaterials*>* OriginMaterials; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _MaterialInstances; // 0x40
		::System::Boolean _IsInMonoEffect; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_8594010D6A57C9BB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_8594010D6A57C9BB_OFFSET))(this);
		}

		::System::Void Method_3_0D8DB2DC8B47A973()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_0D8DB2DC8B47A973_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_8594010D6A57C9BB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_8594010D6A57C9BB_1_OFFSET))(this);
		}

		::System::Void Method_3_B43C848B078B3C34()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_B43C848B078B3C34_OFFSET))(this);
		}

		::System::Void Method_3_276036CDF4BFF5A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_276036CDF4BFF5A6_OFFSET))(this);
		}

		::System::Void Method_3_DB67EEFB041425EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_DB67EEFB041425EC_OFFSET))(this);
		}

		::RPG::Client::Effect_VertexLitMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_VertexLitMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
