#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2F7D3F79D8FB3786___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB238B10)
#define CLASS_1_2F7D3F79D8FB3786___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB238B50)
#define CLASS_1_2F7D3F79D8FB3786___C__GET_REQUIREDATTRIBUTELEVELS_B__7_0_OFFSET UNITYSDK_OFFSET(0xB238B60)

inline static constexpr unsigned int Class_1_2F7D3F79D8FB3786___c_TypeDefinitionIndex = 80146;

class Class_1_2F7D3F79D8FB3786___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F7D3F79D8FB3786___c_TypeDefinitionIndex)->GetStaticField(0x1D5E0);
	}
	static ::Class_1_2F7D3F79D8FB3786___c** StaticGet___9()
	{
		return (::Class_1_2F7D3F79D8FB3786___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F7D3F79D8FB3786___c_TypeDefinitionIndex)->GetStaticField(0x1D5E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F7D3F79D8FB3786___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F7D3F79D8FB3786___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> _get_RequiredAttributeLevels_b__7_0(::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32> a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Enum_3_96F6662CA3713095, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2F7D3F79D8FB3786___C__GET_REQUIREDATTRIBUTELEVELS_B__7_0_OFFSET))(this, a1);
	}
};
