#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantFarmConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18B830B0)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_20B507B6608BF5F8_OFFSET UNITYSDK_OFFSET(0x18B82B90)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18B82ED0)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_5615F78C17E23F77_OFFSET UNITYSDK_OFFSET(0x18B83100)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18B828E0)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18B82F70)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18B82B30)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_E6E88070B88DDA19_OFFSET UNITYSDK_OFFSET(0x18B82D10)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18B82E90)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18B83010)
#define CLASS_1_1B26507F2EFBFD0A_METHOD_1_FDB6AE88FCE30DB2_OFFSET UNITYSDK_OFFSET(0x18B82860)
#define CLASS_1_1B26507F2EFBFD0A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B83410)

inline static constexpr unsigned int Class_1_1B26507F2EFBFD0A_TypeDefinitionIndex = 10878;

class Class_1_1B26507F2EFBFD0A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B26507F2EFBFD0A_TypeDefinitionIndex)->GetStaticField(0x228F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B26507F2EFBFD0A_TypeDefinitionIndex)->GetStaticField(0x228F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B26507F2EFBFD0A_TypeDefinitionIndex)->GetStaticField(0x22900);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B26507F2EFBFD0A_TypeDefinitionIndex)->GetStaticField(0x8BA0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1B26507F2EFBFD0A_TypeDefinitionIndex)->GetStaticField(0x8BA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>* Method_1_FDB6AE88FCE30DB2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_FDB6AE88FCE30DB2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*> Method_1_20B507B6608BF5F8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantFarmConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_20B507B6608BF5F8_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantFarmConfigRow* Method_1_E6E88070B88DDA19(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantFarmConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_E6E88070B88DDA19_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5615F78C17E23F77(::RPG::GameCore::RestaurantFarmConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantFarmConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_1B26507F2EFBFD0A_METHOD_1_5615F78C17E23F77_OFFSET))(a1);
	}
};
