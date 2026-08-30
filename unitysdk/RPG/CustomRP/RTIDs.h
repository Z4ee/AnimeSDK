#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x185B47E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 37090;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED20);
		}
		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED24);
		}
		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED28);
		}
		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED2C);
		}
		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED30);
		}
		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED34);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED38);
		}
		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED3C);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED40);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED44);
		}
		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED48);
		}
		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xED4C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET))();
		}
	};
}
