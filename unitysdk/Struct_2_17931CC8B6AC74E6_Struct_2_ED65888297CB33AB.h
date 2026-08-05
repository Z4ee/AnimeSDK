#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }

#define STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB_GET_ISBOUND_OFFSET UNITYSDK_OFFSET(0x4ED2C0)
#define STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB_METHOD_2_FB56E5B1E7C118EE_OFFSET UNITYSDK_OFFSET(0x881A30)
#define STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET UNITYSDK_OFFSET(0x881970)
#define STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_17931CC8B6AC74E6_Struct_2_ED65888297CB33AB_TypeDefinitionIndex = 63958;

struct alignas(4) Struct_2_17931CC8B6AC74E6_Struct_2_ED65888297CB33AB
{
	::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> Field_2_0; // 0x10

	::System::Void _ctor(::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>))((::PBYTE)hIl2Cpp + STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean get_IsBound()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB_GET_ISBOUND_OFFSET))(this);
	}

	/*
	::System::Boolean StateTreeCore_IExternalDataCollector_CollectExternalData(::StateTreeCore::StateTreeExecutionContext& a1, ::StateTreeCore::StateTree& a2, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> a3, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB_STATETREECORE_IEXTERNALDATACOLLECTOR_COLLECTEXTERNALDATA_OFFSET))(this, a1, a2, a3, a4);
	}
	*/

	/*
	::System::Boolean Method_2_FB56E5B1E7C118EE(::StateTreeCore::StateTreeExecutionContext& a1, ::StateTreeCore::StateTree& a2, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc> a3, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView> a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTree&, ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreeExternalDataDesc>, ::UnrealTypes::NativeListView_1<::StateTreeCore::StateTreeDataView>))((::PBYTE)hIl2Cpp + STRUCT_2_17931CC8B6AC74E6_STRUCT_2_ED65888297CB33AB_METHOD_2_FB56E5B1E7C118EE_OFFSET))(this, a1, a2, a3, a4);
	}
	*/
};
