#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMonsterEliteDropItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3ED83A6328C1788E_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D0ECD50)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_18629C9A5DB20A2E_OFFSET UNITYSDK_OFFSET(0x1D0EC570)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_2250B9A3461F6E03_OFFSET UNITYSDK_OFFSET(0x1D0EC880)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0ECB80)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0ECC10)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_C565FE92FDEECD83_OFFSET UNITYSDK_OFFSET(0x1D0ECDA0)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0EC820)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0EC5F0)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0ECB40)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0ECCB0)
#define CLASS_1_3ED83A6328C1788E_METHOD_1_FF7B4222AB5C09A1_OFFSET UNITYSDK_OFFSET(0x1D0EC9F0)
#define CLASS_1_3ED83A6328C1788E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0ED0C0)

inline static constexpr unsigned int Class_1_3ED83A6328C1788E_TypeDefinitionIndex = 14529;

class Class_1_3ED83A6328C1788E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED83A6328C1788E_TypeDefinitionIndex)->GetStaticField(0x17FA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED83A6328C1788E_TypeDefinitionIndex)->GetStaticField(0x17FA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED83A6328C1788E_TypeDefinitionIndex)->GetStaticField(0x17FB0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED83A6328C1788E_TypeDefinitionIndex)->GetStaticField(0x8D20);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3ED83A6328C1788E_TypeDefinitionIndex)->GetStaticField(0x8D21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>* Method_1_18629C9A5DB20A2E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_18629C9A5DB20A2E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*> Method_1_2250B9A3461F6E03()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_2250B9A3461F6E03_OFFSET))();
	}

	static ::RPG::GameCore::RogueMonsterEliteDropItemRow* Method_1_FF7B4222AB5C09A1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMonsterEliteDropItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_FF7B4222AB5C09A1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_C565FE92FDEECD83(::RPG::GameCore::RogueMonsterEliteDropItemRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMonsterEliteDropItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_3ED83A6328C1788E_METHOD_1_C565FE92FDEECD83_OFFSET))(a1);
	}
};
