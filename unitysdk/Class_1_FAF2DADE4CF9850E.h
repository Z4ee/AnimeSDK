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

#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18249E10)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18249C30)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_53F739973877FABD_OFFSET UNITYSDK_OFFSET(0x18249A20)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_5AC2CB47314BCD36_OFFSET UNITYSDK_OFFSET(0x18249540)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182495C0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_6C8D71A56857CE7B_OFFSET UNITYSDK_OFFSET(0x18249870)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18249CD0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_BC041042E4760C1A_OFFSET UNITYSDK_OFFSET(0x18249E60)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18249810)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18249BF0)
#define CLASS_1_FAF2DADE4CF9850E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18249D70)
#define CLASS_1_FAF2DADE4CF9850E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1824A1C0)

inline static constexpr unsigned int Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex = 11165;

class Class_1_FAF2DADE4CF9850E : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x24370);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x24378);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x24380);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x96A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FAF2DADE4CF9850E_TypeDefinitionIndex)->GetStaticField(0x96A1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*> Method_1_6C8D71A56857CE7B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_6C8D71A56857CE7B_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveTeamSlotTypeRow* Method_1_53F739973877FABD(::RPG::GameCore::ILBattleCharacterLocation a1)
	{
		return ((::RPG::GameCore::IdleLiveTeamSlotTypeRow*(*)(::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_53F739973877FABD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FAF2DADE4CF9850E_METHOD_1_30D1209326FA87FC_OFFSET))();
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
