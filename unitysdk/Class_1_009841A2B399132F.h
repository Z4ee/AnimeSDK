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

#define CLASS_1_009841A2B399132F_METHOD_1_03CCBFCF7BBF8CC4_OFFSET UNITYSDK_OFFSET(0x1B302370)
#define CLASS_1_009841A2B399132F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B302880)
#define CLASS_1_009841A2B399132F_METHOD_1_3110DC3253B60CB5_OFFSET UNITYSDK_OFFSET(0x1B3028D0)
#define CLASS_1_009841A2B399132F_METHOD_1_3BEE980C3E427D47_OFFSET UNITYSDK_OFFSET(0x1B302060)
#define CLASS_1_009841A2B399132F_METHOD_1_7FBF45577408BADE_OFFSET UNITYSDK_OFFSET(0x1B3024E0)
#define CLASS_1_009841A2B399132F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3026B0)
#define CLASS_1_009841A2B399132F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B302740)
#define CLASS_1_009841A2B399132F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B302310)
#define CLASS_1_009841A2B399132F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3020E0)
#define CLASS_1_009841A2B399132F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B302670)
#define CLASS_1_009841A2B399132F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3027E0)
#define CLASS_1_009841A2B399132F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B302C40)

inline static constexpr unsigned int Class_1_009841A2B399132F_TypeDefinitionIndex = 14286;

class Class_1_009841A2B399132F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x4E700);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x4E708);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0x4E710);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0xE0A0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_009841A2B399132F_TypeDefinitionIndex)->GetStaticField(0xE0A1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*> Method_1_03CCBFCF7BBF8CC4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicWorkbenchRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_03CCBFCF7BBF8CC4_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicWorkbenchRow* Method_1_7FBF45577408BADE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicWorkbenchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_7FBF45577408BADE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_009841A2B399132F_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
