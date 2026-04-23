#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_30F1F9540D7191B9_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18B86CA0)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_10F5CA485BDC2CC9_OFFSET UNITYSDK_OFFSET(0x18B86730)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_1F9463F72872FBFF_OFFSET UNITYSDK_OFFSET(0x18B868B0)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18B86AC0)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_5049E12AD7CB5FB2_OFFSET UNITYSDK_OFFSET(0x18B86CF0)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18B86480)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_9B5453034123BB95_OFFSET UNITYSDK_OFFSET(0x18B86400)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18B86B60)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18B866D0)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18B86A80)
#define CLASS_1_30F1F9540D7191B9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18B86C00)
#define CLASS_1_30F1F9540D7191B9__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B87000)

inline static constexpr unsigned int Class_1_30F1F9540D7191B9_TypeDefinitionIndex = 11289;

class Class_1_30F1F9540D7191B9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30F1F9540D7191B9_TypeDefinitionIndex)->GetStaticField(0x22BD0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30F1F9540D7191B9_TypeDefinitionIndex)->GetStaticField(0x22BD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30F1F9540D7191B9_TypeDefinitionIndex)->GetStaticField(0x22BE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30F1F9540D7191B9_TypeDefinitionIndex)->GetStaticField(0x8C90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_30F1F9540D7191B9_TypeDefinitionIndex)->GetStaticField(0x8C91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>* Method_1_9B5453034123BB95()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_9B5453034123BB95_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*> Method_1_10F5CA485BDC2CC9()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_10F5CA485BDC2CC9_OFFSET))();
	}

	static ::RPG::GameCore::MarbleSealRow* Method_1_1F9463F72872FBFF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_1F9463F72872FBFF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5049E12AD7CB5FB2(::RPG::GameCore::MarbleSealRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleSealRow*))((::PBYTE)hIl2Cpp + CLASS_1_30F1F9540D7191B9_METHOD_1_5049E12AD7CB5FB2_OFFSET))(a1);
	}
};
