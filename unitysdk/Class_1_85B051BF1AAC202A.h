#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_85B051BF1AAC202A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1906A8F0)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_2ED52A7D360E09FA_OFFSET UNITYSDK_OFFSET(0x1906A2D0)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19021380)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_3ADA11338AE4FE5E_OFFSET UNITYSDK_OFFSET(0x1906A940)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_4DE166B95A4B863B_OFFSET UNITYSDK_OFFSET(0x1906A3B0)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FD7E90)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_A7D50F65B863C362_OFFSET UNITYSDK_OFFSET(0x1906A560)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1906A7B0)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1906A350)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1906A770)
#define CLASS_1_85B051BF1AAC202A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1906A850)
#define CLASS_1_85B051BF1AAC202A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1906ACF0)

inline static constexpr unsigned int Class_1_85B051BF1AAC202A_TypeDefinitionIndex = 12783;

class Class_1_85B051BF1AAC202A : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85B051BF1AAC202A_TypeDefinitionIndex)->GetStaticField(0x3DF20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85B051BF1AAC202A_TypeDefinitionIndex)->GetStaticField(0x3DF28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_85B051BF1AAC202A_TypeDefinitionIndex)->GetStaticField(0x3DF30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85B051BF1AAC202A_TypeDefinitionIndex)->GetStaticField(0xDCF0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_85B051BF1AAC202A_TypeDefinitionIndex)->GetStaticField(0xDCF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>* Method_1_2ED52A7D360E09FA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_2ED52A7D360E09FA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*> Method_1_4DE166B95A4B863B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_4DE166B95A4B863B_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRankSkillModifyConfigRow* Method_1_A7D50F65B863C362(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightRankSkillModifyConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_A7D50F65B863C362_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3ADA11338AE4FE5E(::RPG::GameCore::GridFightRankSkillModifyConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRankSkillModifyConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_85B051BF1AAC202A_METHOD_1_3ADA11338AE4FE5E_OFFSET))(a1);
	}
};
