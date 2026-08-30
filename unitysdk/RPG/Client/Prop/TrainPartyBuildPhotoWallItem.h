#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CLEARIMAGE_OFFSET UNITYSDK_OFFSET(0xDD412A0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDD41040)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD40FC0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_SHOWIMAGE_OFFSET UNITYSDK_OFFSET(0xDD410A0)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD41400)
#define RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xDD413F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TrainPartyBuildPhotoWallItem_TypeDefinitionIndex = 77712;

	class TrainPartyBuildPhotoWallItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_DBLJMLMIIIL()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TrainPartyBuildPhotoWallItem_TypeDefinitionIndex)->GetStaticField(0x15050);
		}
		::UnityEngine::Renderer* ImageRenderer; // 0x18
		::UnityEngine::Texture* CECNGLFHAPO; // 0x20
		::System::String* BMDOOFPLCID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM__CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean ShowImage(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_SHOWIMAGE_OFFSET))(this, a1);
		}

		::System::Void ClearImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_CLEARIMAGE_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TRAINPARTYBUILDPHOTOWALLITEM_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
