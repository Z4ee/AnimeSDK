#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveTaskRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_577C021910162C1E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18FBE1A0)
#define CLASS_1_577C021910162C1E_METHOD_1_191BA1A70253772F_OFFSET UNITYSDK_OFFSET(0x18FBDE00)
#define CLASS_1_577C021910162C1E_METHOD_1_6209EBC709F78507_OFFSET UNITYSDK_OFFSET(0x18FBDC90)
#define CLASS_1_577C021910162C1E_METHOD_1_6D67154DDDBB1FBA_OFFSET UNITYSDK_OFFSET(0x18FBE1F0)
#define CLASS_1_577C021910162C1E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FBDFD0)
#define CLASS_1_577C021910162C1E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FBE060)
#define CLASS_1_577C021910162C1E_METHOD_1_BA91EBD602589ADE_OFFSET UNITYSDK_OFFSET(0x18FBD980)
#define CLASS_1_577C021910162C1E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FBDC30)
#define CLASS_1_577C021910162C1E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FBDA00)
#define CLASS_1_577C021910162C1E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FBDF90)
#define CLASS_1_577C021910162C1E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FBE100)
#define CLASS_1_577C021910162C1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FBE560)

inline static constexpr unsigned int Class_1_577C021910162C1E_TypeDefinitionIndex = 11215;

class Class_1_577C021910162C1E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C021910162C1E_TypeDefinitionIndex)->GetStaticField(0x34E10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C021910162C1E_TypeDefinitionIndex)->GetStaticField(0x34E18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C021910162C1E_TypeDefinitionIndex)->GetStaticField(0x34E20);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C021910162C1E_TypeDefinitionIndex)->GetStaticField(0xA630);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_577C021910162C1E_TypeDefinitionIndex)->GetStaticField(0xA631);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>* Method_1_BA91EBD602589ADE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_BA91EBD602589ADE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*> Method_1_6209EBC709F78507()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTaskRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_6209EBC709F78507_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveTaskRow* Method_1_191BA1A70253772F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveTaskRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_191BA1A70253772F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_6D67154DDDBB1FBA(::RPG::GameCore::IdleLiveTaskRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveTaskRow*))((::PBYTE)hIl2Cpp + CLASS_1_577C021910162C1E_METHOD_1_6D67154DDDBB1FBA_OFFSET))(a1);
	}
};
