#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveAvatarPropertyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18561890)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_2BB8CC70E8BCF7D8_OFFSET UNITYSDK_OFFSET(0x185614E0)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x185616B0)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_457ECD03B151CBE1_OFFSET UNITYSDK_OFFSET(0x18561420)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18560FF0)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_A3748B366E9DADDC_OFFSET UNITYSDK_OFFSET(0x185618E0)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18561750)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18561240)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18561670)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_F0E35CFB1421CA67_OFFSET UNITYSDK_OFFSET(0x18560F70)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x185617F0)
#define CLASS_1_F13EB6E06ECBA18F_METHOD_1_F984D358B3DA4EAF_OFFSET UNITYSDK_OFFSET(0x185612A0)
#define CLASS_1_F13EB6E06ECBA18F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18561BF0)

inline static constexpr unsigned int Class_1_F13EB6E06ECBA18F_TypeDefinitionIndex = 11153;

class Class_1_F13EB6E06ECBA18F : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13EB6E06ECBA18F_TypeDefinitionIndex)->GetStaticField(0x19910);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13EB6E06ECBA18F_TypeDefinitionIndex)->GetStaticField(0x19918);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13EB6E06ECBA18F_TypeDefinitionIndex)->GetStaticField(0x19920);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13EB6E06ECBA18F_TypeDefinitionIndex)->GetStaticField(0x6CD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F13EB6E06ECBA18F_TypeDefinitionIndex)->GetStaticField(0x6CD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>* Method_1_F0E35CFB1421CA67()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_F0E35CFB1421CA67_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*> Method_1_F984D358B3DA4EAF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_F984D358B3DA4EAF_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*> Method_1_457ECD03B151CBE1()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>, ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_457ECD03B151CBE1_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* Method_1_2BB8CC70E8BCF7D8(::RPG::GameCore::IdleLiveAvatarPropertyType a1)
	{
		return ((::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*(*)(::RPG::GameCore::IdleLiveAvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_2BB8CC70E8BCF7D8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A3748B366E9DADDC(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarPropertyConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F13EB6E06ECBA18F_METHOD_1_A3748B366E9DADDC_OFFSET))(a1);
	}
};
