#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComponentAssetSkinType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINNAME_OFFSET UNITYSDK_OFFSET(0xCC5FF30)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINPATH_OFFSET UNITYSDK_OFFSET(0xCC5FF40)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_GET_SKINRESMAP_OFFSET UNITYSDK_OFFSET(0xCC5EB80)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_METHOD_1_4E6219BD0A8026FA_OFFSET UNITYSDK_OFFSET(0xCC5CFE0)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xCC5FB40)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xCC5FBD0)
#define RPG_CLIENT_COMPONENTASSETSKINITEM_SET_CURRENTSKINNAME_OFFSET UNITYSDK_OFFSET(0xCC5CEC0)
#define RPG_CLIENT_COMPONENTASSETSKINITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCC60020)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentAssetSkinItem_TypeDefinitionIndex = 68369;

	class ComponentAssetSkinItem : public ::System::Object
	{
	public:
		// static const ::System::String* EmptySkinName; // 0x0
		// static const ::System::String* CustomSkinName; // 0x0
		::RPG::Client::ComponentAssetSkinType SkinType; // 0x10
		::System::String* Filter; // 0x18
		::System::String* DefaultSkinName; // 0x20
		::System::String* _CurrentSkinName; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _SkinResMap; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_6929C20FCC70C1A3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
		}

		::System::Void Method_1_4E6219BD0A8026FA(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_METHOD_1_4E6219BD0A8026FA_OFFSET))(this, a1);
		}

		::System::Void Method_1_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_METHOD_1_EC2B405D0723571D_OFFSET))(this);
		}

		::System::String* get_CurrentSkinName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINNAME_OFFSET))(this);
		}

		::System::Void set_CurrentSkinName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_SET_CURRENTSKINNAME_OFFSET))(this, a1);
		}

		::System::String* get_CurrentSkinPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GET_CURRENTSKINPATH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_SkinResMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTASSETSKINITEM_GET_SKINRESMAP_OFFSET))(this);
		}
	};
}
