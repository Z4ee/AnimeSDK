#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirLockActionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B81B3C0)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_7286C2AA7F051DB7_OFFSET UNITYSDK_OFFSET(0x1B81B410)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B81B1F0)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_AC88868C942B2364_OFFSET UNITYSDK_OFFSET(0x1B81B020)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B81B280)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B81AE50)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_D271A51601DD030A_OFFSET UNITYSDK_OFFSET(0x1B81AEB0)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B81AC20)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_E118F55F924F8CE1_OFFSET UNITYSDK_OFFSET(0x1B81ABA0)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B81B1B0)
#define CLASS_1_D37D0B35F6BE57BD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B81B320)
#define CLASS_1_D37D0B35F6BE57BD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B81B780)

inline static constexpr unsigned int Class_1_D37D0B35F6BE57BD_TypeDefinitionIndex = 11705;

class Class_1_D37D0B35F6BE57BD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D37D0B35F6BE57BD_TypeDefinitionIndex)->GetStaticField(0x65660);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D37D0B35F6BE57BD_TypeDefinitionIndex)->GetStaticField(0x65668);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D37D0B35F6BE57BD_TypeDefinitionIndex)->GetStaticField(0x65670);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D37D0B35F6BE57BD_TypeDefinitionIndex)->GetStaticField(0x137F0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D37D0B35F6BE57BD_TypeDefinitionIndex)->GetStaticField(0x137F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>* Method_1_E118F55F924F8CE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_E118F55F924F8CE1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*> Method_1_D271A51601DD030A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_D271A51601DD030A_OFFSET))();
	}

	static ::RPG::GameCore::PixAirLockActionConfigRow* Method_1_AC88868C942B2364(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PixAirLockActionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_AC88868C942B2364_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7286C2AA7F051DB7(::RPG::GameCore::PixAirLockActionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PixAirLockActionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D37D0B35F6BE57BD_METHOD_1_7286C2AA7F051DB7_OFFSET))(a1);
	}
};
