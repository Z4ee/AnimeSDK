#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class Effect_PolluxFlowerSeaMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x9575EA0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x9575D10)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x9575B10)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x9575AA0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x9577840)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x95777A0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x9575A40)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x9575C50)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x9575CB0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x95777E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x95758A0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x9577600)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x95783B0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9578410)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x9578470)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x95784D0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x9578540)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x9578690)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9578350)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_724025AF880C2293_OFFSET UNITYSDK_OFFSET(0x9577CF0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET UNITYSDK_OFFSET(0x9575F10)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x95759E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x95763F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9575900)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x9577B40)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0x9577950)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9578620)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x9578170)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9578160)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0x95785B0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex = 57763;

	class Effect_PolluxFlowerSeaBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::String** StaticGet__KeywordInstancedFlowerSea()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x45EC0);
		}
		static ::System::Int32* StaticGet__PropWindNoiseTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12300);
		}
		static ::System::Int32* StaticGet__PropCustomLighting()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12304);
		}
		static ::System::Int32* StaticGet__PropCustomLightingSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12308);
		}
		static ::System::Int32* StaticGet__PropLineStartPositon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1230C);
		}
		static ::System::Int32* StaticGet__PropLineSideFallOffDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12310);
		}
		static ::System::Int32* StaticGet__PropLineGrowDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12314);
		}
		static ::System::Int32* StaticGet__PropCustomLightingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12318);
		}
		static ::System::Int32* StaticGet__PropCustomDarkColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1231C);
		}
		static ::System::Int32* StaticGet__PropDisappearFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12320);
		}
		static ::System::Int32* StaticGet__PropLineSideFallOffSmooth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12324);
		}
		static ::System::Int32* StaticGet__PropCustomLightingDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12328);
		}
		static ::System::Int32* StaticGet__PropCustomBrightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1232C);
		}
		static ::System::Int32* StaticGet__PropLineGrowRandom()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12330);
		}
		static ::System::Int32* StaticGet__PropLineGrowDebug()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12334);
		}
		static ::System::Int32* StaticGet__PropWindNoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12338);
		}
		static ::System::Int32* StaticGet__PropLifeTimeAnimation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1233C);
		}
		static ::System::Int32* StaticGet__AnimationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12340);
		}
		static ::System::Int32* StaticGet__PropLineSideLineSideFallOff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12344);
		}
		static ::System::Int32* StaticGet__PropWindDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12348);
		}
		static ::System::Int32* StaticGet__PropLineDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1234C);
		}
		static ::System::Int32* StaticGet__PropWindNoiseFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12350);
		}
		static ::System::Int32* StaticGet__PropLineGrowSmooth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x12354);
		}
		::UnityEngine::Material* _MaterialInstance; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldMatrixList; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::UnityEngine::Texture2D* _LifeTimeAnimation; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_2ED6C3773AA1E488()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_2ED6C3773AA1E488_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void Method_3_A5809AB80389F7DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET))(this);
		}

		::System::Void Method_3_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_3_5176DC743E478510()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5176DC743E478510_OFFSET))(this);
		}

		::System::Void Method_3_30A2382C3FCC5386()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_30A2382C3FCC5386_OFFSET))(this);
		}

		::System::Void Method_3_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_3_81FEFD1B22CE37A2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_81FEFD1B22CE37A2_OFFSET))(this);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_3_E041300CFBBD9160()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_E041300CFBBD9160_OFFSET))(this);
		}

		::System::Void Method_3_724025AF880C2293()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_724025AF880C2293_OFFSET))(this);
		}

		::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, P0);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}
	};
}
