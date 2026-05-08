#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/AvatarTextureSheetBehaviour_Enum_3_03DEE6BF97765F9B.h"
#include "unitysdk/MoleMole/Timeline/AvatarTextureSheetBehaviour_Enum_3_F7550C98AAE7B3BA.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_927FD65E44A20102;
class Class_1_A02EEEDBDD11A4F9;
class Class_2_208CC9941471731A_321;
namespace MoleMole::Timeline { class TextureSheetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x13EC2FB0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x13EC0F90)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_6103E5D7CF046E3B_OFFSET UNITYSDK_OFFSET(0x13EC1500)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_61C8F16B1C785762_OFFSET UNITYSDK_OFFSET(0x13EC0FA0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x13EC1A60)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_66655BFAAD3D9E8B_OFFSET UNITYSDK_OFFSET(0x13EC2B10)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_1_OFFSET UNITYSDK_OFFSET(0x13EC1740)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x13EC1260)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x13EC19E0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x13EC28E0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x13EC1CC0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x13EC1DA0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x13EC3090)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13EC1D60)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13EC1D20)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x13EC1670)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x13EC16D0)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13EC0440)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EC0E60)
#define MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC0D50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int AvatarTextureSheetBehaviour_TypeDefinitionIndex = 52006;

	class AvatarTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2E920);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::AvatarTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2E928);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x2E930);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::String* sharedMaterialPath; // 0x20
		::System::Boolean IsFixframe; // 0x28
		::MoleMole::Timeline::AvatarTextureSheetBehaviour_Enum_3_03DEE6BF97765F9B displayEnum; // 0x2C
		::MoleMole::Timeline::AvatarTextureSheetBehaviour_Enum_3_F7550C98AAE7B3BA configEnum; // 0x30
		::System::String* videoPath; // 0x38
		::System::Boolean videoLoop; // 0x40
		::System::Int32 sheetTemplateID; // 0x44
		::UnityEngine::Texture2D* screenMapTexture; // 0x48
		::MoleMole::Timeline::TextureSheetConfig* textureSheetConfig; // 0x50
		::Class_1_927FD65E44A20102* textureSheetAnimation; // 0x58
		::Class_1_A02EEEDBDD11A4F9* moviePlayer; // 0x60
		::Class_2_208CC9941471731A_321* templateConfig; // 0x68
		::System::Boolean isPlaying; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* originalSharedMatMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* editorSharedMatMap; // 0x80
		::System::Single currentPlayTime; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_61C8F16B1C785762(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_61C8F16B1C785762_OFFSET))(this, a1);
		}

		::System::Void Method_2_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_2_6103E5D7CF046E3B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_6103E5D7CF046E3B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_66F42CE2EDA79734_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_1_OFFSET))(this);
		}

		::System::Void Method_2_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_775B6D644F07B554_OFFSET))(this);
		}

		::System::Void Method_2_64F3965CE4C4DB47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_A5809AB80389F7DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
		}

		::System::Boolean Method_2_9809C99861C91775()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_9809C99861C91775_OFFSET))(this);
		}

		::System::Void Method_2_66655BFAAD3D9E8B(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_66655BFAAD3D9E8B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_2_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
		}

		::System::Void Method_2_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_2_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_2_F620DD2FD48DDF53(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_F620DD2FD48DDF53_OFFSET))(this, a1);
		}

		::System::Void Method_2_C8E2469222842786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_AVATARTEXTURESHEETBEHAVIOUR_METHOD_2_C8E2469222842786_OFFSET))(this);
		}
	};
}
