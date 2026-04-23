#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FFA1A4EA37594E63_METHOD_1_0765020FCE775FB0_OFFSET UNITYSDK_OFFSET(0x19076A30)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19076F30)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_244ABA25C24C222F_OFFSET UNITYSDK_OFFSET(0x19076F80)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19021C40)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FD9EF0)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_A85A9A7B548CEA5B_OFFSET UNITYSDK_OFFSET(0x19076BE0)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19076DF0)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x190769D0)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_D8280882E46CBA2F_OFFSET UNITYSDK_OFFSET(0x19076950)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19076DB0)
#define CLASS_1_FFA1A4EA37594E63_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19076E90)
#define CLASS_1_FFA1A4EA37594E63__CCTOR_OFFSET UNITYSDK_OFFSET(0x190772E0)

inline static constexpr unsigned int Class_1_FFA1A4EA37594E63_TypeDefinitionIndex = 10542;

class Class_1_FFA1A4EA37594E63 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA1A4EA37594E63_TypeDefinitionIndex)->GetStaticField(0x3E580);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA1A4EA37594E63_TypeDefinitionIndex)->GetStaticField(0x3E588);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA1A4EA37594E63_TypeDefinitionIndex)->GetStaticField(0x3E590);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA1A4EA37594E63_TypeDefinitionIndex)->GetStaticField(0xDF30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFA1A4EA37594E63_TypeDefinitionIndex)->GetStaticField(0xDF31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>* Method_1_D8280882E46CBA2F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_D8280882E46CBA2F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*> Method_1_0765020FCE775FB0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTriggerConditionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_0765020FCE775FB0_OFFSET))();
	}

	static ::RPG::GameCore::CakeRaceTriggerConditionRow* Method_1_A85A9A7B548CEA5B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceTriggerConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_A85A9A7B548CEA5B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_244ABA25C24C222F(::RPG::GameCore::CakeRaceTriggerConditionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakeRaceTriggerConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_FFA1A4EA37594E63_METHOD_1_244ABA25C24C222F_OFFSET))(a1);
	}
};
