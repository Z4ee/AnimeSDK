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

#define CLASS_1_06B127DE780421F3_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CCC1C10)
#define CLASS_1_06B127DE780421F3_METHOD_1_6BCF50D788416C1B_OFFSET UNITYSDK_OFFSET(0x1CCC1820)
#define CLASS_1_06B127DE780421F3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CCC1A40)
#define CLASS_1_06B127DE780421F3_METHOD_1_8EC78CEB8F862B5B_OFFSET UNITYSDK_OFFSET(0x1CCC13E0)
#define CLASS_1_06B127DE780421F3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CCC1AD0)
#define CLASS_1_06B127DE780421F3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CCC1690)
#define CLASS_1_06B127DE780421F3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CCC1460)
#define CLASS_1_06B127DE780421F3_METHOD_1_EF36460766F46B45_OFFSET UNITYSDK_OFFSET(0x1CCC16F0)
#define CLASS_1_06B127DE780421F3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CCC1A00)
#define CLASS_1_06B127DE780421F3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CCC1B70)
#define CLASS_1_06B127DE780421F3_METHOD_1_FBB49772F96D6758_OFFSET UNITYSDK_OFFSET(0x1CCC1C60)
#define CLASS_1_06B127DE780421F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC1FC0)

inline static constexpr unsigned int Class_1_06B127DE780421F3_TypeDefinitionIndex = 13423;

class Class_1_06B127DE780421F3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x16260);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x16268);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x16270);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x8660);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_06B127DE780421F3_TypeDefinitionIndex)->GetStaticField(0x8661);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*> Method_1_EF36460766F46B45()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_EF36460766F46B45_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* Method_1_6BCF50D788416C1B(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
	{
		return ((::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_6BCF50D788416C1B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_06B127DE780421F3_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
