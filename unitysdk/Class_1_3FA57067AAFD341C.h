#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SpaceZooSpicalEventState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooSpecialEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3FA57067AAFD341C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C99320)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_2C13B791D278DB3C_OFFSET UNITYSDK_OFFSET(0x16C99370)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_308EB87F924F9650_OFFSET UNITYSDK_OFFSET(0x16C98A10)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C99140)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C98A90)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C991E0)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_CB2A49DCDE71609D_OFFSET UNITYSDK_OFFSET(0x16C98D40)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C98CE0)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_E76EC91D959F9737_OFFSET UNITYSDK_OFFSET(0x16C98EF0)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C99100)
#define CLASS_1_3FA57067AAFD341C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C99280)
#define CLASS_1_3FA57067AAFD341C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C99720)

inline static constexpr unsigned int Class_1_3FA57067AAFD341C_TypeDefinitionIndex = 11296;

class Class_1_3FA57067AAFD341C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA57067AAFD341C_TypeDefinitionIndex)->GetStaticField(0x51F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA57067AAFD341C_TypeDefinitionIndex)->GetStaticField(0x51F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA57067AAFD341C_TypeDefinitionIndex)->GetStaticField(0x5200);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA57067AAFD341C_TypeDefinitionIndex)->GetStaticField(0x2B50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3FA57067AAFD341C_TypeDefinitionIndex)->GetStaticField(0x2B51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>* Method_1_308EB87F924F9650()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_308EB87F924F9650_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*> Method_1_CB2A49DCDE71609D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSpecialEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_CB2A49DCDE71609D_OFFSET))();
	}

	static ::RPG::GameCore::SpaceZooSpecialEventRow* Method_1_E76EC91D959F9737(::System::UInt32 a1, ::RPG::GameCore::SpaceZooSpicalEventState a2)
	{
		return ((::RPG::GameCore::SpaceZooSpecialEventRow*(*)(::System::UInt32, ::RPG::GameCore::SpaceZooSpicalEventState))((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_E76EC91D959F9737_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C13B791D278DB3C(::RPG::GameCore::SpaceZooSpecialEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SpaceZooSpecialEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_3FA57067AAFD341C_METHOD_1_2C13B791D278DB3C_OFFSET))(a1);
	}
};
