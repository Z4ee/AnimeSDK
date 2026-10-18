#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageInvasionRogueMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E490F00EE6B9C722_METHOD_1_072AA2E26865D6AD_OFFSET UNITYSDK_OFFSET(0x1CE80750)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CE801D0)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_561A8312BEC2EA9A_OFFSET UNITYSDK_OFFSET(0x1CE80620)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_63656EECD2C6839A_OFFSET UNITYSDK_OFFSET(0x1CE80540)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CE80000)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CE80090)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_B834F48A79D12E8F_OFFSET UNITYSDK_OFFSET(0x1CE80220)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CE805C0)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CE7FDD0)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CE7FD90)
#define CLASS_1_E490F00EE6B9C722_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CE80130)
#define CLASS_1_E490F00EE6B9C722__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE808A0)

inline static constexpr unsigned int Class_1_E490F00EE6B9C722_TypeDefinitionIndex = 15170;

class Class_1_E490F00EE6B9C722 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E490F00EE6B9C722_TypeDefinitionIndex)->GetStaticField(0x1B480);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E490F00EE6B9C722_TypeDefinitionIndex)->GetStaticField(0x1B488);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E490F00EE6B9C722_TypeDefinitionIndex)->GetStaticField(0x1B490);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E490F00EE6B9C722_TypeDefinitionIndex)->GetStaticField(0x6240);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E490F00EE6B9C722_TypeDefinitionIndex)->GetStaticField(0x6241);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_B834F48A79D12E8F(::RPG::GameCore::StageInvasionRogueMonsterRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StageInvasionRogueMonsterRow*))((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_B834F48A79D12E8F_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>* Method_1_63656EECD2C6839A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_63656EECD2C6839A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*> Method_1_561A8312BEC2EA9A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StageInvasionRogueMonsterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_561A8312BEC2EA9A_OFFSET))();
	}

	static ::RPG::GameCore::StageInvasionRogueMonsterRow* Method_1_072AA2E26865D6AD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::StageInvasionRogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E490F00EE6B9C722_METHOD_1_072AA2E26865D6AD_OFFSET))(a1);
	}
};
