#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class ShowGroupChallengeSelectPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BDDD1938B68BBED8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144E8DB0)
#define CLASS_2_BDDD1938B68BBED8_METHOD_2_C7C402E704FC0E28_OFFSET UNITYSDK_OFFSET(0x144E9270)
#define CLASS_2_BDDD1938B68BBED8_METHOD_2_C7C512AC553191BF_OFFSET UNITYSDK_OFFSET(0x144E93E0)
#define CLASS_2_BDDD1938B68BBED8_METHOD_2_FBCDDF7B6BFEFA65_OFFSET UNITYSDK_OFFSET(0x144E94C0)
#define CLASS_2_BDDD1938B68BBED8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x144E8DF0)
#define CLASS_2_BDDD1938B68BBED8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x144E91C0)
#define CLASS_2_BDDD1938B68BBED8_TICK_OFFSET UNITYSDK_OFFSET(0x144E9210)
#define CLASS_2_BDDD1938B68BBED8__CTOR_OFFSET UNITYSDK_OFFSET(0x144E8DA0)
#define CLASS_2_BDDD1938B68BBED8__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x144E9710)
#define CLASS_2_BDDD1938B68BBED8__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0x144E98F0)

inline static constexpr unsigned int Class_2_BDDD1938B68BBED8_TypeDefinitionIndex = 49790;

class Class_2_BDDD1938B68BBED8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowGroupChallengeSelectPage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
