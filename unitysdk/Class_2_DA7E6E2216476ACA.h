#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterGameFlowImmediately; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_DA7E6E2216476ACA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1237A6D0)
#define CLASS_2_DA7E6E2216476ACA_METHOD_2_B87988632FFA47F5_OFFSET UNITYSDK_OFFSET(0x1237A410)
#define CLASS_2_DA7E6E2216476ACA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1237A360)
#define CLASS_2_DA7E6E2216476ACA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1237A620)
#define CLASS_2_DA7E6E2216476ACA_TICK_OFFSET UNITYSDK_OFFSET(0x1237A670)
#define CLASS_2_DA7E6E2216476ACA__CTOR_OFFSET UNITYSDK_OFFSET(0x1237A350)

inline static constexpr unsigned int Class_2_DA7E6E2216476ACA_TypeDefinitionIndex = 53604;

class Class_2_DA7E6E2216476ACA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnterGameFlowImmediately* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterGameFlowImmediately* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterGameFlowImmediately*))((::PBYTE)hIl2Cpp + CLASS_2_DA7E6E2216476ACA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA7E6E2216476ACA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA7E6E2216476ACA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DA7E6E2216476ACA_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA7E6E2216476ACA_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_2_B87988632FFA47F5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA7E6E2216476ACA_METHOD_2_B87988632FFA47F5_OFFSET))(this);
	}
};
