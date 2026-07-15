#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingGameBoyRankingsNPCRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7CBA9336664D3FAD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B5891D0)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_1D1EEADC8A709961_OFFSET UNITYSDK_OFFSET(0x1B589220)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B589000)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_9A76E689615758B5_OFFSET UNITYSDK_OFFSET(0x1B5889B0)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B589090)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_C1BA9DDBEB9EC7C2_OFFSET UNITYSDK_OFFSET(0x1B588E30)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B588C60)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B588A30)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_ED3EF0E38CEDBF2A_OFFSET UNITYSDK_OFFSET(0x1B588CC0)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B588FC0)
#define CLASS_1_7CBA9336664D3FAD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B589130)
#define CLASS_1_7CBA9336664D3FAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B589590)

inline static constexpr unsigned int Class_1_7CBA9336664D3FAD_TypeDefinitionIndex = 13586;

class Class_1_7CBA9336664D3FAD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CBA9336664D3FAD_TypeDefinitionIndex)->GetStaticField(0x9670);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CBA9336664D3FAD_TypeDefinitionIndex)->GetStaticField(0x9678);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CBA9336664D3FAD_TypeDefinitionIndex)->GetStaticField(0x9680);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CBA9336664D3FAD_TypeDefinitionIndex)->GetStaticField(0x38A0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CBA9336664D3FAD_TypeDefinitionIndex)->GetStaticField(0x38A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>* Method_1_9A76E689615758B5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_9A76E689615758B5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*> Method_1_ED3EF0E38CEDBF2A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_ED3EF0E38CEDBF2A_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* Method_1_C1BA9DDBEB9EC7C2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_C1BA9DDBEB9EC7C2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1D1EEADC8A709961(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingGameBoyRankingsNPCRow*))((::PBYTE)hIl2Cpp + CLASS_1_7CBA9336664D3FAD_METHOD_1_1D1EEADC8A709961_OFFSET))(a1);
	}
};
