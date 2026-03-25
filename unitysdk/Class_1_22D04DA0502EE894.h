#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingGameBoyChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_22D04DA0502EE894_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16DE5170)
#define CLASS_1_22D04DA0502EE894_METHOD_1_2DC51375EB9E779A_OFFSET UNITYSDK_OFFSET(0x16DE51C0)
#define CLASS_1_22D04DA0502EE894_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DE4F90)
#define CLASS_1_22D04DA0502EE894_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DE4920)
#define CLASS_1_22D04DA0502EE894_METHOD_1_6B82FC262089D444_OFFSET UNITYSDK_OFFSET(0x16DE4D80)
#define CLASS_1_22D04DA0502EE894_METHOD_1_A41FCDB222F9F99E_OFFSET UNITYSDK_OFFSET(0x16DE48A0)
#define CLASS_1_22D04DA0502EE894_METHOD_1_A4F8D097C3D97DA3_OFFSET UNITYSDK_OFFSET(0x16DE4BD0)
#define CLASS_1_22D04DA0502EE894_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DE5030)
#define CLASS_1_22D04DA0502EE894_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DE4B70)
#define CLASS_1_22D04DA0502EE894_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DE4F50)
#define CLASS_1_22D04DA0502EE894_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DE50D0)
#define CLASS_1_22D04DA0502EE894__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DE5520)

inline static constexpr unsigned int Class_1_22D04DA0502EE894_TypeDefinitionIndex = 12895;

class Class_1_22D04DA0502EE894 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22D04DA0502EE894_TypeDefinitionIndex)->GetStaticField(0x17CC0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22D04DA0502EE894_TypeDefinitionIndex)->GetStaticField(0x17CC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_22D04DA0502EE894_TypeDefinitionIndex)->GetStaticField(0x17CD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_22D04DA0502EE894_TypeDefinitionIndex)->GetStaticField(0x6C50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_22D04DA0502EE894_TypeDefinitionIndex)->GetStaticField(0x6C51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>* Method_1_A41FCDB222F9F99E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_A41FCDB222F9F99E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*> Method_1_A4F8D097C3D97DA3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyChallengeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_A4F8D097C3D97DA3_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingGameBoyChallengeRow* Method_1_6B82FC262089D444(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingGameBoyChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_6B82FC262089D444_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2DC51375EB9E779A(::RPG::GameCore::ChenLingGameBoyChallengeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyChallengeRow*))((::PBYTE)hIl2Cpp + CLASS_1_22D04DA0502EE894_METHOD_1_2DC51375EB9E779A_OFFSET))(a1);
	}
};
