#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterGameFlow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_5D6FBA676D6D03F1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15625C80)
#define CLASS_2_5D6FBA676D6D03F1_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15625CC0)
#define CLASS_2_5D6FBA676D6D03F1_METHOD_2_B82DC6B34437802C_OFFSET UNITYSDK_OFFSET(0x156259B0)
#define CLASS_2_5D6FBA676D6D03F1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15625780)
#define CLASS_2_5D6FBA676D6D03F1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15625BD0)
#define CLASS_2_5D6FBA676D6D03F1_TICK_OFFSET UNITYSDK_OFFSET(0x15625C20)
#define CLASS_2_5D6FBA676D6D03F1__CTOR_OFFSET UNITYSDK_OFFSET(0x15625770)

inline static constexpr unsigned int Class_2_5D6FBA676D6D03F1_TypeDefinitionIndex = 58272;

class Class_2_5D6FBA676D6D03F1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::EnterGameFlow* OFKGLJOAMLD; // 0x20
	::System::UInt32 MGLEPKGFODH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterGameFlow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_2_B82DC6B34437802C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D6FBA676D6D03F1_METHOD_2_B82DC6B34437802C_OFFSET))(this);
	}
};
