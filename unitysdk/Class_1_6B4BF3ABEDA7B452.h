#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyDynamicConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BB6250)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_0E4349E0A63EBC26_OFFSET UNITYSDK_OFFSET(0x16BB62A0)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BB6070)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BB5A00)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_9D435549E9B4D057_OFFSET UNITYSDK_OFFSET(0x16BB5CB0)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_A835A8DE8D99FF38_OFFSET UNITYSDK_OFFSET(0x16BB5E60)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BB6110)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BB5C50)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_E36471713269CE3A_OFFSET UNITYSDK_OFFSET(0x16BB5980)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BB6030)
#define CLASS_1_6B4BF3ABEDA7B452_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BB61B0)
#define CLASS_1_6B4BF3ABEDA7B452__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BB6600)

inline static constexpr unsigned int Class_1_6B4BF3ABEDA7B452_TypeDefinitionIndex = 14080;

class Class_1_6B4BF3ABEDA7B452 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyDynamicConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyDynamicConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B4BF3ABEDA7B452_TypeDefinitionIndex)->GetStaticField(0x271E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B4BF3ABEDA7B452_TypeDefinitionIndex)->GetStaticField(0x271E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B4BF3ABEDA7B452_TypeDefinitionIndex)->GetStaticField(0x271F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B4BF3ABEDA7B452_TypeDefinitionIndex)->GetStaticField(0xCC70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B4BF3ABEDA7B452_TypeDefinitionIndex)->GetStaticField(0xCC71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyDynamicConfigRow*>* Method_1_E36471713269CE3A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyDynamicConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_E36471713269CE3A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyDynamicConfigRow*> Method_1_9D435549E9B4D057()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyDynamicConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_9D435549E9B4D057_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyDynamicConfigRow* Method_1_A835A8DE8D99FF38(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyDynamicConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_A835A8DE8D99FF38_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0E4349E0A63EBC26(::RPG::GameCore::TrainPartyDynamicConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyDynamicConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6B4BF3ABEDA7B452_METHOD_1_0E4349E0A63EBC26_OFFSET))(a1);
	}
};
