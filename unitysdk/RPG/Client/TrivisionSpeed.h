#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TRIVISIONSPEED_GETTEXTURENUM_OFFSET UNITYSDK_OFFSET(0xE2F3040)
#define RPG_CLIENT_TRIVISIONSPEED_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xE2F3150)
#define RPG_CLIENT_TRIVISIONSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0xE2F2E70)
#define RPG_CLIENT_TRIVISIONSPEED__CCTOR_OFFSET UNITYSDK_OFFSET(0xE2F32B0)
#define RPG_CLIENT_TRIVISIONSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0xE2F32A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrivisionSpeed_TypeDefinitionIndex = 70674;

	class TrivisionSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_FNGOBPOJMMD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0x136F0);
		}
		static ::System::Int32* StaticGet_DJJLMOOBPLP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0x136F4);
		}
		static ::System::Int32* StaticGet_BIKDJFJELDN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0x136F8);
		}
		::System::String* Property; // 0x18
		::UnityEngine::AnimationCurve* AnimCurve; // 0x20
		::System::Single Duration; // 0x28
		::System::Int32 TextureNum; // 0x2C
		::UnityEngine::Renderer* OJAHLJGABMJ; // 0x30
		::System::Single HIIIDLPCOHK; // 0x38
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x40
		::System::UInt32 MainTex_BoardID; // 0x48
		::System::UInt32 SecondTex_BoardID; // 0x4C
		::System::UInt32 ThirdTex_BoardID; // 0x50
		::System::Single PGMIOKKLHIE; // 0x54
		::System::Int32 EFHJOCLFEFD; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetTextureNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_GETTEXTURENUM_OFFSET))(this);
		}

		::System::Void Method_5_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRIVISIONSPEED_METHOD_5_775B6D644F07B554_OFFSET))(this);
		}
	};
}
