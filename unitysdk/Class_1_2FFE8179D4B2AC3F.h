#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveQuestEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CEFC300)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_449A83FFC725BF98_OFFSET UNITYSDK_OFFSET(0x1CEFBDF0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEFC130)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEFC1C0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9A11FC3BAE30C75_OFFSET UNITYSDK_OFFSET(0x1CEFC350)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9ACFC8EC6A95117_OFFSET UNITYSDK_OFFSET(0x1CEFBAE0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEFBD90)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_D77B3C9C86E345CE_OFFSET UNITYSDK_OFFSET(0x1CEFBF60)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEFBB60)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEFC0F0)
#define CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEFC260)
#define CLASS_1_2FFE8179D4B2AC3F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFC6C0)

inline static constexpr unsigned int Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex = 11746;

class Class_1_2FFE8179D4B2AC3F : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x49670);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x49678);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x49680);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x10D80);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2FFE8179D4B2AC3F_TypeDefinitionIndex)->GetStaticField(0x10D81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>* Method_1_C9ACFC8EC6A95117()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9ACFC8EC6A95117_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*> Method_1_449A83FFC725BF98()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestEquipRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_449A83FFC725BF98_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveQuestEquipRow* Method_1_D77B3C9C86E345CE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveQuestEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_D77B3C9C86E345CE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9A11FC3BAE30C75(::RPG::GameCore::IdleLiveQuestEquipRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestEquipRow*))((::PBYTE)hIl2Cpp + CLASS_1_2FFE8179D4B2AC3F_METHOD_1_C9A11FC3BAE30C75_OFFSET))(a1);
	}
};
