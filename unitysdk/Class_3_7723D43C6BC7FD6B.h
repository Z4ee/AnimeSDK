#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BB5C2228DBF7AE1F.h"

namespace RPG::GameCore { class GridFightWaitDragRole; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_BD6A3C745D127D79_OFFSET UNITYSDK_OFFSET(0xEB83B90)
#define CLASS_3_7723D43C6BC7FD6B_METHOD_3_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0xEB834F0)
#define CLASS_3_7723D43C6BC7FD6B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB83610)
#define CLASS_3_7723D43C6BC7FD6B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEB83AF0)
#define CLASS_3_7723D43C6BC7FD6B__CTOR_OFFSET UNITYSDK_OFFSET(0xEB834E0)

inline static constexpr unsigned int Class_3_7723D43C6BC7FD6B_TypeDefinitionIndex = 53592;

class Class_3_7723D43C6BC7FD6B : public ::Class_2_BB5C2228DBF7AE1F
{
public:
	::RPG::GameCore::GridFightWaitDragRole* IGHAHBNLIJA; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragRole* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragRole*))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_METHOD_3_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_BD6A3C745D127D79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_7723D43C6BC7FD6B_METHOD_3_BD6A3C745D127D79_OFFSET))(this, a1);
	}
};
