#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TRIVISIONSPEED_GETTEXTURENUM_OFFSET UNITYSDK_OFFSET(0xB392DC0)
#define RPG_CLIENT_TRIVISIONSPEED_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xB392ED0)
#define RPG_CLIENT_TRIVISIONSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0xB392BF0)
#define RPG_CLIENT_TRIVISIONSPEED__CCTOR_OFFSET UNITYSDK_OFFSET(0xB393030)
#define RPG_CLIENT_TRIVISIONSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0xB393020)

namespace RPG::Client
{
	inline static constexpr unsigned int TrivisionSpeed_TypeDefinitionIndex = 65199;

	class TrivisionSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0x9E40);
		}
		static ::System::Int32* StaticGet_Field_5_14()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0x9E44);
		}
		static ::System::Int32* StaticGet_Field_5_13()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0x9E48);
		}
		::System::String* Property; // 0x18
		::UnityEngine::AnimationCurve* AnimCurve; // 0x20
		::System::Single Duration; // 0x28
		::System::Int32 TextureNum; // 0x2C
		::UnityEngine::Renderer* Field_5_4; // 0x30
		::System::Single Field_5_5; // 0x38
		::UnityEngine::MaterialPropertyBlock* Field_5_6; // 0x40
		::System::UInt32 MainTex_BoardID; // 0x48
		::System::UInt32 SecondTex_BoardID; // 0x4C
		::System::UInt32 ThirdTex_BoardID; // 0x50
		::System::Single Field_5_10; // 0x54
		::System::Int32 Field_5_11; // 0x58

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
