#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1031;
class Class_1_849EE5CF9026AE9F;
class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client { class MonoDanmuItem; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONODANMUSPAWNER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD74B330)
#define RPG_CLIENT_MONODANMUSPAWNER_DESPAWN_OFFSET UNITYSDK_OFFSET(0xD749D20)
#define RPG_CLIENT_MONODANMUSPAWNER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD74B670)
#define RPG_CLIENT_MONODANMUSPAWNER_GET_GIFTROOTRECT_OFFSET UNITYSDK_OFFSET(0xD74A780)
#define RPG_CLIENT_MONODANMUSPAWNER_GET_IMAGEROOTRECT_OFFSET UNITYSDK_OFFSET(0xD74A710)
#define RPG_CLIENT_MONODANMUSPAWNER_GET_TEXTROOTRECT_OFFSET UNITYSDK_OFFSET(0xD74A6A0)
#define RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_2CEAC11AEBDD3C75_OFFSET UNITYSDK_OFFSET(0xD74B6D0)
#define RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_422422BBCBC8068C_OFFSET UNITYSDK_OFFSET(0xD74B600)
#define RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD74B380)
#define RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_702463A421B5F338_OFFSET UNITYSDK_OFFSET(0xD74B7A0)
#define RPG_CLIENT_MONODANMUSPAWNER_SPAWN_OFFSET UNITYSDK_OFFSET(0xD74B400)
#define RPG_CLIENT_MONODANMUSPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0xD74B850)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDanmuSpawner_TypeDefinitionIndex = 68914;

	class MonoDanmuSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _TextDanmuPrefabPath; // 0x18
		::System::String* _ImageDanmuPrefabPath; // 0x20
		::System::String* _GiftDanmuPrefabPath; // 0x28
		::UnityEngine::Transform* _TextRoot; // 0x30
		::UnityEngine::Transform* _ImageRoot; // 0x38
		::UnityEngine::Transform* _GiftRoot; // 0x40
		::Class_1_B18A907A8E4C5C9C* HGIHOOECGEE; // 0x48
		::System::Boolean EMHAACACFOM; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_TextRootRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_GET_TEXTROOTRECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ImageRootRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_GET_IMAGEROOTRECT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_GiftRootRect()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_GET_GIFTROOTRECT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_AWAKE_OFFSET))(this);
		}

		::RPG::Client::MonoDanmuItem* Spawn(::Class_1_849EE5CF9026AE9F* a1, ::System::Single a2)
		{
			return ((::RPG::Client::MonoDanmuItem*(*)(::PVOID, ::Class_1_849EE5CF9026AE9F*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_SPAWN_OFFSET))(this, a1, a2);
		}

		::System::Void Despawn(::RPG::Client::MonoDanmuItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoDanmuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_DESPAWN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_DISPOSE_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1031* Method_5_2CEAC11AEBDD3C75(::RPG::GameCore::DanmuType a1)
		{
			return ((::Class_0_16E4307DCC419505_1031*(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_2CEAC11AEBDD3C75_OFFSET))(this, a1);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_5_702463A421B5F338(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_702463A421B5F338_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_422422BBCBC8068C(::RPG::GameCore::DanmuType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODANMUSPAWNER_METHOD_5_422422BBCBC8068C_OFFSET))(this, a1);
		}
	};
}
