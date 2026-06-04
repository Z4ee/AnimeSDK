#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NounAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F50774A927251EE0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19B874D0)
#define CLASS_1_F50774A927251EE0_METHOD_1_15A883B9AE1E981F_OFFSET UNITYSDK_OFFSET(0x19B87170)
#define CLASS_1_F50774A927251EE0_METHOD_1_229282E5BF1E52D4_OFFSET UNITYSDK_OFFSET(0x19B87040)
#define CLASS_1_F50774A927251EE0_METHOD_1_3EA81C3C02D34F14_OFFSET UNITYSDK_OFFSET(0x19B86D30)
#define CLASS_1_F50774A927251EE0_METHOD_1_4D4C721C406BB191_OFFSET UNITYSDK_OFFSET(0x19B87520)
#define CLASS_1_F50774A927251EE0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19B87300)
#define CLASS_1_F50774A927251EE0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19B87390)
#define CLASS_1_F50774A927251EE0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19B86FE0)
#define CLASS_1_F50774A927251EE0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19B86DB0)
#define CLASS_1_F50774A927251EE0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19B872C0)
#define CLASS_1_F50774A927251EE0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19B87430)
#define CLASS_1_F50774A927251EE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B87840)

inline static constexpr unsigned int Class_1_F50774A927251EE0_TypeDefinitionIndex = 12084;

class Class_1_F50774A927251EE0 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F50774A927251EE0_TypeDefinitionIndex)->GetStaticField(0x496A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F50774A927251EE0_TypeDefinitionIndex)->GetStaticField(0x496A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F50774A927251EE0_TypeDefinitionIndex)->GetStaticField(0x496B0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F50774A927251EE0_TypeDefinitionIndex)->GetStaticField(0xDB80);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F50774A927251EE0_TypeDefinitionIndex)->GetStaticField(0xDB81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>* Method_1_3EA81C3C02D34F14()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_3EA81C3C02D34F14_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*> Method_1_229282E5BF1E52D4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_229282E5BF1E52D4_OFFSET))();
	}

	static ::RPG::GameCore::NounAtlasRow* Method_1_15A883B9AE1E981F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::NounAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_15A883B9AE1E981F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D4C721C406BB191(::RPG::GameCore::NounAtlasRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::NounAtlasRow*))((::PBYTE)hIl2Cpp + CLASS_1_F50774A927251EE0_METHOD_1_4D4C721C406BB191_OFFSET))(a1);
	}
};
