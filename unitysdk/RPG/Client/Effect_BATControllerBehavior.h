#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class Effect_BATControllerMonoPlugin; }

#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCDCE7D0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCDCE4E0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCDCEA00)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCDCE360)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCDCE3C0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCDCE420)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xCDCE480)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0xCDCEA40)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCDCE300)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCDCE270)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCDCEAB0)
#define RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCDCEAA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BATControllerBehavior_TypeDefinitionIndex = 70395;

	class Effect_BATControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__BoneIndicesWeightsTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_BATControllerBehavior_TypeDefinitionIndex)->GetStaticField(0x146E0);
		}
		static ::System::Int32* StaticGet__AnimationTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_BATControllerBehavior_TypeDefinitionIndex)->GetStaticField(0x146E4);
		}
		static ::System::Int32* StaticGet__FrameIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_BATControllerBehavior_TypeDefinitionIndex)->GetStaticField(0x146E8);
		}
		static ::System::Int32* StaticGet__VertexCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_BATControllerBehavior_TypeDefinitionIndex)->GetStaticField(0x146EC);
		}
		static ::System::Int32* StaticGet__NumberOfBones()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_BATControllerBehavior_TypeDefinitionIndex)->GetStaticField(0x146F0);
		}
		::System::Single _TickTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::RPG::Client::Effect_BATControllerMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_BATControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
