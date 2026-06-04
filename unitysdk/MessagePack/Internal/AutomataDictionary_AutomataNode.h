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

#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1814B8E0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET UNITYSDK_OFFSET(0x1814B910)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1814D000)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET UNITYSDK_OFFSET(0x1814D240)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET UNITYSDK_OFFSET(0x1814C380)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0x1814CFF0)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET UNITYSDK_OFFSET(0x1814BC90)
#define MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1814B480)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int AutomataDictionary_AutomataNode_TypeDefinitionIndex = 7236;

	class AutomataDictionary_AutomataNode : public ::System::Object
	{
	public:
		::System::String* OriginalKey; // 0x10
		::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* nexts; // 0x18
		::Il2CppArray<::System::UInt64>* nextKeys; // 0x20
		::System::UInt64 Key; // 0x28
		::System::Int32 count; // 0x30
		::System::Int32 Value; // 0x34

		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasChildren()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_GET_HASCHILDREN_OFFSET))(this);
		}

		::MessagePack::Internal::AutomataDictionary_AutomataNode* Add(::System::UInt64 a1)
		{
			return ((::MessagePack::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_OFFSET))(this, a1);
		}

		::MessagePack::Internal::AutomataDictionary_AutomataNode* Add_1(::System::UInt64 a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::MessagePack::Internal::AutomataDictionary_AutomataNode*(*)(::PVOID, ::System::UInt64, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_ADD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CompareTo(::MessagePack::Internal::AutomataDictionary_AutomataNode* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MessagePack::Internal::AutomataDictionary_AutomataNode*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* YieldChildren()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MessagePack::Internal::AutomataDictionary_AutomataNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_YIELDCHILDREN_OFFSET))(this);
		}

		::System::Void EmitSearchNext(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::Emit::LocalBuilder* a2, ::System::Reflection::Emit::LocalBuilder* a3, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void EmitSearchNextCore(::System::Reflection::Emit::ILGenerator* a1, ::System::Reflection::Emit::LocalBuilder* a2, ::System::Reflection::Emit::LocalBuilder* a3, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* a4, ::System::Action* a5, ::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>* a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::System::Reflection::Emit::ILGenerator*, ::System::Reflection::Emit::LocalBuilder*, ::System::Reflection::Emit::LocalBuilder*, ::System::Action_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*, ::System::Action*, ::Il2CppArray<::MessagePack::Internal::AutomataDictionary_AutomataNode*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_AUTOMATADICTIONARY_AUTOMATANODE_EMITSEARCHNEXTCORE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
