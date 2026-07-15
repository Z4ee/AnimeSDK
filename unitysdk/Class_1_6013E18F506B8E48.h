#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceCatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6013E18F506B8E48_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x103DE220)
#define CLASS_1_6013E18F506B8E48_METHOD_1_63ABD022F4CCE122_OFFSET UNITYSDK_OFFSET(0x103DDD90)
#define CLASS_1_6013E18F506B8E48_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x103DE050)
#define CLASS_1_6013E18F506B8E48_METHOD_1_8FB6D61B419E1342_OFFSET UNITYSDK_OFFSET(0x103DDA80)
#define CLASS_1_6013E18F506B8E48_METHOD_1_9BD9CD154EFB4B0B_OFFSET UNITYSDK_OFFSET(0x103DDEC0)
#define CLASS_1_6013E18F506B8E48_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x103DE0E0)
#define CLASS_1_6013E18F506B8E48_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x103DDD30)
#define CLASS_1_6013E18F506B8E48_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x103DDB00)
#define CLASS_1_6013E18F506B8E48_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x103DE010)
#define CLASS_1_6013E18F506B8E48_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x103DE180)
#define CLASS_1_6013E18F506B8E48_METHOD_1_FA71951AB8C3A00D_OFFSET UNITYSDK_OFFSET(0x103DE270)
#define CLASS_1_6013E18F506B8E48__CCTOR_OFFSET UNITYSDK_OFFSET(0x103DE590)

inline static constexpr unsigned int Class_1_6013E18F506B8E48_TypeDefinitionIndex = 10605;

class Class_1_6013E18F506B8E48 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6013E18F506B8E48_TypeDefinitionIndex)->GetStaticField(0x41630);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6013E18F506B8E48_TypeDefinitionIndex)->GetStaticField(0x41638);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6013E18F506B8E48_TypeDefinitionIndex)->GetStaticField(0x41640);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6013E18F506B8E48_TypeDefinitionIndex)->GetStaticField(0xB100);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6013E18F506B8E48_TypeDefinitionIndex)->GetStaticField(0xB101);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>* Method_1_8FB6D61B419E1342()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_8FB6D61B419E1342_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*> Method_1_63ABD022F4CCE122()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceCatRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_63ABD022F4CCE122_OFFSET))();
	}

	static ::RPG::GameCore::CakeRaceCatRow* Method_1_9BD9CD154EFB4B0B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceCatRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_9BD9CD154EFB4B0B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA71951AB8C3A00D(::RPG::GameCore::CakeRaceCatRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakeRaceCatRow*))((::PBYTE)hIl2Cpp + CLASS_1_6013E18F506B8E48_METHOD_1_FA71951AB8C3A00D_OFFSET))(a1);
	}
};
