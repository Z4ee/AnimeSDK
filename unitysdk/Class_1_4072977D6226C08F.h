#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookCharacterLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4072977D6226C08F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1914AC20)
#define CLASS_1_4072977D6226C08F_METHOD_1_438F70CD8BBDCBB0_OFFSET UNITYSDK_OFFSET(0x1914B100)
#define CLASS_1_4072977D6226C08F_METHOD_1_5D12F50EE1575A37_OFFSET UNITYSDK_OFFSET(0x1914B020)
#define CLASS_1_4072977D6226C08F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1914AA50)
#define CLASS_1_4072977D6226C08F_METHOD_1_9D8A43635A0984F5_OFFSET UNITYSDK_OFFSET(0x1914AC70)
#define CLASS_1_4072977D6226C08F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1914AAE0)
#define CLASS_1_4072977D6226C08F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1914B0A0)
#define CLASS_1_4072977D6226C08F_METHOD_1_D1F4B7B95E386FB0_OFFSET UNITYSDK_OFFSET(0x1914B270)
#define CLASS_1_4072977D6226C08F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1914A820)
#define CLASS_1_4072977D6226C08F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1914A7E0)
#define CLASS_1_4072977D6226C08F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1914AB80)
#define CLASS_1_4072977D6226C08F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1914B440)

inline static constexpr unsigned int Class_1_4072977D6226C08F_TypeDefinitionIndex = 14492;

class Class_1_4072977D6226C08F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4072977D6226C08F_TypeDefinitionIndex)->GetStaticField(0x49B20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4072977D6226C08F_TypeDefinitionIndex)->GetStaticField(0x49B28);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4072977D6226C08F_TypeDefinitionIndex)->GetStaticField(0x49B30);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4072977D6226C08F_TypeDefinitionIndex)->GetStaticField(0xDC90);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4072977D6226C08F_TypeDefinitionIndex)->GetStaticField(0xDC91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9D8A43635A0984F5(::RPG::GameCore::TarotBookCharacterLevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotBookCharacterLevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_9D8A43635A0984F5_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>* Method_1_5D12F50EE1575A37()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_5D12F50EE1575A37_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*> Method_1_438F70CD8BBDCBB0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCharacterLevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_438F70CD8BBDCBB0_OFFSET))();
	}

	static ::RPG::GameCore::TarotBookCharacterLevelRow* Method_1_D1F4B7B95E386FB0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::TarotBookCharacterLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4072977D6226C08F_METHOD_1_D1F4B7B95E386FB0_OFFSET))(a1, a2);
	}
};
