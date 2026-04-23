#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarOutfitSlot; }
namespace RPG::Client { class AvatarOutfitUnit; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1D2546645D1F8DBC_METHOD_1_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x12B2E7F0)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_13371A9051E4A44D_OFFSET UNITYSDK_OFFSET(0x12B2DE70)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x12B2DBE0)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_36F46336ADA62D13_OFFSET UNITYSDK_OFFSET(0x12B2E4B0)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_4CFBCEEA05F37BBF_1_OFFSET UNITYSDK_OFFSET(0x12B2DDB0)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_4CFBCEEA05F37BBF_OFFSET UNITYSDK_OFFSET(0x12B2DCF0)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_505FEEE0FDA094FE_OFFSET UNITYSDK_OFFSET(0x12B2DC30)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_57711D2DCD35C320_OFFSET UNITYSDK_OFFSET(0x12B2E1E0)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_9057F45870405C9A_OFFSET UNITYSDK_OFFSET(0x12B2E140)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x12B2DB90)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12B2DB40)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x12B2D970)
#define CLASS_1_1D2546645D1F8DBC_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x12B2E630)
#define CLASS_1_1D2546645D1F8DBC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2D9F0)

inline static constexpr unsigned int Class_1_1D2546645D1F8DBC_TypeDefinitionIndex = 57684;

class Class_1_1D2546645D1F8DBC : public ::System::Object
{
public:
	static ::Class_1_1D2546645D1F8DBC** StaticGet_Field_1_0()
	{
		return (::Class_1_1D2546645D1F8DBC**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D2546645D1F8DBC_TypeDefinitionIndex)->GetStaticField(0x4C930);
	}
	::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitSlot*>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC__CTOR_OFFSET))(this);
	}

	static ::Class_1_1D2546645D1F8DBC* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_1D2546645D1F8DBC*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfitSlot* Method_1_505FEEE0FDA094FE(::RPG::GameCore::PlayerOutfitSlotType a1)
	{
		return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_505FEEE0FDA094FE_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfitUnit* Method_1_4CFBCEEA05F37BBF(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_4CFBCEEA05F37BBF_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfitUnit* Method_1_4CFBCEEA05F37BBF_1(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_4CFBCEEA05F37BBF_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_13371A9051E4A44D(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::RPG::GameCore::AvatarBaseType a2, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::RPG::GameCore::AvatarBaseType, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_13371A9051E4A44D_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::AvatarOutfitSlot* Method_1_9057F45870405C9A(::System::Int32 a1)
	{
		return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_9057F45870405C9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_57711D2DCD35C320(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_57711D2DCD35C320_OFFSET))(this, a1);
	}

	::System::Void Method_1_36F46336ADA62D13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_36F46336ADA62D13_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_1_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2546645D1F8DBC_METHOD_1_11A5396029C33A57_OFFSET))(this);
	}
};
