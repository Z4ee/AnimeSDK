#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class UIMusicVisualization_MusicMixingMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x17B65C80)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_MATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x17B667F0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_ORIGINMATERIALS_OFFSET UNITYSDK_OFFSET(0x17B66A70)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x17B669F0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x17B65820)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_1210B284F0F87EAB_OFFSET UNITYSDK_OFFSET(0x17B65CE0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x17B65B60)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x17B65BC0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x17B65C20)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17B64F20)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_B18DB00ECBB2508D_OFFSET UNITYSDK_OFFSET(0x17B66510)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_C764126736FB1C29_OFFSET UNITYSDK_OFFSET(0x17B64FD0)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_E11BF4997198DC1F_OFFSET UNITYSDK_OFFSET(0x17B65870)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_ED16244D686320AE_OFFSET UNITYSDK_OFFSET(0x17B64F80)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B66D30)
#define RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17B66C70)

namespace RPG::Client
{
	inline static constexpr unsigned int UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex = 70792;

	class UIMusicVisualization_MusicMixingBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__BarWidthShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex)->GetStaticField(0x142D0);
		}
		static ::System::Int32* StaticGet__UVNoiseTexStShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex)->GetStaticField(0x142D4);
		}
		static ::System::Int32* StaticGet__ChunkEdgeShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex)->GetStaticField(0x142D8);
		}
		static ::System::Int32* StaticGet__MusicMixingChannelShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex)->GetStaticField(0x142DC);
		}
		static ::System::Int32* StaticGet__BarIntervalShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIMusicVisualization_MusicMixingBehavior_TypeDefinitionIndex)->GetStaticField(0x142E0);
		}
		::UnityEngine::Vector4 _LastMusicMixingChannel; // 0x38
		::UnityEngine::Vector4 _CurrentMusicMixingChannel; // 0x48
		::UnityEngine::Vector4 _NextMusicMixingChannel; // 0x58
		::System::Single _MusicMixingTransitionTime; // 0x68
		::Il2CppArray<::UnityEngine::Material*>* _OriginMaterials; // 0x70
		::Il2CppArray<::UnityEngine::Material*>* _MaterialInstances; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* _OriginMaterialBarWidth; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* _OriginMaterialBarInterval; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_ED16244D686320AE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_ED16244D686320AE_OFFSET))(this);
		}

		::System::Void Method_3_07280B24DFAC0CA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_07280B24DFAC0CA9_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_B18DB00ECBB2508D(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_B18DB00ECBB2508D_OFFSET))(this, a1);
		}

		::System::Void Method_3_C764126736FB1C29()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_C764126736FB1C29_OFFSET))(this);
		}

		::System::Void Method_3_E11BF4997198DC1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_E11BF4997198DC1F_OFFSET))(this);
		}

		::System::Void Method_3_1210B284F0F87EAB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_METHOD_3_1210B284F0F87EAB_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_OriginMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_ORIGINMATERIALS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* get_MaterialInstances()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET_MATERIALINSTANCES_OFFSET))(this);
		}

		::RPG::Client::UIMusicVisualization_MusicMixingMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::UIMusicVisualization_MusicMixingMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMUSICVISUALIZATION_MUSICMIXINGBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
