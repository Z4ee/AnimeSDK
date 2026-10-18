#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_3745C69C00F04B7D_4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3169D66921C02213___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC192220)
#define CLASS_1_3169D66921C02213___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC192260)
#define CLASS_1_3169D66921C02213___C__GET_ATTRIBUTEVALUES_B__35_0_OFFSET UNITYSDK_OFFSET(0xC192290)
#define CLASS_1_3169D66921C02213___C__GET_SHAPE_B__32_0_OFFSET UNITYSDK_OFFSET(0xC192270)

inline static constexpr unsigned int Class_1_3169D66921C02213___c_TypeDefinitionIndex = 80090;

class Class_1_3169D66921C02213___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_3745C69C00F04B7D_4*, ::UnityEngine::Vector2Int>** StaticGet___9__32_0()
	{
		return (::System::Func_2<::Class_1_3745C69C00F04B7D_4*, ::UnityEngine::Vector2Int>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3169D66921C02213___c_TypeDefinitionIndex)->GetStaticField(0x1FF0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3169D66921C02213___c_TypeDefinitionIndex)->GetStaticField(0x1FF8);
	}
	static ::Class_1_3169D66921C02213___c** StaticGet___9()
	{
		return (::Class_1_3169D66921C02213___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3169D66921C02213___c_TypeDefinitionIndex)->GetStaticField(0x2000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3169D66921C02213___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3169D66921C02213___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2Int _get_Shape_b__32_0(::Class_1_3745C69C00F04B7D_4* a1)
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID, ::Class_1_3745C69C00F04B7D_4*))((::PBYTE)hIl2Cpp + CLASS_1_3169D66921C02213___C__GET_SHAPE_B__32_0_OFFSET))(this, a1);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> _get_AttributeValues_b__35_0(::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32> a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_3169D66921C02213___C__GET_ATTRIBUTEVALUES_B__35_0_OFFSET))(this, a1);
	}
};
