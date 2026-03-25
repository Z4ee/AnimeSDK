#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_07A210D994F284D8_3;
class Class_1_2CAAA2FDF9170110;
class Class_1_E6272F143FEEC786;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParallelTaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5A519139824A431D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC4C7C0)
#define CLASS_2_5A519139824A431D_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xAC4C8A0)
#define CLASS_2_5A519139824A431D_METHOD_2_372E41FA4A171DFD_OFFSET UNITYSDK_OFFSET(0xAC4DD60)
#define CLASS_2_5A519139824A431D_METHOD_2_A59C1BC1CD30E8D5_OFFSET UNITYSDK_OFFSET(0xAC4E0E0)
#define CLASS_2_5A519139824A431D_METHOD_2_D4FAD9DF8A6E1E94_OFFSET UNITYSDK_OFFSET(0xAC4E1E0)
#define CLASS_2_5A519139824A431D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC4E2F0)
#define CLASS_2_5A519139824A431D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC4CA30)
#define CLASS_2_5A519139824A431D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAC4DDD0)
#define CLASS_2_5A519139824A431D_TICK_OFFSET UNITYSDK_OFFSET(0xAC4DF90)
#define CLASS_2_5A519139824A431D__CTOR_OFFSET UNITYSDK_OFFSET(0xAC4C6C0)
#define CLASS_2_5A519139824A431D___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET UNITYSDK_OFFSET(0xAC4E300)

inline static constexpr unsigned int Class_2_5A519139824A431D_TypeDefinitionIndex = 44666;

class Class_2_5A519139824A431D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_2CAAA2FDF9170110* Field_2_2; // 0x18
	::RPG::GameCore::TriggerParallelTaskListTemplate* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_1_07A210D994F284D8_3* Field_2_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_3; // 0x38
	::System::Collections::Generic::List_1<::Class_1_E6272F143FEEC786*>* Field_2_4; // 0x40
	::RPG::GameCore::FixPoint Field_2_5; // 0x48
	::RPG::GameCore::FixPoint Field_2_7; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A59C1BC1CD30E8D5(::System::Single a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_A59C1BC1CD30E8D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D4FAD9DF8A6E1E94()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_D4FAD9DF8A6E1E94_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_372E41FA4A171DFD(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_372E41FA4A171DFD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_E6272F143FEEC786* __RunTemplates_g___SortAndGetNextTemplate_5_0(::RPG::GameCore::FixPoint fTargetTS)
	{
		return ((::Class_1_E6272F143FEEC786*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET))(this, fTargetTS);
	}
};
