#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePassWeekConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9785F050F77534F8_METHOD_1_0210262C7004D57D_OFFSET UNITYSDK_OFFSET(0x1CD11110)
#define CLASS_1_9785F050F77534F8_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CD11470)
#define CLASS_1_9785F050F77534F8_METHOD_1_170A55E2BB32E9CA_OFFSET UNITYSDK_OFFSET(0x1CD10C90)
#define CLASS_1_9785F050F77534F8_METHOD_1_319BDBD5AEBA1753_OFFSET UNITYSDK_OFFSET(0x1CD10FA0)
#define CLASS_1_9785F050F77534F8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD112A0)
#define CLASS_1_9785F050F77534F8_METHOD_1_9D90EF0477E2326F_OFFSET UNITYSDK_OFFSET(0x1CD114C0)
#define CLASS_1_9785F050F77534F8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD11330)
#define CLASS_1_9785F050F77534F8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD10F40)
#define CLASS_1_9785F050F77534F8_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD10D10)
#define CLASS_1_9785F050F77534F8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD11260)
#define CLASS_1_9785F050F77534F8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD113D0)
#define CLASS_1_9785F050F77534F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD117E0)

inline static constexpr unsigned int Class_1_9785F050F77534F8_TypeDefinitionIndex = 12782;

class Class_1_9785F050F77534F8 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9785F050F77534F8_TypeDefinitionIndex)->GetStaticField(0x43CD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9785F050F77534F8_TypeDefinitionIndex)->GetStaticField(0x43CD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9785F050F77534F8_TypeDefinitionIndex)->GetStaticField(0x43CE0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9785F050F77534F8_TypeDefinitionIndex)->GetStaticField(0x10030);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9785F050F77534F8_TypeDefinitionIndex)->GetStaticField(0x10031);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>* Method_1_170A55E2BB32E9CA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_170A55E2BB32E9CA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*> Method_1_319BDBD5AEBA1753()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattlePassWeekConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_319BDBD5AEBA1753_OFFSET))();
	}

	static ::RPG::GameCore::BattlePassWeekConfigRow* Method_1_0210262C7004D57D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::BattlePassWeekConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_0210262C7004D57D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D90EF0477E2326F(::RPG::GameCore::BattlePassWeekConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattlePassWeekConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9785F050F77534F8_METHOD_1_9D90EF0477E2326F_OFFSET))(a1);
	}
};
