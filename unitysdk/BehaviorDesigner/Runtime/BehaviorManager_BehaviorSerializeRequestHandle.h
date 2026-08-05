#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0xAA6FD0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA7020)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F523DB0)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0xAA6F60)
#define BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAA7030)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int BehaviorManager_BehaviorSerializeRequestHandle_TypeDefinitionIndex = 33856;

	struct alignas(4) BehaviorManager_BehaviorSerializeRequestHandle
	{
		static ::System::UInt32* StaticGet_IDG()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_BehaviorSerializeRequestHandle_TypeDefinitionIndex)->GetStaticField(0x8210);
		}
		static ::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle* StaticGet_EmptyHandle()
		{
			return (::BehaviorDesigner::Runtime::BehaviorManager_BehaviorSerializeRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(BehaviorManager_BehaviorSerializeRequestHandle_TypeDefinitionIndex)->GetStaticField(0x8214);
		}
		::System::UInt32 HandleID; // 0x10
		::System::UInt32 EntityID; // 0x14

		::System::Void _ctor(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE__CTOR_OFFSET))(this, entityID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_BEHAVIORMANAGER_BEHAVIORSERIALIZEREQUESTHANDLE___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
