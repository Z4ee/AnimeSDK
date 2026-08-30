#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2BattleItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_935010D43888DE37_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D5CA200)
#define CLASS_1_935010D43888DE37_METHOD_1_480E76AC3C939105_OFFSET UNITYSDK_OFFSET(0x1D5C9CF0)
#define CLASS_1_935010D43888DE37_METHOD_1_6A0CF542626E0BE4_OFFSET UNITYSDK_OFFSET(0x1D5CA250)
#define CLASS_1_935010D43888DE37_METHOD_1_7E64D84690C6BD5F_OFFSET UNITYSDK_OFFSET(0x1D5C99E0)
#define CLASS_1_935010D43888DE37_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D5CA030)
#define CLASS_1_935010D43888DE37_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D5CA0C0)
#define CLASS_1_935010D43888DE37_METHOD_1_B204A03135B73E5C_OFFSET UNITYSDK_OFFSET(0x1D5C9E20)
#define CLASS_1_935010D43888DE37_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D5C9C90)
#define CLASS_1_935010D43888DE37_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D5C9A60)
#define CLASS_1_935010D43888DE37_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D5C9FF0)
#define CLASS_1_935010D43888DE37_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D5CA160)
#define CLASS_1_935010D43888DE37__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5CA5B0)

inline static constexpr unsigned int Class_1_935010D43888DE37_TypeDefinitionIndex = 11920;

class Class_1_935010D43888DE37 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_935010D43888DE37_TypeDefinitionIndex)->GetStaticField(0x301A0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_935010D43888DE37_TypeDefinitionIndex)->GetStaticField(0x301A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_935010D43888DE37_TypeDefinitionIndex)->GetStaticField(0x301B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_935010D43888DE37_TypeDefinitionIndex)->GetStaticField(0xCD30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_935010D43888DE37_TypeDefinitionIndex)->GetStaticField(0xCD31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>* Method_1_7E64D84690C6BD5F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_7E64D84690C6BD5F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*> Method_1_480E76AC3C939105()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2BattleItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_480E76AC3C939105_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2BattleItemRow* Method_1_B204A03135B73E5C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MatchThreeV2BattleItemRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_B204A03135B73E5C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6A0CF542626E0BE4(::RPG::GameCore::MatchThreeV2BattleItemRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2BattleItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_935010D43888DE37_METHOD_1_6A0CF542626E0BE4_OFFSET))(a1);
	}
};
