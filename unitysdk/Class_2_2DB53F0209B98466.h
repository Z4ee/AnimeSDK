#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_4;
namespace RPG::GameCore { class GridFightShowFullScreenCutIn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2DB53F0209B98466_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1995F890)
#define CLASS_2_2DB53F0209B98466_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x1995F370)
#define CLASS_2_2DB53F0209B98466_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1995F3C0)
#define CLASS_2_2DB53F0209B98466_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1995F7E0)
#define CLASS_2_2DB53F0209B98466_TICK_OFFSET UNITYSDK_OFFSET(0x1995F830)
#define CLASS_2_2DB53F0209B98466__CTOR_OFFSET UNITYSDK_OFFSET(0x1995F360)
#define CLASS_2_2DB53F0209B98466__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1995F8E0)

inline static constexpr unsigned int Class_2_2DB53F0209B98466_TypeDefinitionIndex = 58295;

class Class_2_2DB53F0209B98466 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GridFightShowFullScreenCutIn* OFKGLJOAMLD; // 0x20
	::Class_2_A48F3719AA1CF200_4* JLMAKNFAEBH; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightShowFullScreenCutIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightShowFullScreenCutIn*))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_4*))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466_DISPOSE_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DB53F0209B98466__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
