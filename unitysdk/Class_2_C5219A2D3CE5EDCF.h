#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryShowFateEntranceUI; }
namespace System { class Exception; }

#define CLASS_2_C5219A2D3CE5EDCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10670DC0)
#define CLASS_2_C5219A2D3CE5EDCF_METHOD_2_9BA3CFF3EBCB9273_OFFSET UNITYSDK_OFFSET(0x10671170)
#define CLASS_2_C5219A2D3CE5EDCF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10671110)
#define CLASS_2_C5219A2D3CE5EDCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10670E60)
#define CLASS_2_C5219A2D3CE5EDCF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x106710C0)
#define CLASS_2_C5219A2D3CE5EDCF_TICK_OFFSET UNITYSDK_OFFSET(0x10670E00)
#define CLASS_2_C5219A2D3CE5EDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x10670DB0)
#define CLASS_2_C5219A2D3CE5EDCF__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x106711F0)
#define CLASS_2_C5219A2D3CE5EDCF__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0x10671250)

inline static constexpr unsigned int Class_2_C5219A2D3CE5EDCF_TypeDefinitionIndex = 47483;

class Class_2_C5219A2D3CE5EDCF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryShowFateEntranceUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryShowFateEntranceUI*))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_9BA3CFF3EBCB9273(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF_METHOD_2_9BA3CFF3EBCB9273_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__3_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF__ONTASKBEGIN_B__3_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__3_1(::System::Exception* ex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_2_C5219A2D3CE5EDCF__ONTASKBEGIN_B__3_1_OFFSET))(this, ex);
	}
};
