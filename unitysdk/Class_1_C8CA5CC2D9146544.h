#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C8CA5CC2D9146544_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16AEE410)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_0DA2151AB24A90F0_OFFSET UNITYSDK_OFFSET(0x16AEDB00)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_1D0B95835AC2CAFD_OFFSET UNITYSDK_OFFSET(0x16AEDE30)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16AEE230)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_50064E92860B5C34_OFFSET UNITYSDK_OFFSET(0x16AEE460)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16AEDB80)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_73CF74F49D45B0A4_OFFSET UNITYSDK_OFFSET(0x16AEDFE0)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16AEE2D0)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16AEDDD0)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16AEE1F0)
#define CLASS_1_C8CA5CC2D9146544_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16AEE370)
#define CLASS_1_C8CA5CC2D9146544__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AEE810)

inline static constexpr unsigned int Class_1_C8CA5CC2D9146544_TypeDefinitionIndex = 12514;

class Class_1_C8CA5CC2D9146544 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8CA5CC2D9146544_TypeDefinitionIndex)->GetStaticField(0x27370);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8CA5CC2D9146544_TypeDefinitionIndex)->GetStaticField(0x27378);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8CA5CC2D9146544_TypeDefinitionIndex)->GetStaticField(0x27380);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8CA5CC2D9146544_TypeDefinitionIndex)->GetStaticField(0xCCF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8CA5CC2D9146544_TypeDefinitionIndex)->GetStaticField(0xCCF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>* Method_1_0DA2151AB24A90F0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_0DA2151AB24A90F0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*> Method_1_1D0B95835AC2CAFD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_1D0B95835AC2CAFD_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* Method_1_73CF74F49D45B0A4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_73CF74F49D45B0A4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_50064E92860B5C34(::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C8CA5CC2D9146544_METHOD_1_50064E92860B5C34_OFFSET))(a1);
	}
};
