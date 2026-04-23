#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TakenMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_A3E0D567AD4F43DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118DB0D0)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_1_OFFSET UNITYSDK_OFFSET(0x118DB740)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_OFFSET UNITYSDK_OFFSET(0x118DB600)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x118DB680)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x118DB7C0)
#define CLASS_2_A3E0D567AD4F43DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x118DB810)
#define CLASS_2_A3E0D567AD4F43DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118DB1E0)
#define CLASS_2_A3E0D567AD4F43DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118DB550)
#define CLASS_2_A3E0D567AD4F43DD_TICK_OFFSET UNITYSDK_OFFSET(0x118DB5A0)
#define CLASS_2_A3E0D567AD4F43DD__CTOR_OFFSET UNITYSDK_OFFSET(0x118DAFE0)

inline static constexpr unsigned int Class_2_A3E0D567AD4F43DD_TypeDefinitionIndex = 49179;

class Class_2_A3E0D567AD4F43DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30
	::RPG::GameCore::PropComponent* Field_2_7; // 0x38
	::RPG::GameCore::TakenMazePuzzleChallenge* Field_2_0; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x50
	::System::UInt32 Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_OFFSET))(this, a1);
	}

	::System::Void Method_2_39845204DD04FC33_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_39845204DD04FC33_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A3E0D567AD4F43DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
