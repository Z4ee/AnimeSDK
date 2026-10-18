#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB48B890)
#define CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501___C__CREATESORTED_B__4_0_OFFSET UNITYSDK_OFFSET(0xB48B8E0)
#define CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB48B8D0)

inline static constexpr unsigned int Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501___c_TypeDefinitionIndex = 79428;

class Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501___c : public ::System::Object
{
public:
	static ::Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501___c** StaticGet___9()
	{
		return (::Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501___c_TypeDefinitionIndex)->GetStaticField(0x6EF70);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__4_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2EC118B78FC4216B_Class_1_C0552FC9D9674501___c_TypeDefinitionIndex)->GetStaticField(0x6EF78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> _CreateSorted_b__4_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_CLASS_1_C0552FC9D9674501___C__CREATESORTED_B__4_0_OFFSET))(this, a1);
	}
};
