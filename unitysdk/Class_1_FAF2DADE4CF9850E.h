#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveTeamSlotTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CA4DED0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_5AC2CB47314BCD36_OFFSET UNITYSDK_OFFSET(0x1CA4D970)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CA14360)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_A890493D933CB26A_OFFSET UNITYSDK_OFFSET(0x1CA4DBC0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CA4DD90)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_BC041042E4760C1A_OFFSET UNITYSDK_OFFSET(0x1CA4DF20)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_BCEAA30282D8E21F_OFFSET UNITYSDK_OFFSET(0x1CA4DA50)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CA4D9F0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C9930B0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CA4DD50)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CA4DE30)
#define CLASS_1_FAF2DADE4CF9850E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA4E290)

inline static constexpr unsigned int Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex = 11702;

class Class_1_FAF2DADE4CF9850E : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x39430);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x39438);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x39440);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0xE820);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0xE821);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>* Method_1_5AC2CB47314BCD36()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_5AC2CB47314BCD36_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*> Method_1_BCEAA30282D8E21F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_BCEAA30282D8E21F_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveTeamSlotTypeRow* Method_1_A890493D933CB26A(::RPG::GameCore::ILBattleCharacterLocation a1)
	{
		return ((::RPG::GameCore::IdleLiveTeamSlotTypeRow*(*)(::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_A890493D933CB26A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BC041042E4760C1A(::RPG::GameCore::IdleLiveTeamSlotTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_BC041042E4760C1A_OFFSET))(a1);
	}
};
