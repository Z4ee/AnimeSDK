#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AD2720)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 29382;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100A0);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100A4);
		}
		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100A8);
		}
		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100AC);
		}
		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100B0);
		}
		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100B4);
		}
		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100B8);
		}
		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100BC);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100C0);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100C4);
		}
		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100C8);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x100CC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET))();
		}
	};
}
