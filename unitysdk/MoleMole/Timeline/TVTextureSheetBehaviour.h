#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/TVTextureSheetBehaviour_DisplayEnum.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_927FD65E44A20102;
class Class_1_A02EEEDBDD11A4F9;
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x129E8AA0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x129E7870)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_6103E5D7CF046E3B_OFFSET UNITYSDK_OFFSET(0x129E7700)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_61C8F16B1C785762_OFFSET UNITYSDK_OFFSET(0x129E6BA0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_64F3965CE4C4DB47_OFFSET UNITYSDK_OFFSET(0x129E7440)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_1_OFFSET UNITYSDK_OFFSET(0x129E71A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x129E6F00)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_72FA871F5E2338FD_OFFSET UNITYSDK_OFFSET(0x129E6900)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x129E6460)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_9809C99861C91775_OFFSET UNITYSDK_OFFSET(0x129E78C0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x129E76A0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_A55F5DA7926B63BB_OFFSET UNITYSDK_OFFSET(0x129E6540)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x129E7B30)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_B44142C8BED75D98_OFFSET UNITYSDK_OFFSET(0x129E8670)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x129E6E60)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x129E7AF0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x129E7880)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x129E64E0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F620DD2FD48DDF53_OFFSET UNITYSDK_OFFSET(0x129E6B30)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x129E5AD0)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x129E6230)
#define MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x129E6220)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TVTextureSheetBehaviour_TypeDefinitionIndex = 59944;

	class TVTextureSheetBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_originalSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x50F50);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>** StaticGet_moviePlayerMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x50F58);
		}
		static ::System::String** StaticGet_TvIconTextureSheetRoot()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x50F60);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>** StaticGet_editorSharedMatMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x50F68);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>** StaticGet_textureSheetMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Timeline::TVTextureSheetBehaviour*>*>**)Il2CppClass::FromTypeDefinitionIndex(TVTextureSheetBehaviour_TypeDefinitionIndex)->GetStaticField(0x50F70);
		}
		::UnityEngine::Timeline::TimelineClip* Clip; // 0x10
		::UnityEngine::Renderer* renderer; // 0x18
		::System::Int32 materialIndex; // 0x20
		::System::String* sharedMaterialPath; // 0x28
		::MoleMole::Timeline::TVTextureSheetBehaviour_DisplayEnum displayEnum; // 0x30
		::System::Boolean IsFixframe; // 0x34
		::System::String* videoPath; // 0x38
		::System::Boolean videoLoop; // 0x40
		::System::String* textureSheetKey; // 0x48
		::Class_1_927FD65E44A20102* textureSheetAnimation; // 0x50
		::Class_1_A02EEEDBDD11A4F9* moviePlayer; // 0x58
		::MoleMole::TextureSheetData* templateConfig; // 0x60
		::System::Boolean isPlaying; // 0x68
		::System::Single currentPlayTime; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_2_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_775B6D644F07B554_OFFSET))(this);
		}

		::System::Collections::IEnumerable* Method_2_A55F5DA7926B63BB()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_A55F5DA7926B63BB_OFFSET))(this);
		}

		::UnityEngine::Material* Method_2_72FA871F5E2338FD()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_72FA871F5E2338FD_OFFSET))(this);
		}

		::System::Void Method_2_F620DD2FD48DDF53(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F620DD2FD48DDF53_OFFSET))(this, a1);
		}

		::System::Void Method_2_C8E2469222842786()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_C8E2469222842786_OFFSET))(this);
		}

		::System::Void Method_2_66F42CE2EDA79734()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
		}

		::System::Void Method_2_66F42CE2EDA79734_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_66F42CE2EDA79734_1_OFFSET))(this);
		}

		::System::Boolean Method_2_61C8F16B1C785762(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_61C8F16B1C785762_OFFSET))(this, a1);
		}

		::System::Void Method_2_64F3965CE4C4DB47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_64F3965CE4C4DB47_OFFSET))(this);
		}

		::System::Void Method_2_6103E5D7CF046E3B(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_6103E5D7CF046E3B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_2_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean Method_2_9809C99861C91775()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_9809C99861C91775_OFFSET))(this);
		}

		::System::Void Method_2_A5809AB80389F7DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_A5809AB80389F7DE_OFFSET))(this);
		}

		::System::Void Method_2_B44142C8BED75D98(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_B44142C8BED75D98_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_24B05D2E15A5C3C8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TVTEXTURESHEETBEHAVIOUR_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
		}
	};
}
