#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivitySummonGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B1053951077F8892_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19383610)
#define CLASS_1_B1053951077F8892_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19383440)
#define CLASS_1_B1053951077F8892_METHOD_1_A4B504CC4D6075F7_OFFSET UNITYSDK_OFFSET(0x19383270)
#define CLASS_1_B1053951077F8892_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x193834D0)
#define CLASS_1_B1053951077F8892_METHOD_1_BDB6DF60CB052FB4_OFFSET UNITYSDK_OFFSET(0x19382E30)
#define CLASS_1_B1053951077F8892_METHOD_1_BE3F366E1B822FFC_OFFSET UNITYSDK_OFFSET(0x19383140)
#define CLASS_1_B1053951077F8892_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193830E0)
#define CLASS_1_B1053951077F8892_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19382EB0)
#define CLASS_1_B1053951077F8892_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19383400)
#define CLASS_1_B1053951077F8892_METHOD_1_F1404B098854697B_OFFSET UNITYSDK_OFFSET(0x19383660)
#define CLASS_1_B1053951077F8892_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19383570)
#define CLASS_1_B1053951077F8892__CCTOR_OFFSET UNITYSDK_OFFSET(0x19383990)

inline static constexpr unsigned int Class_1_B1053951077F8892_TypeDefinitionIndex = 11832;

class Class_1_B1053951077F8892 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1053951077F8892_TypeDefinitionIndex)->GetStaticField(0x57350);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1053951077F8892_TypeDefinitionIndex)->GetStaticField(0x57358);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1053951077F8892_TypeDefinitionIndex)->GetStaticField(0x57360);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1053951077F8892_TypeDefinitionIndex)->GetStaticField(0x11450);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1053951077F8892_TypeDefinitionIndex)->GetStaticField(0x11451);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>* Method_1_BDB6DF60CB052FB4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_BDB6DF60CB052FB4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*> Method_1_BE3F366E1B822FFC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_BE3F366E1B822FFC_OFFSET))();
	}

	static ::RPG::GameCore::ActivitySummonGroupRow* Method_1_A4B504CC4D6075F7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivitySummonGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_A4B504CC4D6075F7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_F1404B098854697B(::RPG::GameCore::ActivitySummonGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivitySummonGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_B1053951077F8892_METHOD_1_F1404B098854697B_OFFSET))(a1);
	}
};
