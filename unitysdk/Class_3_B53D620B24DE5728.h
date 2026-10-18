#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_7.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class ParallelCompleteConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B53D620B24DE5728_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3380E0)
#define CLASS_3_B53D620B24DE5728_METHOD_3_329BA301E8E94AD7_OFFSET UNITYSDK_OFFSET(0xB338650)
#define CLASS_3_B53D620B24DE5728_METHOD_3_3FAAA518D3F433CC_OFFSET UNITYSDK_OFFSET(0xB3382E0)
#define CLASS_3_B53D620B24DE5728_METHOD_3_6F9327CC95B79F2B_OFFSET UNITYSDK_OFFSET(0xB337EB0)
#define CLASS_3_B53D620B24DE5728_METHOD_3_9D115FD159B833A3_OFFSET UNITYSDK_OFFSET(0xB338760)
#define CLASS_3_B53D620B24DE5728_METHOD_3_F2ACC5B1FFC4D55A_OFFSET UNITYSDK_OFFSET(0xB338DF0)
#define CLASS_3_B53D620B24DE5728_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB338240)
#define CLASS_3_B53D620B24DE5728_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB338290)
#define CLASS_3_B53D620B24DE5728_TICK_OFFSET UNITYSDK_OFFSET(0xB3385C0)
#define CLASS_3_B53D620B24DE5728__CTOR_OFFSET UNITYSDK_OFFSET(0xB337E90)

inline static constexpr unsigned int Class_3_B53D620B24DE5728_TypeDefinitionIndex = 54764;

class Class_3_B53D620B24DE5728 : public ::Class_2_A48F3719AA1CF200_7
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* ECMFFNPIHGD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ParallelCompleteConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskContext* Method_3_F2ACC5B1FFC4D55A()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_METHOD_3_F2ACC5B1FFC4D55A_OFFSET))(this);
	}

	::System::Void Method_3_6F9327CC95B79F2B(::RPG::GameCore::ParallelCompleteConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ParallelCompleteConfig*))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_METHOD_3_6F9327CC95B79F2B_OFFSET))(this, a1);
	}

	::System::Void Method_3_9D115FD159B833A3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_METHOD_3_9D115FD159B833A3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_329BA301E8E94AD7(::RPG::GameCore::TaskState& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskState&))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_METHOD_3_329BA301E8E94AD7_OFFSET))(this, a1);
	}

	::System::Void Method_3_3FAAA518D3F433CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B53D620B24DE5728_METHOD_3_3FAAA518D3F433CC_OFFSET))(this);
	}
};
