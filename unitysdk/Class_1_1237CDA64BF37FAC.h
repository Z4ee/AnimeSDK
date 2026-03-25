#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StateBroadcastPermissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1237CDA64BF37FAC_METHOD_1_02154205C7F6E0A0_OFFSET UNITYSDK_OFFSET(0x17717AC0)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x177183B0)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_11855C175955DB55_OFFSET UNITYSDK_OFFSET(0x17717DF0)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x177181D0)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17717B40)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17718270)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17717D90)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_D44385C1DFE9370C_OFFSET UNITYSDK_OFFSET(0x17718400)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_DCBB61787A83E4C1_OFFSET UNITYSDK_OFFSET(0x17717FA0)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17718190)
#define CLASS_1_1237CDA64BF37FAC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17718310)
#define CLASS_1_1237CDA64BF37FAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x17718760)

inline static constexpr unsigned int Class_1_1237CDA64BF37FAC_TypeDefinitionIndex = 12215;

class Class_1_1237CDA64BF37FAC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1237CDA64BF37FAC_TypeDefinitionIndex)->GetStaticField(0x1FED0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1237CDA64BF37FAC_TypeDefinitionIndex)->GetStaticField(0x1FED8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1237CDA64BF37FAC_TypeDefinitionIndex)->GetStaticField(0x1FEE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1237CDA64BF37FAC_TypeDefinitionIndex)->GetStaticField(0x8620);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1237CDA64BF37FAC_TypeDefinitionIndex)->GetStaticField(0x8621);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>* Method_1_02154205C7F6E0A0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_02154205C7F6E0A0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*> Method_1_11855C175955DB55()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StateBroadcastPermissionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_11855C175955DB55_OFFSET))();
	}

	static ::RPG::GameCore::StateBroadcastPermissionRow* Method_1_DCBB61787A83E4C1(::System::String* a1)
	{
		return ((::RPG::GameCore::StateBroadcastPermissionRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_DCBB61787A83E4C1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D44385C1DFE9370C(::RPG::GameCore::StateBroadcastPermissionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StateBroadcastPermissionRow*))((::PBYTE)hIl2Cpp + CLASS_1_1237CDA64BF37FAC_METHOD_1_D44385C1DFE9370C_OFFSET))(a1);
	}
};
