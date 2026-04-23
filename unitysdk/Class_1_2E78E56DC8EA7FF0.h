#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RestaurantSelectEventConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18271690)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182714B0)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_3C1181CFC9C55814_OFFSET UNITYSDK_OFFSET(0x18270E40)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_4C6724049239C0EB_OFFSET UNITYSDK_OFFSET(0x182712F0)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_632642E68A2D7BE1_OFFSET UNITYSDK_OFFSET(0x182716E0)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18270EC0)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18271550)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18271110)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_CF642D9FF50F09C2_OFFSET UNITYSDK_OFFSET(0x18271170)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18271470)
#define CLASS_1_2E78E56DC8EA7FF0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182715F0)
#define CLASS_1_2E78E56DC8EA7FF0__CCTOR_OFFSET UNITYSDK_OFFSET(0x182719F0)

inline static constexpr unsigned int Class_1_2E78E56DC8EA7FF0_TypeDefinitionIndex = 10892;

class Class_1_2E78E56DC8EA7FF0 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E78E56DC8EA7FF0_TypeDefinitionIndex)->GetStaticField(0x1C4C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E78E56DC8EA7FF0_TypeDefinitionIndex)->GetStaticField(0x1C4C8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E78E56DC8EA7FF0_TypeDefinitionIndex)->GetStaticField(0x1C4D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E78E56DC8EA7FF0_TypeDefinitionIndex)->GetStaticField(0x7480);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E78E56DC8EA7FF0_TypeDefinitionIndex)->GetStaticField(0x7481);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>* Method_1_3C1181CFC9C55814()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_3C1181CFC9C55814_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*> Method_1_CF642D9FF50F09C2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RestaurantSelectEventConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_CF642D9FF50F09C2_OFFSET))();
	}

	static ::RPG::GameCore::RestaurantSelectEventConfigRow* Method_1_4C6724049239C0EB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RestaurantSelectEventConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_4C6724049239C0EB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_632642E68A2D7BE1(::RPG::GameCore::RestaurantSelectEventConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RestaurantSelectEventConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2E78E56DC8EA7FF0_METHOD_1_632642E68A2D7BE1_OFFSET))(a1);
	}
};
