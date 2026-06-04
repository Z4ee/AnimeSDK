#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePassQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F82DE5785334E8BC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18FE5E70)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_15358E418B489B5A_OFFSET UNITYSDK_OFFSET(0x18FE5690)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_489A0F77CC2C90E3_OFFSET UNITYSDK_OFFSET(0x18FE5B10)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_84A967B00AF696C3_OFFSET UNITYSDK_OFFSET(0x18FE59A0)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_87F73D8FEF257975_OFFSET UNITYSDK_OFFSET(0x18FE5EC0)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FE5CA0)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FE5D30)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FE5940)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FE5710)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FE5C60)
#define CLASS_1_F82DE5785334E8BC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FE5DD0)
#define CLASS_1_F82DE5785334E8BC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FE61E0)

inline static constexpr unsigned int Class_1_F82DE5785334E8BC_TypeDefinitionIndex = 12255;

class Class_1_F82DE5785334E8BC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82DE5785334E8BC_TypeDefinitionIndex)->GetStaticField(0x36270);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82DE5785334E8BC_TypeDefinitionIndex)->GetStaticField(0x36278);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82DE5785334E8BC_TypeDefinitionIndex)->GetStaticField(0x36280);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82DE5785334E8BC_TypeDefinitionIndex)->GetStaticField(0xACE0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F82DE5785334E8BC_TypeDefinitionIndex)->GetStaticField(0xACE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>* Method_1_15358E418B489B5A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_15358E418B489B5A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*> Method_1_84A967B00AF696C3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassQuestRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_84A967B00AF696C3_OFFSET))();
	}

	static ::RPG::GameCore::BattlePassQuestRow* Method_1_489A0F77CC2C90E3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattlePassQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_489A0F77CC2C90E3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_87F73D8FEF257975(::RPG::GameCore::BattlePassQuestRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattlePassQuestRow*))((::PBYTE)hIl2Cpp + CLASS_1_F82DE5785334E8BC_METHOD_1_87F73D8FEF257975_OFFSET))(a1);
	}
};
