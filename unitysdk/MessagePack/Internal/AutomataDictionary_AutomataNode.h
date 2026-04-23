#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1733D480)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET UNITYSDK_OFFSET(0x1733D4B0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1733EC30)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET UNITYSDK_OFFSET(0x1733EE70)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET UNITYSDK_OFFSET(0x1733DFB0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x1733EC20)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1733D8A0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1733D040)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode_TypeDefinitionIndex = 9333;

	class AutomataDictionary_AutomataNode : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt64>* nextKeys; // 0x10
		::System::String* OriginalKey; // 0x18
		::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* nexts; // 0x20
		::System::UInt64 Key; // 0x28
		::System::Int32 count; // 0x30
		::System::Int32 Value; // 0x34

		::System::Void _ctor(::System::UInt64 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET))(this, key);
		}

		::System::Boolean get_HasChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET))(this);
		}

		::MessagePack::Internal::AutomataDictionary_AutomataNode* Add(::System::UInt64 key)
		{
			return ((::MessagePack::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET))(this, key);
		}

		::MessagePack::Internal::AutomataDictionary_AutomataNode* Add_1(::System::UInt64 key, ::System::Int32 value, ::System::String* originalKey)
		{
			return ((::MessagePack::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET))(this, key, value, originalKey);
		}

		::System::Int32 CompareTo(::MessagePack::Internal::AutomataDictionary_AutomataNode* other)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET))(this, other);
		}

		::System::Collections::Generic::IEnumerable_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* YieldChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET))(this);
		}

		::System::Void EmitSearchNext(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* bytesSpan, ::System::Reflection::Emit::LocalBuilder* key, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* onFound, ::System::Action* onNotFound)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET))(this, il, bytesSpan, key, onFound, onNotFound);
		}

		static ::System::Void EmitSearchNextCore(::System::Reflection::Emit::ILGenerator* il, ::System::Reflection::Emit::LocalBuilder* bytesSpan, ::System::Reflection::Emit::LocalBuilder* key, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* onFound, ::System::Action* onNotFound, ::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* nexts, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*, ::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET))(il, bytesSpan, key, onFound, onNotFound, nexts, count);
		}
	};
}
