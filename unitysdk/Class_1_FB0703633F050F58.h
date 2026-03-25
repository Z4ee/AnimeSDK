#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FB0703633F050F58_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16DE4230)
#define CLASS_1_FB0703633F050F58_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DE4050)
#define CLASS_1_FB0703633F050F58_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DE3920)
#define CLASS_1_FB0703633F050F58_METHOD_1_7BED68007A53EC67_OFFSET UNITYSDK_OFFSET(0x16DE3BD0)
#define CLASS_1_FB0703633F050F58_METHOD_1_8271C5227D2B41EC_OFFSET UNITYSDK_OFFSET(0x16DE4280)
#define CLASS_1_FB0703633F050F58_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DE40F0)
#define CLASS_1_FB0703633F050F58_METHOD_1_B6E50E02666E836C_OFFSET UNITYSDK_OFFSET(0x16DE3D80)
#define CLASS_1_FB0703633F050F58_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DE3B70)
#define CLASS_1_FB0703633F050F58_METHOD_1_D22F713BD815BFBE_OFFSET UNITYSDK_OFFSET(0x16DE3E40)
#define CLASS_1_FB0703633F050F58_METHOD_1_DA385314962D2B32_OFFSET UNITYSDK_OFFSET(0x16DE38A0)
#define CLASS_1_FB0703633F050F58_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DE4010)
#define CLASS_1_FB0703633F050F58_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DE4190)
#define CLASS_1_FB0703633F050F58__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DE45E0)

inline static constexpr unsigned int Class_1_FB0703633F050F58_TypeDefinitionIndex = 10553;

class Class_1_FB0703633F050F58 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0703633F050F58_TypeDefinitionIndex)->GetStaticField(0x17C90);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0703633F050F58_TypeDefinitionIndex)->GetStaticField(0x17C98);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0703633F050F58_TypeDefinitionIndex)->GetStaticField(0x17CA0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0703633F050F58_TypeDefinitionIndex)->GetStaticField(0x6C40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FB0703633F050F58_TypeDefinitionIndex)->GetStaticField(0x6C41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>* Method_1_DA385314962D2B32()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_DA385314962D2B32_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*> Method_1_7BED68007A53EC67()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_7BED68007A53EC67_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>, ::RPG::GameCore::ActivityDiceRuleGroupRow*> Method_1_B6E50E02666E836C()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceRuleGroupRow*>, ::RPG::GameCore::ActivityDiceRuleGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_B6E50E02666E836C_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceRuleGroupRow* Method_1_D22F713BD815BFBE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceRuleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_D22F713BD815BFBE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8271C5227D2B41EC(::RPG::GameCore::ActivityDiceRuleGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceRuleGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_FB0703633F050F58_METHOD_1_8271C5227D2B41EC_OFFSET))(a1);
	}
};
