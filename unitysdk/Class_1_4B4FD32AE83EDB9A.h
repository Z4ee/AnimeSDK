#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILBattleStageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19002BE0)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_6DF29D654F1A3D13_OFFSET UNITYSDK_OFFSET(0x190026D0)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19002A10)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19002AA0)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_B69282457BEBF932_OFFSET UNITYSDK_OFFSET(0x190023C0)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_BCA94D0E87ADA43E_OFFSET UNITYSDK_OFFSET(0x19002C30)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19002670)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_DC9B25E45B8040CB_OFFSET UNITYSDK_OFFSET(0x19002840)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19002440)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x190029D0)
#define CLASS_1_4B4FD32AE83EDB9A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19002B40)
#define CLASS_1_4B4FD32AE83EDB9A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19002FA0)

inline static constexpr unsigned int Class_1_4B4FD32AE83EDB9A_TypeDefinitionIndex = 13152;

class Class_1_4B4FD32AE83EDB9A : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4FD32AE83EDB9A_TypeDefinitionIndex)->GetStaticField(0x374F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4FD32AE83EDB9A_TypeDefinitionIndex)->GetStaticField(0x374F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4FD32AE83EDB9A_TypeDefinitionIndex)->GetStaticField(0x37500);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4FD32AE83EDB9A_TypeDefinitionIndex)->GetStaticField(0xB170);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4B4FD32AE83EDB9A_TypeDefinitionIndex)->GetStaticField(0xB171);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>* Method_1_B69282457BEBF932()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_B69282457BEBF932_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*> Method_1_6DF29D654F1A3D13()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleStageConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_6DF29D654F1A3D13_OFFSET))();
	}

	static ::RPG::GameCore::ILBattleStageConfigRow* Method_1_DC9B25E45B8040CB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ILBattleStageConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_DC9B25E45B8040CB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCA94D0E87ADA43E(::RPG::GameCore::ILBattleStageConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILBattleStageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4B4FD32AE83EDB9A_METHOD_1_BCA94D0E87ADA43E_OFFSET))(a1);
	}
};
