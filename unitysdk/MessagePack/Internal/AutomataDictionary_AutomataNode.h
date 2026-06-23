#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D34BA10)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET UNITYSDK_OFFSET(0x1D34B7E0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_BINARYSEARCH_OFFSET UNITYSDK_OFFSET(0x1D34BC10)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D34BC90)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET UNITYSDK_OFFSET(0x1D34BDB0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET UNITYSDK_OFFSET(0x1D34BCC0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D34B7A0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_SEARCHNEXT_OFFSET UNITYSDK_OFFSET(0x1D34BA40)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1D34B590)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D34B7B0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode_TypeDefinitionIndex = 29675;

	class AutomataDictionary_AutomataNode : public ::System::Object
	{
	public:
		::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* nexts; // 0x10
		::Il2CppArray<::System::UInt64>* nextKeys; // 0x18
		::System::String* OriginalKey; // 0x20
		::System::Int32 Value; // 0x28
		::System::Int32 count; // 0x2C
		::System::UInt64 Key; // 0x30

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

		::MessagePack::Internal::AutomataDictionary_AutomataNode* SearchNext(::System::ReadOnlySpan_1<::System::Byte>& value)
		{
			return ((::MessagePack::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_SEARCHNEXT_OFFSET))(this, value);
		}

		static ::System::Int32 BinarySearch(::Il2CppArray<::System::UInt64>* array, ::System::Int32 index, ::System::Int32 length, ::System::UInt64 value)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt64>*, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_BINARYSEARCH_OFFSET))(array, index, length, value);
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
