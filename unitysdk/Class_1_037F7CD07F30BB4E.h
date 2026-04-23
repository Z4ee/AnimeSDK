#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialSDFRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_037F7CD07F30BB4E_METHOD_1_035A346AAA79482D_OFFSET UNITYSDK_OFFSET(0x181E1FA0)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x181E2340)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x181E2160)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_3C07B7714D7296C6_OFFSET UNITYSDK_OFFSET(0x181E1AC0)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x181E1B40)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_812B7C91A5A5C4F3_OFFSET UNITYSDK_OFFSET(0x181E1DF0)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x181E2200)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_C69D4B54CFCB7933_OFFSET UNITYSDK_OFFSET(0x181E2390)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x181E1D90)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x181E2120)
#define CLASS_1_037F7CD07F30BB4E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x181E22A0)
#define CLASS_1_037F7CD07F30BB4E__CCTOR_OFFSET UNITYSDK_OFFSET(0x181E26A0)

inline static constexpr unsigned int Class_1_037F7CD07F30BB4E_TypeDefinitionIndex = 13002;

class Class_1_037F7CD07F30BB4E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x1D430);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x1D438);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x1D440);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x7810);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_037F7CD07F30BB4E_TypeDefinitionIndex)->GetStaticField(0x7811);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>* Method_1_3C07B7714D7296C6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_3C07B7714D7296C6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*> Method_1_812B7C91A5A5C4F3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialSDFRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_812B7C91A5A5C4F3_OFFSET))();
	}

	static ::RPG::GameCore::HeartDialSDFRow* Method_1_035A346AAA79482D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HeartDialSDFRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_035A346AAA79482D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C69D4B54CFCB7933(::RPG::GameCore::HeartDialSDFRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeartDialSDFRow*))((::PBYTE)hIl2Cpp + CLASS_1_037F7CD07F30BB4E_METHOD_1_C69D4B54CFCB7933_OFFSET))(a1);
	}
};
