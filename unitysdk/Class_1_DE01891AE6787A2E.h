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

#define CLASS_1_DE01891AE6787A2E_METHOD_1_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0xBF33FA0)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_27D5CACAC9A15DC0_OFFSET UNITYSDK_OFFSET(0xBF33320)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_6ED013A05F1FCA75_OFFSET UNITYSDK_OFFSET(0xBF337F0)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_809C6C9D6040A2E9_OFFSET UNITYSDK_OFFSET(0xBF33880)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xBF33280)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBF33230)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xBF33060)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_A97853745B74DFF6_OFFSET UNITYSDK_OFFSET(0xBF33BA0)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0xBF332D0)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_D3EF1618D9ACBB98_1_OFFSET UNITYSDK_OFFSET(0xBF33480)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_D3EF1618D9ACBB98_OFFSET UNITYSDK_OFFSET(0xBF333F0)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xBF33D20)
#define CLASS_1_DE01891AE6787A2E_METHOD_1_F8323709469D2E54_OFFSET UNITYSDK_OFFSET(0xBF33510)
#define CLASS_1_DE01891AE6787A2E__CTOR_OFFSET UNITYSDK_OFFSET(0xBF330E0)

inline static constexpr unsigned int Class_1_DE01891AE6787A2E_TypeDefinitionIndex = 58474;

class Class_1_DE01891AE6787A2E : public ::System::Object
{
public:
	static ::Class_1_DE01891AE6787A2E** StaticGet_Field_1_0()
	{
		return (::Class_1_DE01891AE6787A2E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE01891AE6787A2E_TypeDefinitionIndex)->GetStaticField(0x25370);
	}
	::System::Collections::Generic::List_1<::RPG::Client::AvatarOutfitSlot*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarOutfitUnit*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E__CTOR_OFFSET))(this);
	}

	static ::Class_1_DE01891AE6787A2E* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_DE01891AE6787A2E*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::RPG::Client::AvatarOutfitSlot* Method_1_27D5CACAC9A15DC0(::RPG::GameCore::PlayerOutfitSlotType a1)
	{
		return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::RPG::GameCore::PlayerOutfitSlotType))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_27D5CACAC9A15DC0_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfitUnit* Method_1_D3EF1618D9ACBB98(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_D3EF1618D9ACBB98_OFFSET))(this, a1);
	}

	::RPG::Client::AvatarOutfitUnit* Method_1_D3EF1618D9ACBB98_1(::System::UInt32 a1)
	{
		return ((::RPG::Client::AvatarOutfitUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_D3EF1618D9ACBB98_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8323709469D2E54(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1, ::RPG::GameCore::AvatarBaseType a2, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*, ::RPG::GameCore::AvatarBaseType, ::System::Collections::Generic::ICollection_1<::RPG::GameCore::PlayerOutfitSlotType>*))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_F8323709469D2E54_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::AvatarOutfitSlot* Method_1_6ED013A05F1FCA75(::System::Int32 a1)
	{
		return ((::RPG::Client::AvatarOutfitSlot*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_6ED013A05F1FCA75_OFFSET))(this, a1);
	}

	::System::Void Method_1_809C6C9D6040A2E9(::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::AvatarOutfitUnit*>*))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_809C6C9D6040A2E9_OFFSET))(this, a1);
	}

	::System::Void Method_1_A97853745B74DFF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_A97853745B74DFF6_OFFSET))(this);
	}

	::System::Void Method_1_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Void Method_1_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE01891AE6787A2E_METHOD_1_106289055FB804CE_OFFSET))(this);
	}
};
