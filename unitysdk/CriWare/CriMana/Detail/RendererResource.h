#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare::CriMana { class FrameInfo; }
namespace CriWare::CriMana { class MovieInfo; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class Texture; }

#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING16_OFFSET UNITYSDK_OFFSET(0x1F6759F0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING256_OFFSET UNITYSDK_OFFSET(0x1F675A20)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING32_OFFSET UNITYSDK_OFFSET(0x1F675A00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING64_OFFSET UNITYSDK_OFFSET(0x1F675A10)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILINGWITH_OFFSET UNITYSDK_OFFSET(0x1F6759E0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE0FCB001A_OFFSET UNITYSDK_OFFSET(0x1F675C80)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE384BDD92_OFFSET UNITYSDK_OFFSET(0x1F675F00)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE6FD7C151_OFFSET UNITYSDK_OFFSET(0x1F675430)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREB54A7904_OFFSET UNITYSDK_OFFSET(0x1F675E70)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREDE9CC21F_OFFSET UNITYSDK_OFFSET(0x1F675DE0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSETEXTURES_OFFSET UNITYSDK_OFFSET(0x1F675A30)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F6752C0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6752F0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F675250)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETBLENDMODES_OFFSET UNITYSDK_OFFSET(0x1F675880)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETDISPLAYEDFRAMENO_OFFSET UNITYSDK_OFFSET(0x1F675970)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETNUMBEROFFRAMEBEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1F6753B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_HASRENDEREDNEWFRAME_OFFSET UNITYSDK_OFFSET(0x1F675960)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_1_OFFSET UNITYSDK_OFFSET(0x1F6759B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_OFFSET UNITYSDK_OFFSET(0x1F675980)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERPAUSE_OFFSET UNITYSDK_OFFSET(0x1F675910)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTART_OFFSET UNITYSDK_OFFSET(0x1F675940)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x1F675930)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERSTOP_OFFSET UNITYSDK_OFFSET(0x1F675920)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETAPPLYTARGETALPHA_OFFSET UNITYSDK_OFFSET(0x1F6758F0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETKEYWORD_OFFSET UNITYSDK_OFFSET(0x1F6758B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUIRENDERMODE_OFFSET UNITYSDK_OFFSET(0x1F675900)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUPSTATICMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F6754B0)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SHOULDSKIPDESTROYONSTOPFORSEEK_OFFSET UNITYSDK_OFFSET(0x1F675950)
#define CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F675F90)

namespace CriWare::CriMana::Detail
{
	inline static constexpr unsigned int RendererResource_TypeDefinitionIndex = 35072;

	class RendererResource : public ::System::Object
	{
	public:
		::UnityEngine::Shader* shader; // 0x10
		::UnityEngine::Material* currentMaterial; // 0x18
		::System::Boolean applyTargetAlpha; // 0x20
		::System::Boolean additive; // 0x21
		::System::Boolean hasAlpha; // 0x22
		::System::Boolean ui; // 0x23
		::System::Boolean disposed; // 0x24

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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Int32 GetNumberOfFrameBeforeDestroy(::System::Int32 playerId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETNUMBEROFFRAMEBEFOREDESTROY_OFFSET))(this, playerId);
		}

		::System::Void SetupStaticMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUPSTATICMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void GetBlendModes(::System::Int32& srcBlendMode, ::System::Int32& dstBlendMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETBLENDMODES_OFFSET))(this, srcBlendMode, dstBlendMode);
		}

		::System::Void SetApplyTargetAlpha(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETAPPLYTARGETALPHA_OFFSET))(this, flag);
		}

		::System::Void SetUiRenderMode(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETUIRENDERMODE_OFFSET))(this, flag);
		}

		::System::Void OnPlayerPause(::System::Boolean pauseStatus, ::System::Boolean triggredFromApplciationPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_ONPLAYERPAUSE_OFFSET))(this, pauseStatus, triggredFromApplciationPause);
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

		::System::Int32 GetDisplayedFrameNo()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_GETDISPLAYEDFRAMENO_OFFSET))(this);
		}

		static ::System::UInt32 NextPowerOfTwo(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_OFFSET))(x);
		}

		static ::System::Int32 NextPowerOfTwo_1(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_NEXTPOWEROFTWO_1_OFFSET))(x);
		}

		static ::System::Int32 CeilingWith(::System::Int32 x, ::System::Int32 ceilingValue)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILINGWITH_OFFSET))(x, ceilingValue);
		}

		static ::System::Int32 Ceiling16(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING16_OFFSET))(x);
		}

		static ::System::Int32 Ceiling32(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING32_OFFSET))(x);
		}

		static ::System::Int32 Ceiling64(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING64_OFFSET))(x);
		}

		static ::System::Int32 Ceiling256(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CEILING256_OFFSET))(x);
		}

		static ::System::Void DisposeTextures(::Il2CppArray<::UnityEngine::Texture*>* textures)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Texture*>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_DISPOSETEXTURES_OFFSET))(textures);
		}

		static ::System::Void SetKeyword(::UnityEngine::Material* material, ::System::String* keyword, ::System::Boolean flag)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_SETKEYWORD_OFFSET))(material, keyword, flag);
		}

		static ::System::Boolean CRIWARE0FCB001A(::System::Int32 player_id, ::System::Int32 num_textures, ::Il2CppArray<::System::IntPtr>* tex_ptrs, ::CriWare::CriMana::FrameInfo* frame_info, ::System::Boolean& frame_drop)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*, ::CriWare::CriMana::FrameInfo*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE0FCB001A_OFFSET))(player_id, num_textures, tex_ptrs, frame_info, frame_drop);
		}

		static ::System::Boolean CRIWAREDE9CC21F(::System::Int32 player_id, ::System::Int32 num_textures, ::Il2CppArray<::System::IntPtr>* tex_ptrs)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREDE9CC21F_OFFSET))(player_id, num_textures, tex_ptrs);
		}

		static ::System::Boolean CRIWAREB54A7904(::System::Int32 player_id, ::System::Int32 num_textures, ::Il2CppArray<::System::IntPtr>* tex_ptrs)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWAREB54A7904_OFFSET))(player_id, num_textures, tex_ptrs);
		}

		static ::System::Boolean CRIWARE384BDD92(::System::Int32 player_id, ::System::Int32 num_textures, ::Il2CppArray<::System::IntPtr>* tex_ptrs)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::IntPtr>*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE384BDD92_OFFSET))(player_id, num_textures, tex_ptrs);
		}

		static ::System::SByte CRIWARE6FD7C151(::System::Int32 player_id)
		{
			return ((::System::SByte(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_DETAIL_RENDERERRESOURCE_CRIWARE6FD7C151_OFFSET))(player_id);
		}
	};
}
