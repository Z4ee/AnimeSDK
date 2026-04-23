#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumCommentsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19117A60)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19117880)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_31821E12F2C2BEF5_OFFSET UNITYSDK_OFFSET(0x19117670)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_64807278DC6A02C4_OFFSET UNITYSDK_OFFSET(0x191174C0)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19117210)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19117920)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_B195EFCE6790E071_OFFSET UNITYSDK_OFFSET(0x19117AB0)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19117460)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_ECE6E854E27B50E3_OFFSET UNITYSDK_OFFSET(0x19117190)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19117840)
#define CLASS_1_9DCA41ADC01AF8C3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191179C0)
#define CLASS_1_9DCA41ADC01AF8C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19117E10)

inline static constexpr unsigned int Class_1_9DCA41ADC01AF8C3_TypeDefinitionIndex = 13516;

class Class_1_9DCA41ADC01AF8C3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DCA41ADC01AF8C3_TypeDefinitionIndex)->GetStaticField(0x3F2F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DCA41ADC01AF8C3_TypeDefinitionIndex)->GetStaticField(0x3F2F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DCA41ADC01AF8C3_TypeDefinitionIndex)->GetStaticField(0x3F300);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DCA41ADC01AF8C3_TypeDefinitionIndex)->GetStaticField(0xE260);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9DCA41ADC01AF8C3_TypeDefinitionIndex)->GetStaticField(0xE261);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>* Method_1_ECE6E854E27B50E3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_ECE6E854E27B50E3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*> Method_1_64807278DC6A02C4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumCommentsRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_64807278DC6A02C4_OFFSET))();
	}

	static ::RPG::GameCore::MuseumCommentsRow* Method_1_31821E12F2C2BEF5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MuseumCommentsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_31821E12F2C2BEF5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B195EFCE6790E071(::RPG::GameCore::MuseumCommentsRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MuseumCommentsRow*))((::PBYTE)hIl2Cpp + CLASS_1_9DCA41ADC01AF8C3_METHOD_1_B195EFCE6790E071_OFFSET))(a1);
	}
};
