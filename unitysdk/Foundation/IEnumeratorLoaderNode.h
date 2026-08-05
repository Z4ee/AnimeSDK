#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/LoaderNodeStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOUNDATION_IENUMERATORLOADERNODE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1D59A3D0)
#define FOUNDATION_IENUMERATORLOADERNODE_DEPENDENCYSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D59A5B0)
#define FOUNDATION_IENUMERATORLOADERNODE_EXECUTEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D59A7B0)
#define FOUNDATION_IENUMERATORLOADERNODE_GET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D599FA0)
#define FOUNDATION_IENUMERATORLOADERNODE_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1D599F60)
#define FOUNDATION_IENUMERATORLOADERNODE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D599F50)
#define FOUNDATION_IENUMERATORLOADERNODE_GET_PENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1D599F80)
#define FOUNDATION_IENUMERATORLOADERNODE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D599F30)
#define FOUNDATION_IENUMERATORLOADERNODE_INTERNALSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D59A520)
#define FOUNDATION_IENUMERATORLOADERNODE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1D599FD0)
#define FOUNDATION_IENUMERATORLOADERNODE_SET_EXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D599FB0)
#define FOUNDATION_IENUMERATORLOADERNODE_SET_FLAG_OFFSET UNITYSDK_OFFSET(0x1D599F70)
#define FOUNDATION_IENUMERATORLOADERNODE_SET_PENDINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1D599F90)
#define FOUNDATION_IENUMERATORLOADERNODE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D599F40)
#define FOUNDATION_IENUMERATORLOADERNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D59A3C0)
#define FOUNDATION_IENUMERATORLOADERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D599FC0)
#define FOUNDATION_IENUMERATORLOADERNODE__SETDATA_B__25_2_OFFSET UNITYSDK_OFFSET(0x1D59AB50)

namespace Foundation
{
	inline static constexpr unsigned int IEnumeratorLoaderNode_TypeDefinitionIndex = 8452;

	class IEnumeratorLoaderNode : public ::System::Object
	{
	public:
		::System::Predicate_1<::Foundation::IEnumeratorLoaderNode*>* MoveNextCond; // 0x10
		::System::Action* WrapperFunc; // 0x18
		::System::Collections::IEnumerator* iEnumeratorFunc; // 0x20
		::System::Collections::Generic::HashSet_1<::Foundation::IEnumeratorLoaderNode*>* dependencies; // 0x28
		::System::Action_1<::Foundation::IEnumeratorLoaderNode*>* OnLoaderNodeStatusChange; // 0x30
		::System::String* _Flag_k__BackingField; // 0x38
		::System::Exception* _Exception_k__BackingField; // 0x40
		::Foundation::LoaderNodeStatus _Status_k__BackingField; // 0x48
		::System::Int32 _PendingCount_k__BackingField; // 0x4C

		::System::Void _ctor(::System::Collections::IEnumerator* iEnumeratorFunc, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* dependencies)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE__CTOR_OFFSET))(this, iEnumeratorFunc, dependencies);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE__CTOR_1_OFFSET))(this);
		}

		::Foundation::LoaderNodeStatus get_Status()
		{
			return ((::Foundation::LoaderNodeStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Foundation::LoaderNodeStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::LoaderNodeStatus))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::String* get_Flag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_GET_FLAG_OFFSET))(this);
		}

		::System::Void set_Flag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_SET_FLAG_OFFSET))(this, value);
		}

		::System::Int32 get_PendingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_GET_PENDINGCOUNT_OFFSET))(this);
		}

		::System::Void set_PendingCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_SET_PENDINGCOUNT_OFFSET))(this, value);
		}

		::System::Exception* get_Exception()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_GET_EXCEPTION_OFFSET))(this);
		}

		::System::Void set_Exception(::System::Exception* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_SET_EXCEPTION_OFFSET))(this, value);
		}

		::Foundation::IEnumeratorLoaderNode* SetData(::System::Collections::IEnumerator* iEnumeratorFunc, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* dependencies)
		{
			return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::System::Collections::IEnumerator*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_SETDATA_OFFSET))(this, iEnumeratorFunc, dependencies);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void InternalStatusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_INTERNALSTATUSCHANGE_OFFSET))(this);
		}

		::System::Void DependencyStatusChange(::Foundation::IEnumeratorLoaderNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_DEPENDENCYSTATUSCHANGE_OFFSET))(this, node);
		}

		::System::Boolean ExecuteMoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE_EXECUTEMOVENEXT_OFFSET))(this);
		}

		::System::Void _SetData_b__25_2(::Foundation::IEnumeratorLoaderNode* denpenNode)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::IEnumeratorLoaderNode*))((::PBYTE)hIl2Cpp + FOUNDATION_IENUMERATORLOADERNODE__SETDATA_B__25_2_OFFSET))(this, denpenNode);
		}
	};
}
