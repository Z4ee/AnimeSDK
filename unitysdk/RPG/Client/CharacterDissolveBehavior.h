#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class CharacterDissolve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCAC6E50)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_422AB1A19F04E217_OFFSET UNITYSDK_OFFSET(0xCAC70B0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCAC6F30)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCAC6F90)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCAC6FF0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCAC6ED0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4F934196753710D2_OFFSET UNITYSDK_OFFSET(0xCAC71D0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCAC69F0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_D56C1A4C75B97C47_OFFSET UNITYSDK_OFFSET(0xCAC6A90)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCAC7050)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAC85A0)
#define RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC8530)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterDissolveBehavior_TypeDefinitionIndex = 70229;

	class CharacterDissolveBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__DissolveOutlineSize1ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCD0);
		}
		static ::System::Int32* StaticGet__DissolveShadowOffShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCD4);
		}
		static ::System::Int32* StaticGet__DissolveMapShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCD8);
		}
		static ::System::Int32* StaticGet__DissolveMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCDC);
		}
		static ::System::Int32* StaticGet__DissoveDirecMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCE0);
		}
		static ::System::Int32* StaticGet__DissolveOutlineColor1ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCE4);
		}
		static ::System::Int32* StaticGet__DissolveUVSpeedShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCE8);
		}
		static ::System::Int32* StaticGet__DissolveMaskUVSetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCEC);
		}
		static ::System::Int32* StaticGet__DissolveDistortionIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCF0);
		}
		static ::System::Int32* StaticGet__DissolveOutlineSize2ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCF4);
		}
		static ::System::Int32* StaticGet__DissolveOutlineSmoothStepShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCF8);
		}
		static ::System::Int32* StaticGet__DissolveComponentShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBCFC);
		}
		static ::System::Int32* StaticGet__DissolveOutlineOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD00);
		}
		static ::System::Int32* StaticGet__UsingDitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD04);
		}
		static ::System::Int32* StaticGet__DistortionStShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD08);
		}
		static ::System::Int32* StaticGet__DissolveUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD0C);
		}
		static ::System::Int32* StaticGet__DissolveMapAddShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD10);
		}
		static ::System::Int32* StaticGet__DissolveRateShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD14);
		}
		static ::System::Int32* StaticGet__DissoveOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD18);
		}
		static ::System::Int32* StaticGet__DissolveOutlineColor2ShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD1C);
		}
		static ::System::Int32* StaticGet__DitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD20);
		}
		static ::System::Int32* StaticGet__DissolveStShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterDissolveBehavior_TypeDefinitionIndex)->GetStaticField(0xBD24);
		}
		::UnityEngine::Renderer* _Renderer; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _MatIndexes; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_D56C1A4C75B97C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_D56C1A4C75B97C47_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_422AB1A19F04E217()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_422AB1A19F04E217_OFFSET))(this);
		}

		::System::Void Method_3_4F934196753710D2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_METHOD_3_4F934196753710D2_OFFSET))(this, a1);
		}

		::RPG::Client::CharacterDissolve* get__Owner()
		{
			return ((::RPG::Client::CharacterDissolve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERDISSOLVEBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
