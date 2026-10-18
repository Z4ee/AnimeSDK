#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupUnload; }

#define CLASS_2_76E8DB619092DE9B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA5E5D0)
#define CLASS_2_76E8DB619092DE9B_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xBA5E910)
#define CLASS_2_76E8DB619092DE9B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA5E860)
#define CLASS_2_76E8DB619092DE9B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA5E760)
#define CLASS_2_76E8DB619092DE9B_TICK_OFFSET UNITYSDK_OFFSET(0xBA5E800)
#define CLASS_2_76E8DB619092DE9B__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5E440)

inline static constexpr unsigned int Class_2_76E8DB619092DE9B_TypeDefinitionIndex = 53476;

class Class_2_76E8DB619092DE9B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitGroupUnload* IGHAHBNLIJA; // 0x20
	::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x28
	::Class_3_07C3C4D2990C49EE* CMBMMHOONBK; // 0x30
	::System::UInt32 PEEFHNHDBMF; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupUnload* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupUnload*))((::PBYTE)hIl2Cpp + CLASS_2_76E8DB619092DE9B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76E8DB619092DE9B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76E8DB619092DE9B_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76E8DB619092DE9B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76E8DB619092DE9B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76E8DB619092DE9B_METHOD_2_0865E94460F11643_OFFSET))(this);
	}
};
