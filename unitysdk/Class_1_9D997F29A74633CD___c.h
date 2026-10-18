#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_9D997F29A74633CD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C510D50)
#define CLASS_1_9D997F29A74633CD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C510D90)
#define CLASS_1_9D997F29A74633CD___C__DETERMINEPRODUCTTRAITS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C510DA0)
#define CLASS_1_9D997F29A74633CD___C__DETERMINEPRODUCTTRAITS_B__6_2_OFFSET UNITYSDK_OFFSET(0x1C510DB0)

inline static constexpr unsigned int Class_1_9D997F29A74633CD___c_TypeDefinitionIndex = 41740;

class Class_1_9D997F29A74633CD___c : public ::System::Object
{
public:
	static ::Class_1_9D997F29A74633CD___c** StaticGet___9()
	{
		return (::Class_1_9D997F29A74633CD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D997F29A74633CD___c_TypeDefinitionIndex)->GetStaticField(0x1F9B0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__6_2()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D997F29A74633CD___c_TypeDefinitionIndex)->GetStaticField(0x1F9B8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__6_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9D997F29A74633CD___c_TypeDefinitionIndex)->GetStaticField(0x1F9C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType _DetermineProductTraits_b__6_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD___C__DETERMINEPRODUCTTRAITS_B__6_1_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftChipTraitType _DetermineProductTraits_b__6_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32> a1)
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD___C__DETERMINEPRODUCTTRAITS_B__6_2_OFFSET))(this, a1);
	}
};
