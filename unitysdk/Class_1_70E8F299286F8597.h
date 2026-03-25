#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicLayerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_70E8F299286F8597_METHOD_1_07140E0244E9B559_OFFSET UNITYSDK_OFFSET(0x16EE0D70)
#define CLASS_1_70E8F299286F8597_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16EE1160)
#define CLASS_1_70E8F299286F8597_METHOD_1_15F127201D20F68D_OFFSET UNITYSDK_OFFSET(0x16EE11B0)
#define CLASS_1_70E8F299286F8597_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EE0F80)
#define CLASS_1_70E8F299286F8597_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EE0910)
#define CLASS_1_70E8F299286F8597_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EE1020)
#define CLASS_1_70E8F299286F8597_METHOD_1_ADDC4B3F67652A08_OFFSET UNITYSDK_OFFSET(0x16EE0BC0)
#define CLASS_1_70E8F299286F8597_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EE0B60)
#define CLASS_1_70E8F299286F8597_METHOD_1_EE0F1340BBFC5D5F_OFFSET UNITYSDK_OFFSET(0x16EE0890)
#define CLASS_1_70E8F299286F8597_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EE0F40)
#define CLASS_1_70E8F299286F8597_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EE10C0)
#define CLASS_1_70E8F299286F8597__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EE1510)

inline static constexpr unsigned int Class_1_70E8F299286F8597_TypeDefinitionIndex = 13586;

class Class_1_70E8F299286F8597 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70E8F299286F8597_TypeDefinitionIndex)->GetStaticField(0x2D3E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70E8F299286F8597_TypeDefinitionIndex)->GetStaticField(0x2D3E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70E8F299286F8597_TypeDefinitionIndex)->GetStaticField(0x2D3F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70E8F299286F8597_TypeDefinitionIndex)->GetStaticField(0xF130);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70E8F299286F8597_TypeDefinitionIndex)->GetStaticField(0xF131);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRow*>* Method_1_EE0F1340BBFC5D5F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_EE0F1340BBFC5D5F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRow*> Method_1_ADDC4B3F67652A08()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_ADDC4B3F67652A08_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicLayerRow* Method_1_07140E0244E9B559(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicLayerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_07140E0244E9B559_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_15F127201D20F68D(::RPG::GameCore::RogueMagicLayerRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicLayerRow*))((::PBYTE)hIl2Cpp + CLASS_1_70E8F299286F8597_METHOD_1_15F127201D20F68D_OFFSET))(a1);
	}
};
