#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowHipplenBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1E6B6AF2D5F19933_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B045B0)
#define CLASS_2_1E6B6AF2D5F19933_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B046A0)
#define CLASS_2_1E6B6AF2D5F19933_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B041F0)
#define CLASS_2_1E6B6AF2D5F19933_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B045F0)
#define CLASS_2_1E6B6AF2D5F19933_TICK_OFFSET UNITYSDK_OFFSET(0x15B04640)
#define CLASS_2_1E6B6AF2D5F19933__CTOR_OFFSET UNITYSDK_OFFSET(0x15B041E0)

inline static constexpr unsigned int Class_2_1E6B6AF2D5F19933_TypeDefinitionIndex = 52581;

class Class_2_1E6B6AF2D5F19933 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowHipplenBubbleTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHipplenBubbleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHipplenBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_1E6B6AF2D5F19933__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E6B6AF2D5F19933_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E6B6AF2D5F19933_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E6B6AF2D5F19933_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1E6B6AF2D5F19933_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E6B6AF2D5F19933_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
