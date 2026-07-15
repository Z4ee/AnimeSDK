#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5C34FDAF2CB731CC;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_E7453BEE76EFCB54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179D74D0)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_06195BB8ADD83F53_OFFSET UNITYSDK_OFFSET(0x179D7EB0)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_32A0F0D67191776E_OFFSET UNITYSDK_OFFSET(0x179D7C00)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_3D6C2F1BABF9FFA3_OFFSET UNITYSDK_OFFSET(0x179D8120)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_66E0DCAA2F3A9DC3_OFFSET UNITYSDK_OFFSET(0x179D7AC0)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_722FECBC05E21CB6_OFFSET UNITYSDK_OFFSET(0x179D7520)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x179D88E0)
#define CLASS_1_E7453BEE76EFCB54_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x179D8090)
#define CLASS_1_E7453BEE76EFCB54__CTOR_OFFSET UNITYSDK_OFFSET(0x179D7430)

inline static constexpr unsigned int Class_1_E7453BEE76EFCB54_TypeDefinitionIndex = 58160;

class Class_1_E7453BEE76EFCB54 : public ::System::Object
{
public:
	::RPG::Client::MapDef* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5C34FDAF2CB731CC*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::Client::MapDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_722FECBC05E21CB6(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_722FECBC05E21CB6_OFFSET))(this, a1);
	}

	::System::Void Method_1_32A0F0D67191776E(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_32A0F0D67191776E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_06195BB8ADD83F53(::RPG::Client::MapNpc* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_06195BB8ADD83F53_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Void Method_1_3D6C2F1BABF9FFA3(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_3D6C2F1BABF9FFA3_OFFSET))(a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Boolean Method_1_66E0DCAA2F3A9DC3(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_1_E7453BEE76EFCB54_METHOD_1_66E0DCAA2F3A9DC3_OFFSET))(this, a1);
	}
};
