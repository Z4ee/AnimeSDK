#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TakenMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E6B84C379AA50A02_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C6DF90)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_1_OFFSET UNITYSDK_OFFSET(0x10C6E650)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x10C6E520)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x10C6E5A0)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x10C6E6D0)
#define CLASS_2_E6B84C379AA50A02_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x10C6E720)
#define CLASS_2_E6B84C379AA50A02_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C6E0F0)
#define CLASS_2_E6B84C379AA50A02_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C6E470)
#define CLASS_2_E6B84C379AA50A02_TICK_OFFSET UNITYSDK_OFFSET(0x10C6E4C0)
#define CLASS_2_E6B84C379AA50A02__CTOR_OFFSET UNITYSDK_OFFSET(0x10C6DE70)

inline static constexpr unsigned int Class_2_E6B84C379AA50A02_TypeDefinitionIndex = 49846;

class Class_2_E6B84C379AA50A02 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::RPG::GameCore::TakenMazePuzzleChallenge* Field_2_3; // 0x30
	::RPG::GameCore::PropComponent* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x50
	::System::UInt32 Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_39845204DD04FC33_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E6B84C379AA50A02_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
