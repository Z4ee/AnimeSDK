#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_TRIVISIONSPEED_GETTEXTURENUM_OFFSET UNITYSDK_OFFSET(0x16FCA670)
#define RPG_CLIENT_TRIVISIONSPEED_METHOD_5_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x16FCA780)
#define RPG_CLIENT_TRIVISIONSPEED_UPDATE_OFFSET UNITYSDK_OFFSET(0x16FCA4A0)
#define RPG_CLIENT_TRIVISIONSPEED__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FCA8E0)
#define RPG_CLIENT_TRIVISIONSPEED__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCA8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrivisionSpeed_TypeDefinitionIndex = 67551;

	class TrivisionSpeed : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0xCE90);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0xCE94);
		}
		static ::System::Int32* StaticGet_Field_5_2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrivisionSpeed_TypeDefinitionIndex)->GetStaticField(0xCE98);
		}
		::System::String* Property; // 0x18
		::UnityEngine::AnimationCurve* AnimCurve; // 0x20
		::System::Single Duration; // 0x28
		::System::Int32 TextureNum; // 0x2C
		::UnityEngine::Renderer* Field_5_7; // 0x30
		::System::Single Field_5_8; // 0x38
		::UnityEngine::MaterialPropertyBlock* Field_5_9; // 0x40
		::System::UInt32 MainTex_BoardID; // 0x48
		::System::UInt32 SecondTex_BoardID; // 0x4C
		::System::UInt32 ThirdTex_BoardID; // 0x50
		::System::Single Field_5_13; // 0x54
		::System::Int32 Field_5_14; // 0x58

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
