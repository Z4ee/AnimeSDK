#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class PropPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_9CC50C43B28D17EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C01810)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_1_OFFSET UNITYSDK_OFFSET(0x10C01E50)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_2_OFFSET UNITYSDK_OFFSET(0x10C022C0)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_OFFSET UNITYSDK_OFFSET(0x10C01C00)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_7D602A72F2676500_OFFSET UNITYSDK_OFFSET(0x10C01910)
#define CLASS_2_9CC50C43B28D17EA_METHOD_2_945F238D47794E60_OFFSET UNITYSDK_OFFSET(0x10C020A0)
#define CLASS_2_9CC50C43B28D17EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C01210)
#define CLASS_2_9CC50C43B28D17EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C01540)
#define CLASS_2_9CC50C43B28D17EA_TICK_OFFSET UNITYSDK_OFFSET(0x10C02510)
#define CLASS_2_9CC50C43B28D17EA__CTOR_OFFSET UNITYSDK_OFFSET(0x10C00FD0)

inline static constexpr unsigned int Class_2_9CC50C43B28D17EA_TypeDefinitionIndex = 47075;

class Class_2_9CC50C43B28D17EA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropPuzzleEventListener* Field_2_1; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_8; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x30
	::Class_3_5775A4FEC79026BC* Field_2_10; // 0x38
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x48
	::System::Boolean Field_2_5; // 0x50
	::System::Boolean Field_2_11; // 0x51
	::System::Boolean Field_2_3; // 0x52
	::System::Boolean Field_2_7; // 0x53
	::System::Boolean Field_2_9; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7D602A72F2676500(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_7D602A72F2676500_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_945F238D47794E60(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_945F238D47794E60_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A9FC03815CA1EC0_2(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_METHOD_2_6A9FC03815CA1EC0_2_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9CC50C43B28D17EA_TICK_OFFSET))(this, a1);
	}
};
