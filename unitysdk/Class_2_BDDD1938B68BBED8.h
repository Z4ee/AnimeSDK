#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class ShowGroupChallengeSelectPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BDDD1938B68BBED8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1783B730)
#define CLASS_2_BDDD1938B68BBED8_METHOD_2_C7C402E704FC0E28_OFFSET UNITYSDK_OFFSET(0x1783BCA0)
#define CLASS_2_BDDD1938B68BBED8_METHOD_2_C7C512AC553191BF_OFFSET UNITYSDK_OFFSET(0x1783BE10)
#define CLASS_2_BDDD1938B68BBED8_METHOD_2_FBCDDF7B6BFEFA65_OFFSET UNITYSDK_OFFSET(0x1783BEF0)
#define CLASS_2_BDDD1938B68BBED8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1783B770)
#define CLASS_2_BDDD1938B68BBED8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1783BBF0)
#define CLASS_2_BDDD1938B68BBED8_TICK_OFFSET UNITYSDK_OFFSET(0x1783BC40)
#define CLASS_2_BDDD1938B68BBED8__CTOR_OFFSET UNITYSDK_OFFSET(0x1783B720)
#define CLASS_2_BDDD1938B68BBED8__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1783C140)
#define CLASS_2_BDDD1938B68BBED8__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0x1783C320)

inline static constexpr unsigned int Class_2_BDDD1938B68BBED8_TypeDefinitionIndex = 53528;

class Class_2_BDDD1938B68BBED8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowGroupChallengeSelectPage* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGroupChallengeSelectPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGroupChallengeSelectPage*))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_TICK_OFFSET))(this, a1);
	}

	::RPG::Client::ChallengeGroupData* Method_2_C7C402E704FC0E28()
	{
		return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_METHOD_2_C7C402E704FC0E28_OFFSET))(this);
	}

	::RPG::Client::ChallengeGroupData* Method_2_C7C512AC553191BF()
	{
		return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_METHOD_2_C7C512AC553191BF_OFFSET))(this);
	}

	::RPG::Client::ChallengeGroupData* Method_2_FBCDDF7B6BFEFA65()
	{
		return ((::RPG::Client::ChallengeGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8_METHOD_2_FBCDDF7B6BFEFA65_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8__ONTASKBEGIN_B__2_0_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDDD1938B68BBED8__ONTASKBEGIN_B__2_1_OFFSET))(this);
	}
};
