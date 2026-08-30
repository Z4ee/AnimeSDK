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

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCE0E1F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCE0E060)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0xCE0E270)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xCE0DE60)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0xCE0FC20)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xCE0DDF0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCE0FB80)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCE0DD90)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCE0DFA0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCE0E000)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xCE0FBC0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCE0DBF0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xCE0F9E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xCE0FF20)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCE0DC50)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0xCE0E770)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_D20FD81754C01453_OFFSET UNITYSDK_OFFSET(0xCE0DD30)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0xCE0FD30)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0xCE100E0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE10550)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCE10540)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex = 70500;

	class Effect_PolluxFlowerSeaBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::String** StaticGet__KeywordInstancedFlowerSea()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x64990);
		}
		static ::System::Int32* StaticGet__PropCustomLightingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148D0);
		}
		static ::System::Int32* StaticGet__PropLifeTimeAnimation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148D4);
		}
		static ::System::Int32* StaticGet__PropLineStartPositon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148D8);
		}
		static ::System::Int32* StaticGet__AnimationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148DC);
		}
		static ::System::Int32* StaticGet__PropLineGrowDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148E0);
		}
		static ::System::Int32* StaticGet__PropLineGrowRandom()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148E4);
		}
		static ::System::Int32* StaticGet__PropLineGrowSmooth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148E8);
		}
		static ::System::Int32* StaticGet__PropWindNoiseTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148EC);
		}
		static ::System::Int32* StaticGet__PropLineSideFallOffSmooth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148F0);
		}
		static ::System::Int32* StaticGet__PropWindDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148F4);
		}
		static ::System::Int32* StaticGet__PropCustomLightingSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148F8);
		}
		static ::System::Int32* StaticGet__PropCustomLighting()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x148FC);
		}
		static ::System::Int32* StaticGet__PropCustomDarkColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14900);
		}
		static ::System::Int32* StaticGet__PropWindNoiseFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14904);
		}
		static ::System::Int32* StaticGet__PropCustomLightingDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14908);
		}
		static ::System::Int32* StaticGet__PropLineSideLineSideFallOff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1490C);
		}
		static ::System::Int32* StaticGet__PropLineSideFallOffDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14910);
		}
		static ::System::Int32* StaticGet__PropWindNoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14914);
		}
		static ::System::Int32* StaticGet__PropLineGrowDebug()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14918);
		}
		static ::System::Int32* StaticGet__PropCustomBrightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x1491C);
		}
		static ::System::Int32* StaticGet__PropLineDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14920);
		}
		static ::System::Int32* StaticGet__PropDisappearFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x14924);
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

		::System::Void Method_3_D20FD81754C01453()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_D20FD81754C01453_OFFSET))(this);
		}

		::System::Void Method_3_CC99BBFAC9417CA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_CC99BBFAC9417CA7_OFFSET))(this);
		}

		::System::Void Method_3_8714CF4AE9195CA2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_8714CF4AE9195CA2_OFFSET))(this);
		}

		::System::Void Method_3_178812F674E8B05A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET))(this);
		}

		::System::Void Method_3_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_3_04F02FC65FAA2E0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_04F02FC65FAA2E0C_OFFSET))(this);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_3_E041300CFBBD9160()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_E041300CFBBD9160_OFFSET))(this);
		}

		::System::Void Method_3_FAADEE08E4E52BA5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_FAADEE08E4E52BA5_OFFSET))(this);
		}

		::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
