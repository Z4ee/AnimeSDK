#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CycleScoreRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7CDA420FB0384CAC_METHOD_1_03C4A475C175AADA_OFFSET UNITYSDK_OFFSET(0x182FA620)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_11484619C812AD25_OFFSET UNITYSDK_OFFSET(0x182FABE0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x182FAB90)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182FA9B0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182FA370)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182FAA50)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_BF79BE6EB663A2AE_OFFSET UNITYSDK_OFFSET(0x182FA7A0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_CB0266C37E95D538_OFFSET UNITYSDK_OFFSET(0x182FA2F0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182FA5C0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182FA970)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182FAAF0)
#define CLASS_1_7CDA420FB0384CAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x182FAEF0)

inline static constexpr unsigned int Class_1_7CDA420FB0384CAC_TypeDefinitionIndex = 12390;

class Class_1_7CDA420FB0384CAC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x24BF0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x24BF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x24C00);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x99D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x99D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>* Method_1_CB0266C37E95D538()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_CB0266C37E95D538_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*> Method_1_03C4A475C175AADA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_03C4A475C175AADA_OFFSET))();
	}

	static ::RPG::GameCore::CycleScoreRewardRow* Method_1_BF79BE6EB663A2AE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CycleScoreRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_BF79BE6EB663A2AE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_11484619C812AD25(::RPG::GameCore::CycleScoreRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_11484619C812AD25_OFFSET))(a1);
	}
};
