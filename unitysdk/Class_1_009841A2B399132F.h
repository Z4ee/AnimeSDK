#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicWorkbenchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_009841A2B399132F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18300A30)
#define CLASS_1_009841A2B399132F_METHOD_1_0A5D93673E4BD371_OFFSET UNITYSDK_OFFSET(0x18300640)
#define CLASS_1_009841A2B399132F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18300850)
#define CLASS_1_009841A2B399132F_METHOD_1_3110DC3253B60CB5_OFFSET UNITYSDK_OFFSET(0x18300A80)
#define CLASS_1_009841A2B399132F_METHOD_1_3BEE980C3E427D47_OFFSET UNITYSDK_OFFSET(0x18300160)
#define CLASS_1_009841A2B399132F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183001E0)
#define CLASS_1_009841A2B399132F_METHOD_1_8B9F00FF0B9E59B8_OFFSET UNITYSDK_OFFSET(0x18300490)
#define CLASS_1_009841A2B399132F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183008F0)
#define CLASS_1_009841A2B399132F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18300430)
#define CLASS_1_009841A2B399132F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18300810)
#define CLASS_1_009841A2B399132F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18300990)
#define CLASS_1_009841A2B399132F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18300DE0)

inline static constexpr unsigned int Class_1_009841A2B399132F_TypeDefinitionIndex = 14074;

class Class_1_009841A2B399132F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x25830);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x25838);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x25840);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x9D40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x9D41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>* Method_1_3BEE980C3E427D47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_3BEE980C3E427D47_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*> Method_1_8B9F00FF0B9E59B8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_8B9F00FF0B9E59B8_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicWorkbenchRow* Method_1_0A5D93673E4BD371(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicWorkbenchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_0A5D93673E4BD371_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3110DC3253B60CB5(::RPG::GameCore::RogueMagicWorkbenchRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicWorkbenchRow*))((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_3110DC3253B60CB5_OFFSET))(a1);
	}
};
