#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING16_OFFSET UNITYSDK_OFFSET(0x146C8CF0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING256_OFFSET UNITYSDK_OFFSET(0x146C8D20)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING32_OFFSET UNITYSDK_OFFSET(0x146C8D00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING64_OFFSET UNITYSDK_OFFSET(0x146C8D10)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILINGWITH_OFFSET UNITYSDK_OFFSET(0x146C8CE0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE5267266A_OFFSET UNITYSDK_OFFSET(0x146C8FA0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE98318E69_OFFSET UNITYSDK_OFFSET(0x146C8DB0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARED618B369_OFFSET UNITYSDK_OFFSET(0x146C8F00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREE519EFD4_OFFSET UNITYSDK_OFFSET(0x146C9040)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREF14F77D8_OFFSET UNITYSDK_OFFSET(0x146C88E0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSETEXTURES_OFFSET UNITYSDK_OFFSET(0x146C8D30)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x146C8770)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x146C87B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x146C86F0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETBLENDMODES_OFFSET UNITYSDK_OFFSET(0x146C8B90)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETNUMBEROFFRAMEBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x146C8860)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x146C8C70)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_1_OFFSET UNITYSDK_OFFSET(0x146C8CB0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x146C8C80)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERPAUSE_OFFSET UNITYSDK_OFFSET(0x146C8C20)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTART_OFFSET UNITYSDK_OFFSET(0x146C8C50)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x146C8C40)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOP_OFFSET UNITYSDK_OFFSET(0x146C8C30)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETAPPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x146C8C00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x146C8BC0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x146C8C10)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUPSTATICMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x146C8960)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SHOULDSKIPDESTROYONSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x146C8C60)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x146C90E0)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResource_TypeDefinitionIndex = 37268;

	class RendererResource : public ::System::Object
	{
	public:
		::UnityEngine::Material* currentMaterial; // 0x10
		::UnityEngine::Shader* shader; // 0x18
		::System::Boolean applyTargetAlpha; // 0x20
		::System::Boolean additive; // 0x21
		::System::Boolean ui; // 0x22
		::System::Boolean disposed; // 0x23
		::System::Boolean hasAlpha; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Int32 GetNumberOfFrameBeforeDestroy(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETNUMBEROFFRAMEBEFOREDESTROY_OFFSET))(this, a1);
		}

		::System::Void SetupStaticMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUPSTATICMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void GetBlendModes(::System::Int32& a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETBLENDMODES_OFFSET))(this, a1, a2);
		}

		::System::Void SetApplyTargetAlpha(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETAPPLYTARGETALPHA_OFFSET))(this, a1);
		}

		::System::Void SetUiRenderMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUIRENDERMODE_OFFSET))(this, a1);
		}

		::System::Void OnPlayerPause(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOP_OFFSET))(this);
		}

		::System::Boolean OnPlayerStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOPFORSEEK_OFFSET))(this);
		}

		::System::Void OnPlayerStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTART_OFFSET))(this);
		}

		::System::Boolean ShouldSkipDestroyOnStopForSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SHOULDSKIPDESTROYONSTOPFORSEEK_OFFSET))(this);
		}

		::System::Boolean HasRenderedNewFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_HASRENDEREDNEWFRAME_OFFSET))(this);
		}

		static ::System::UInt32 NextPowerOfTwo(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_OFFSET))(a1);
		}

		static ::System::Int32 NextPowerOfTwo_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_1_OFFSET))(a1);
		}

		static ::System::Int32 CeilingWith(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILINGWITH_OFFSET))(a1, a2);
		}

		static ::System::Int32 Ceiling16(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING16_OFFSET))(a1);
		}

		static ::System::Int32 Ceiling32(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING32_OFFSET))(a1);
		}

		static ::System::Int32 Ceiling64(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING64_OFFSET))(a1);
		}

		static ::System::Int32 Ceiling256(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING256_OFFSET))(a1);
		}

		static ::System::Void DisposeTextures(::Il2CppArray<::UnityEngine::Texture*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSETEXTURES_OFFSET))(a1);
		}

		static ::System::Void SetKeyword(::UnityEngine::Material* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETKEYWORD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWARE98318E69(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3, ::CriWare::CriMana::FrameInfo* a4, ::System::Boolean& a5)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*, ::CriWare::CriMana::FrameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE98318E69_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean CRIWARED618B369(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARED618B369_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWARE5267266A(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE5267266A_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CRIWAREE519EFD4(::System::Int32 a1, ::System::Int32 a2, ::Il2CppArray<::System::IntPtr>* a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREE519EFD4_OFFSET))(a1, a2, a3);
		}

		static ::System::SByte CRIWAREF14F77D8(::System::Int32 a1)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREF14F77D8_OFFSET))(a1);
		}
	};
}
