#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_55150D564CCC46D3;
namespace RPG::GameCore { class ShowFrameCaptureUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_10257F933C6677A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A43E0)
#define CLASS_2_10257F933C6677A3_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x99A47E0)
#define CLASS_2_10257F933C6677A3_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x99A46A0)
#define CLASS_2_10257F933C6677A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x99A4420)
#define CLASS_2_10257F933C6677A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x99A4920)
#define CLASS_2_10257F933C6677A3_TICK_OFFSET UNITYSDK_OFFSET(0x99A4970)
#define CLASS_2_10257F933C6677A3__CTOR_OFFSET UNITYSDK_OFFSET(0x99A43D0)

inline static constexpr unsigned int Class_2_10257F933C6677A3_TypeDefinitionIndex = 52036;

class Class_2_10257F933C6677A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowFrameCaptureUI* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_2_55150D564CCC46D3* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFrameCaptureUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFrameCaptureUI*))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
