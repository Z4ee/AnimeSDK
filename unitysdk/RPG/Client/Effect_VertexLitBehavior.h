#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_VertexLitMonoPlugin; }
namespace RPG::Client::TAUtils { class RendererMaterials; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xA213D70)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xA2123D0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xA212020)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_40EBA7013E4CCDDF_1_OFFSET UNITYSDK_OFFSET(0xA213D20)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0xA211720)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA2122B0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xA212310)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xA212370)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA2116C0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_489E0B827662C211_1_OFFSET UNITYSDK_OFFSET(0xA212430)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0xA211770)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA213E80)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA213EE0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xA213F40)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xA213FA0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xA214010)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA213E20)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_7A150941533E8F96_OFFSET UNITYSDK_OFFSET(0xA211FD0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xA213DC0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA213DB0)
#define RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0xA214080)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_VertexLitBehavior_TypeDefinitionIndex = 65076;

	class Effect_VertexLitBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SceneLightPositionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x2980);
		}
		static ::System::Int32* StaticGet__PointLightPosRangesShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x2984);
		}
		static ::System::Int32* StaticGet__SceneLightColorColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x2988);
		}
		static ::System::Int32* StaticGet__PointLightColorsShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_VertexLitBehavior_TypeDefinitionIndex)->GetStaticField(0x298C);
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

		::System::Void Method_3_40EBA7013E4CCDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_40EBA7013E4CCDDF_OFFSET))(this);
		}

		::System::Void Method_3_7A150941533E8F96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_7A150941533E8F96_OFFSET))(this);
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

		::System::Void Method_3_40EBA7013E4CCDDF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_40EBA7013E4CCDDF_1_OFFSET))(this);
		}

		::System::Void Method_3_489E0B827662C211()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_489E0B827662C211_OFFSET))(this);
		}

		::System::Void Method_3_2B9D478141E0F891()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_2B9D478141E0F891_OFFSET))(this);
		}

		::System::Void Method_3_489E0B827662C211_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_489E0B827662C211_1_OFFSET))(this);
		}

		::RPG::Client::Effect_VertexLitMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_VertexLitMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITBEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, P0);
		}
	};
}
