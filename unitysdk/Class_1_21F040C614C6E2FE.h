#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamVoiceAtlasBindingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_21F040C614C6E2FE_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18BA00F0)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_2E7DF79235D8FD7A_OFFSET UNITYSDK_OFFSET(0x18B9FCC0)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18B9FF10)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_69830AD8B649D20E_OFFSET UNITYSDK_OFFSET(0x18B9F7E0)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18B9F860)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_8BEE271C7165A03B_OFFSET UNITYSDK_OFFSET(0x18B9FB10)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18B9FFB0)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18B9FAB0)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_D7479E4643ED2BBA_OFFSET UNITYSDK_OFFSET(0x18BA0140)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18B9FED0)
#define CLASS_1_21F040C614C6E2FE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18BA0050)
#define CLASS_1_21F040C614C6E2FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BA04F0)

inline static constexpr unsigned int Class_1_21F040C614C6E2FE_TypeDefinitionIndex = 11980;

class Class_1_21F040C614C6E2FE : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21F040C614C6E2FE_TypeDefinitionIndex)->GetStaticField(0x23E10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21F040C614C6E2FE_TypeDefinitionIndex)->GetStaticField(0x23E18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21F040C614C6E2FE_TypeDefinitionIndex)->GetStaticField(0x23E20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21F040C614C6E2FE_TypeDefinitionIndex)->GetStaticField(0x9430);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_21F040C614C6E2FE_TypeDefinitionIndex)->GetStaticField(0x9431);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>* Method_1_69830AD8B649D20E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_69830AD8B649D20E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*> Method_1_8BEE271C7165A03B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamVoiceAtlasBindingRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_8BEE271C7165A03B_OFFSET))();
	}

	static ::RPG::GameCore::TeamVoiceAtlasBindingRow* Method_1_2E7DF79235D8FD7A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::TeamVoiceAtlasBindingRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_2E7DF79235D8FD7A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D7479E4643ED2BBA(::RPG::GameCore::TeamVoiceAtlasBindingRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamVoiceAtlasBindingRow*))((::PBYTE)hIl2Cpp + CLASS_1_21F040C614C6E2FE_METHOD_1_D7479E4643ED2BBA_OFFSET))(a1);
	}
};
