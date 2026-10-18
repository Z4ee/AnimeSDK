#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_123;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_94D2A2B428FD1804___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F171C0)
#define CLASS_1_94D2A2B428FD1804___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F17200)
#define CLASS_1_94D2A2B428FD1804___C___CREATEREQUIREINFOS_B__26_0_OFFSET UNITYSDK_OFFSET(0x15F17210)
#define CLASS_1_94D2A2B428FD1804___C___CREATEREQUIREINFOS_B__26_2_OFFSET UNITYSDK_OFFSET(0x15F17220)

inline static constexpr unsigned int Class_1_94D2A2B428FD1804___c_TypeDefinitionIndex = 79671;

class Class_1_94D2A2B428FD1804___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::Boolean>** StaticGet___9__26_2()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_123*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94D2A2B428FD1804___c_TypeDefinitionIndex)->GetStaticField(0x578A0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__26_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94D2A2B428FD1804___c_TypeDefinitionIndex)->GetStaticField(0x578A8);
	}
	static ::Class_1_94D2A2B428FD1804___c** StaticGet___9()
	{
		return (::Class_1_94D2A2B428FD1804___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94D2A2B428FD1804___c_TypeDefinitionIndex)->GetStaticField(0x578B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94D2A2B428FD1804___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94D2A2B428FD1804___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __CreateRequireInfos_b__26_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_94D2A2B428FD1804___C___CREATEREQUIREINFOS_B__26_0_OFFSET))(this, a1);
	}

	::System::Boolean __CreateRequireInfos_b__26_2(::Class_0_16E4307DCC419505_123* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_123*))((::PBYTE)hIl2Cpp + CLASS_1_94D2A2B428FD1804___C___CREATEREQUIREINFOS_B__26_2_OFFSET))(this, a1);
	}
};
