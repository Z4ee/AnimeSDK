#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ADED2533D4BED2AC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16ECA490)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16ECA2B0)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EC9C30)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_8607D1BFC7D5E83D_OFFSET UNITYSDK_OFFSET(0x16ECA4E0)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_9AE1E1A3768C853A_OFFSET UNITYSDK_OFFSET(0x16EC9BB0)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16ECA350)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EC9E80)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_E32305A62FB82D5C_OFFSET UNITYSDK_OFFSET(0x16ECA060)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_E91D61566854F328_OFFSET UNITYSDK_OFFSET(0x16EC9EE0)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16ECA270)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16ECA3F0)
#define CLASS_1_ADED2533D4BED2AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ECA840)

inline static constexpr unsigned int Class_1_ADED2533D4BED2AC_TypeDefinitionIndex = 11828;

class Class_1_ADED2533D4BED2AC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0x2CC10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0x2CC18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0x2CC20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0xEE80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0xEE81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>* Method_1_9AE1E1A3768C853A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_9AE1E1A3768C853A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*> Method_1_E91D61566854F328()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_E91D61566854F328_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeMazeRewardLineRow* Method_1_E32305A62FB82D5C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ChallengeMazeRewardLineRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_E32305A62FB82D5C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8607D1BFC7D5E83D(::RPG::GameCore::ChallengeMazeRewardLineRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeRewardLineRow*))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_8607D1BFC7D5E83D_OFFSET))(a1);
	}
};
