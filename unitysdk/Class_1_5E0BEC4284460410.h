#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyMtCategoryScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E0BEC4284460410_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1915B210)
#define CLASS_1_5E0BEC4284460410_METHOD_1_206547C609A21EDC_OFFSET UNITYSDK_OFFSET(0x1915ADE0)
#define CLASS_1_5E0BEC4284460410_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1915B030)
#define CLASS_1_5E0BEC4284460410_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1915A980)
#define CLASS_1_5E0BEC4284460410_METHOD_1_6E5707E285BAC2FD_OFFSET UNITYSDK_OFFSET(0x1915AC30)
#define CLASS_1_5E0BEC4284460410_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1915B0D0)
#define CLASS_1_5E0BEC4284460410_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1915ABD0)
#define CLASS_1_5E0BEC4284460410_METHOD_1_DD99C4D8CA4DBB68_OFFSET UNITYSDK_OFFSET(0x1915B260)
#define CLASS_1_5E0BEC4284460410_METHOD_1_E0D7D22F891C044C_OFFSET UNITYSDK_OFFSET(0x1915A900)
#define CLASS_1_5E0BEC4284460410_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1915AFF0)
#define CLASS_1_5E0BEC4284460410_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1915B170)
#define CLASS_1_5E0BEC4284460410__CCTOR_OFFSET UNITYSDK_OFFSET(0x1915B610)

inline static constexpr unsigned int Class_1_5E0BEC4284460410_TypeDefinitionIndex = 14557;

class Class_1_5E0BEC4284460410 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E0BEC4284460410_TypeDefinitionIndex)->GetStaticField(0x41D30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E0BEC4284460410_TypeDefinitionIndex)->GetStaticField(0x41D38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E0BEC4284460410_TypeDefinitionIndex)->GetStaticField(0x41D40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E0BEC4284460410_TypeDefinitionIndex)->GetStaticField(0xEC60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E0BEC4284460410_TypeDefinitionIndex)->GetStaticField(0xEC61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>* Method_1_E0D7D22F891C044C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_E0D7D22F891C044C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*> Method_1_6E5707E285BAC2FD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyMtCategoryScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_6E5707E285BAC2FD_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyMtCategoryScoreRow* Method_1_206547C609A21EDC(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::TrainPartyMtCategoryScoreRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_206547C609A21EDC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_DD99C4D8CA4DBB68(::RPG::GameCore::TrainPartyMtCategoryScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyMtCategoryScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_5E0BEC4284460410_METHOD_1_DD99C4D8CA4DBB68_OFFSET))(a1);
	}
};
