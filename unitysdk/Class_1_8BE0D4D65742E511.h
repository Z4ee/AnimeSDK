#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingConditionType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingConditionDescRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8BE0D4D65742E511_METHOD_1_05B47C8EE56A51F5_OFFSET UNITYSDK_OFFSET(0x1CD106E0)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CD10F00)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_3D9123C2FF6D691D_OFFSET UNITYSDK_OFFSET(0x1CD10B60)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD10D30)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_A04EB553C54C0DBF_OFFSET UNITYSDK_OFFSET(0x1CD10F50)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD10DC0)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD10990)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD10760)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_E71046AE602387EA_OFFSET UNITYSDK_OFFSET(0x1CD109F0)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD10CF0)
#define CLASS_1_8BE0D4D65742E511_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD10E60)
#define CLASS_1_8BE0D4D65742E511__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD112C0)

inline static constexpr unsigned int Class_1_8BE0D4D65742E511_TypeDefinitionIndex = 11033;

class Class_1_8BE0D4D65742E511 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BE0D4D65742E511_TypeDefinitionIndex)->GetStaticField(0x48B60);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BE0D4D65742E511_TypeDefinitionIndex)->GetStaticField(0x48B68);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BE0D4D65742E511_TypeDefinitionIndex)->GetStaticField(0x48B70);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BE0D4D65742E511_TypeDefinitionIndex)->GetStaticField(0x10E90);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8BE0D4D65742E511_TypeDefinitionIndex)->GetStaticField(0x10E91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>* Method_1_05B47C8EE56A51F5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_05B47C8EE56A51F5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*> Method_1_E71046AE602387EA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingConditionDescRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_E71046AE602387EA_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingConditionDescRow* Method_1_3D9123C2FF6D691D(::RPG::GameCore::ChenLingConditionType a1)
	{
		return ((::RPG::GameCore::ChenLingConditionDescRow*(*)(::RPG::GameCore::ChenLingConditionType))((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_3D9123C2FF6D691D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A04EB553C54C0DBF(::RPG::GameCore::ChenLingConditionDescRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingConditionDescRow*))((::PBYTE)hIl2Cpp + CLASS_1_8BE0D4D65742E511_METHOD_1_A04EB553C54C0DBF_OFFSET))(a1);
	}
};
