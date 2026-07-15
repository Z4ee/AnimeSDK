#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DialogueConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_896AE445C3002E6C_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B91B8B0)
#define CLASS_1_896AE445C3002E6C_METHOD_1_4A6A66C7A5C5050C_OFFSET UNITYSDK_OFFSET(0x1B91B900)
#define CLASS_1_896AE445C3002E6C_METHOD_1_57A124FB1F5B8F19_OFFSET UNITYSDK_OFFSET(0x1B91B3A0)
#define CLASS_1_896AE445C3002E6C_METHOD_1_65550852420026F5_OFFSET UNITYSDK_OFFSET(0x1B91B510)
#define CLASS_1_896AE445C3002E6C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B91B6E0)
#define CLASS_1_896AE445C3002E6C_METHOD_1_9B3EA5ABD982C838_OFFSET UNITYSDK_OFFSET(0x1B91B090)
#define CLASS_1_896AE445C3002E6C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B91B770)
#define CLASS_1_896AE445C3002E6C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B91B340)
#define CLASS_1_896AE445C3002E6C_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B91B110)
#define CLASS_1_896AE445C3002E6C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B91B6A0)
#define CLASS_1_896AE445C3002E6C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B91B810)
#define CLASS_1_896AE445C3002E6C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B91BC70)

inline static constexpr unsigned int Class_1_896AE445C3002E6C_TypeDefinitionIndex = 12638;

class Class_1_896AE445C3002E6C : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_896AE445C3002E6C_TypeDefinitionIndex)->GetStaticField(0x431D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_896AE445C3002E6C_TypeDefinitionIndex)->GetStaticField(0x431D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_896AE445C3002E6C_TypeDefinitionIndex)->GetStaticField(0x431E0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_896AE445C3002E6C_TypeDefinitionIndex)->GetStaticField(0xB7B0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_896AE445C3002E6C_TypeDefinitionIndex)->GetStaticField(0xB7B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>* Method_1_9B3EA5ABD982C838()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_9B3EA5ABD982C838_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*> Method_1_57A124FB1F5B8F19()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DialogueConditionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_57A124FB1F5B8F19_OFFSET))();
	}

	static ::RPG::GameCore::DialogueConditionRow* Method_1_65550852420026F5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DialogueConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_65550852420026F5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A6A66C7A5C5050C(::RPG::GameCore::DialogueConditionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DialogueConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_896AE445C3002E6C_METHOD_1_4A6A66C7A5C5050C_OFFSET))(a1);
	}
};
