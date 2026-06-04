#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F1B700)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 35449;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13260);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13264);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13268);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x1326C);
		}
		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13270);
		}
		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13274);
		}
		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13278);
		}
		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x1327C);
		}
		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13280);
		}
		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13284);
		}
		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x13288);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x1328C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET))();
		}
	};
}
