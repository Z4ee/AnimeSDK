#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_425;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropPuzzleCustomEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CC9ECD4B78E7C597_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B666F0)
#define CLASS_2_CC9ECD4B78E7C597_METHOD_2_3AE9FC82795B5062_OFFSET UNITYSDK_OFFSET(0x18B667D0)
#define CLASS_2_CC9ECD4B78E7C597_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18B664C0)
#define CLASS_2_CC9ECD4B78E7C597_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18B665E0)
#define CLASS_2_CC9ECD4B78E7C597_TICK_OFFSET UNITYSDK_OFFSET(0x18B66AC0)
#define CLASS_2_CC9ECD4B78E7C597__CTOR_OFFSET UNITYSDK_OFFSET(0x18B66430)

inline static constexpr unsigned int Class_2_CC9ECD4B78E7C597_TypeDefinitionIndex = 55754;

class Class_2_CC9ECD4B78E7C597 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropPuzzleCustomEventListener* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleCustomEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleCustomEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_CC9ECD4B78E7C597__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9ECD4B78E7C597_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9ECD4B78E7C597_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9ECD4B78E7C597_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3AE9FC82795B5062(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_2_CC9ECD4B78E7C597_METHOD_2_3AE9FC82795B5062_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC9ECD4B78E7C597_TICK_OFFSET))(this, a1);
	}
};
