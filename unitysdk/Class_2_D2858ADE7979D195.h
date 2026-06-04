#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_2_A48F3719AA1CF200_5;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForTurnEnd; }

#define CLASS_2_D2858ADE7979D195_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7D25D0)
#define CLASS_2_D2858ADE7979D195_METHOD_2_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0xD7D2800)
#define CLASS_2_D2858ADE7979D195_METHOD_2_54DC8E44CB0235C2_OFFSET UNITYSDK_OFFSET(0xD7D2B10)
#define CLASS_2_D2858ADE7979D195_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0xD7D2AC0)
#define CLASS_2_D2858ADE7979D195_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xD7D2620)
#define CLASS_2_D2858ADE7979D195_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD7D2A30)
#define CLASS_2_D2858ADE7979D195_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7D2700)
#define CLASS_2_D2858ADE7979D195_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD7D28E0)
#define CLASS_2_D2858ADE7979D195_TICK_OFFSET UNITYSDK_OFFSET(0xD7D2930)
#define CLASS_2_D2858ADE7979D195__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D25C0)

inline static constexpr unsigned int Class_2_D2858ADE7979D195_TypeDefinitionIndex = 55027;

class Class_2_D2858ADE7979D195 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitForTurnEnd* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForTurnEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForTurnEnd*))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_5*))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_METHOD_2_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_54DC8E44CB0235C2(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_METHOD_2_54DC8E44CB0235C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2858ADE7979D195_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
