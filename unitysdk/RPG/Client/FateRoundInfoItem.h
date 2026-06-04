#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRoundType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATEROUNDINFOITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB9ADC90)
#define RPG_CLIENT_FATEROUNDINFOITEM_GET_NUMTEXT_OFFSET UNITYSDK_OFFSET(0xB9ADB60)
#define RPG_CLIENT_FATEROUNDINFOITEM_GET_ROUNDINDEX_OFFSET UNITYSDK_OFFSET(0xB9ADA70)
#define RPG_CLIENT_FATEROUNDINFOITEM_GET_ROUNDTYPETEXT_OFFSET UNITYSDK_OFFSET(0xB9ADA90)
#define RPG_CLIENT_FATEROUNDINFOITEM_GET_ROUNDTYPE_OFFSET UNITYSDK_OFFSET(0xB9ADA80)
#define RPG_CLIENT_FATEROUNDINFOITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xB9ADD30)
#define RPG_CLIENT_FATEROUNDINFOITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9ADA60)

namespace RPG::Client
{
	inline static constexpr unsigned int FateRoundInfoItem_TypeDefinitionIndex = 59911;

	class FateRoundInfoItem : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRoundType, ::RPG::Client::TextID>** StaticGet__RoundType2Text()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRoundType, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(FateRoundInfoItem_TypeDefinitionIndex)->GetStaticField(0x18D00);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>** StaticGet__Index2NumText()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(FateRoundInfoItem_TypeDefinitionIndex)->GetStaticField(0x18D08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRoundType, ::System::String*>** StaticGet__RoundType2Icon()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRoundType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FateRoundInfoItem_TypeDefinitionIndex)->GetStaticField(0x18D10);
		}
		::RPG::GameCore::FateRoundType _RoundType; // 0x10
		::System::UInt32 _RoundIndex; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::FateRoundType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FateRoundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM__CCTOR_OFFSET))();
		}

		::System::UInt32 get_RoundIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM_GET_ROUNDINDEX_OFFSET))(this);
		}

		::RPG::GameCore::FateRoundType get_RoundType()
		{
			return ((::RPG::GameCore::FateRoundType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM_GET_ROUNDTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_RoundTypeText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM_GET_ROUNDTYPETEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_NumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM_GET_NUMTEXT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEROUNDINFOITEM_GET_ICONPATH_OFFSET))(this);
		}
	};
}
