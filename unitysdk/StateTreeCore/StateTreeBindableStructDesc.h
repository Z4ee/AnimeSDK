#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeBindableStructSource.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA770E0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_COPYCREATE_OFFSET UNITYSDK_OFFSET(0xA770B0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6F3C10)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0xA77000)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x5D9030)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0xA76FA0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0xA771B0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0xA770E0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_MOVECREATE_OFFSET UNITYSDK_OFFSET(0xA770B0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_RESET_OFFSET UNITYSDK_OFFSET(0xA77110)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA76F90)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEBINDABLESTRUCTDESC__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0xA770E0)
#define STATETREECORE_STATETREEBINDABLESTRUCTDESC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F3F10)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeBindableStructDesc_TypeDefinitionIndex = 30996;

	struct alignas(4) StateTreeBindableStructDesc
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(StateTreeBindableStructDesc_TypeDefinitionIndex)->GetStaticField(0x257F0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x7FA0E2E1; // 0x0
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> Struct; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::StateTreeCore::StateTreeDataHandle DataHandle; // 0x1C
		::StateTreeCore::StateTreeBindableStructSource DataSource; // 0x22

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_TOSTRING_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeBindableStructDesc Create()
		{
			return ((::StateTreeCore::StateTreeBindableStructDesc(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_CREATE_OFFSET))();
		}

		::StateTreeCore::StateTreeBindableStructDesc DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeBindableStructDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeBindableStructDesc CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeBindableStructDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_COPYCREATE_OFFSET))(this, allocator);
		}

		::StateTreeCore::StateTreeBindableStructDesc MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::StateTreeCore::StateTreeBindableStructDesc(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::StateTreeCore::StateTreeBindableStructDesc& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeBindableStructDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::StateTreeCore::StateTreeBindableStructDesc& temp)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeBindableStructDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_StateTreeCore_StateTreeBindableStructDesc__CopyAssign(::StateTreeCore::StateTreeBindableStructDesc& other)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeBindableStructDesc&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEBINDABLESTRUCTDESC_UNREALTYPES_ISTRUCT_STATETREECORE_STATETREEBINDABLESTRUCTDESC__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
