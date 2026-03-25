#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_06B127DE780421F3_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x17960AF0)
#define CLASS_1_06B127DE780421F3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17960910)
#define CLASS_1_06B127DE780421F3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17960290)
#define CLASS_1_06B127DE780421F3_METHOD_1_710647DC2E320312_OFFSET UNITYSDK_OFFSET(0x179606C0)
#define CLASS_1_06B127DE780421F3_METHOD_1_714F7FEDB71934F7_OFFSET UNITYSDK_OFFSET(0x17960540)
#define CLASS_1_06B127DE780421F3_METHOD_1_8EC78CEB8F862B5B_OFFSET UNITYSDK_OFFSET(0x17960210)
#define CLASS_1_06B127DE780421F3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179609B0)
#define CLASS_1_06B127DE780421F3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179604E0)
#define CLASS_1_06B127DE780421F3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179608D0)
#define CLASS_1_06B127DE780421F3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17960A50)
#define CLASS_1_06B127DE780421F3_METHOD_1_FBB49772F96D6758_OFFSET UNITYSDK_OFFSET(0x17960B40)
#define CLASS_1_06B127DE780421F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x17960EA0)

inline static constexpr unsigned int Class_1_06B127DE780421F3_TypeDefinitionIndex = 12364;

class Class_1_06B127DE780421F3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x24630);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x24638);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x24640);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x9B60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x9B61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>* Method_1_8EC78CEB8F862B5B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_8EC78CEB8F862B5B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*> Method_1_714F7FEDB71934F7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_714F7FEDB71934F7_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* Method_1_710647DC2E320312(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
	{
		return ((::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_710647DC2E320312_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_FBB49772F96D6758(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_FBB49772F96D6758_OFFSET))(a1);
	}
};
