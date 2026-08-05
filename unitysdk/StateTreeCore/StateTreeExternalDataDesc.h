#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataRequirement.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEEXTERNALDATADESC_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xAC6460)
#define STATETREECORE_STATETREEEXTERNALDATADESC_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xAD1E80)
#define STATETREECORE_STATETREEEXTERNALDATADESC_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC26C00)
#define STATETREECORE_STATETREEEXTERNALDATADESC_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xAD1DC0)
#define STATETREECORE_STATETREEEXTERNALDATADESC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x296F30)
#define STATETREECORE_STATETREEEXTERNALDATADESC_EQUALS_OFFSET UNITYSDK_OFFSET(0xAD1C90)
#define STATETREECORE_STATETREEEXTERNALDATADESC_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xAD1D60)
#define STATETREECORE_STATETREEEXTERNALDATADESC_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xAD1F80)
#define STATETREECORE_STATETREEEXTERNALDATADESC_ISCOMPATIBLEWITH_OFFSET UNITYSDK_OFFSET(0xAD1B70)
#define STATETREECORE_STATETREEEXTERNALDATADESC_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xAC6460)
#define STATETREECORE_STATETREEEXTERNALDATADESC_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xAD1E80)
#define STATETREECORE_STATETREEEXTERNALDATADESC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC26A00)
#define STATETREECORE_STATETREEEXTERNALDATADESC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1FC26AD0)
#define STATETREECORE_STATETREEEXTERNALDATADESC_RESET_OFFSET UNITYSDK_OFFSET(0xAD1EB0)
#define STATETREECORE_STATETREEEXTERNALDATADESC_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXTERNALDATADESC__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xAC6460)
#define STATETREECORE_STATETREEEXTERNALDATADESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC26F40)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeExternalDataDesc_TypeDefinitionIndex = 31544;

	struct alignas(4) StateTreeExternalDataDesc
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeExternalDataDesc_TypeDefinitionIndex)->GetStaticField(0x26D40);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x3F515800; // 0x0
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> Struct; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::StateTreeCore::StateTreeExternalDataHandle Handle; // 0x1C
		::StateTreeCore::StateTreeExternalDataRequirement Requirement; // 0x22

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC__CCTOR_OFFSET))();
		}

		/*
		::System::Boolean IsCompatibleWith(::StateTreeCore::StateTreeDataView dataView)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_ISCOMPATIBLEWITH_OFFSET))(this, dataView);
		}
		*/

		::System::Boolean Equals(::StateTreeCore::StateTreeExternalDataDesc other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataDesc))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreeExternalDataDesc& lhs, ::StateTreeCore::StateTreeExternalDataDesc& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeExternalDataDesc&, ::StateTreeCore::StateTreeExternalDataDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreeExternalDataDesc& lhs, ::StateTreeCore::StateTreeExternalDataDesc& rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeExternalDataDesc&, ::StateTreeCore::StateTreeExternalDataDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeExternalDataDesc Create()
		{
			return ((::StateTreeCore::StateTreeExternalDataDesc(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeExternalDataDesc DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExternalDataDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExternalDataDesc CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExternalDataDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeExternalDataDesc MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeExternalDataDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeExternalDataDesc& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeExternalDataDesc& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeExternalDataDesc__CopyAssign(::StateTreeCore::StateTreeExternalDataDesc& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeExternalDataDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEEXTERNALDATADESC_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEEXTERNALDATADESC__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
