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

#define CLASS_1_22D5201F709611D8_METHOD_1_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x1608D360)
#define CLASS_1_22D5201F709611D8_METHOD_1_27D5CACAC9A15DC0_OFFSET UNITYSDK_OFFSET(0x1608C520)
#define CLASS_1_22D5201F709611D8_METHOD_1_6ED013A05F1FCA75_OFFSET UNITYSDK_OFFSET(0x1608CB70)
#define CLASS_1_22D5201F709611D8_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x1608C480)
#define CLASS_1_22D5201F709611D8_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1608C430)
#define CLASS_1_22D5201F709611D8_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1608C260)
#define CLASS_1_22D5201F709611D8_METHOD_1_A97853745B74DFF6_OFFSET UNITYSDK_OFFSET(0x1608CF60)
#define CLASS_1_22D5201F709611D8_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x1608C4D0)
#define CLASS_1_22D5201F709611D8_METHOD_1_C634EEB25F350F42_OFFSET UNITYSDK_OFFSET(0x1608C710)
#define CLASS_1_22D5201F709611D8_METHOD_1_CEF3711ED064EA82_OFFSET UNITYSDK_OFFSET(0x1608CC00)
#define CLASS_1_22D5201F709611D8_METHOD_1_D3EF1618D9ACBB98_1_OFFSET UNITYSDK_OFFSET(0x1608C680)
#define CLASS_1_22D5201F709611D8_METHOD_1_D3EF1618D9ACBB98_OFFSET UNITYSDK_OFFSET(0x1608C5F0)
#define CLASS_1_22D5201F709611D8_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x1608D0E0)
#define CLASS_1_22D5201F709611D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1608C2E0)

inline static constexpr unsigned int Class_1_22D5201F709611D8_TypeDefinitionIndex = 59744;

class Class_1_22D5201F709611D8 : public ::System::Object
{
public:
	static ::Class_1_22D5201F709611D8** StaticGet_Field_1_0()
	{
		return (::Class_1_22D5201F709611D8**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22D5201F709611D8_TypeDefinitionIndex)->GetStaticField(0x29E60);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitSlot*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8__CTOR_OFFSET))(this);
	}

	static ::Class_1_22D5201F709611D8* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_22D5201F709611D8*(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfitSlot* Method_1_27D5CACAC9A15DC0(::RPG::GameCore::PlayerOutfitSlotType a1)
	{
		return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_27D5CACAC9A15DC0_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfitUnit* Method_1_D3EF1618D9ACBB98(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_D3EF1618D9ACBB98_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfitUnit* Method_1_D3EF1618D9ACBB98_1(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_D3EF1618D9ACBB98_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C634EEB25F350F42(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::RPG::GameCore::AvatarBaseType a2, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::RPG::GameCore::AvatarBaseType, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_C634EEB25F350F42_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::AvatarOutfitSlot* Method_1_6ED013A05F1FCA75(::System::Int32 a1)
	{
		return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_6ED013A05F1FCA75_OFFSET))(this, a1);
	}

	::System::Void Method_1_CEF3711ED064EA82(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_CEF3711ED064EA82_OFFSET))(this, a1);
	}

	::System::Void Method_1_A97853745B74DFF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_A97853745B74DFF6_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D5201F709611D8_METHOD_1_106289055FB804CE_OFFSET))(this);
	}
};
