#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_878BD064B338A110_FailReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUINodeOpen; }
namespace UnityEngine { class Transform; }

#define CLASS_2_878BD064B338A110_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1117BCB0)
#define CLASS_2_878BD064B338A110_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1117C2D0)
#define CLASS_2_878BD064B338A110_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x1117C380)
#define CLASS_2_878BD064B338A110_METHOD_2_616710126FE6F057_OFFSET UNITYSDK_OFFSET(0x1117C0B0)
#define CLASS_2_878BD064B338A110_METHOD_2_6840422FF09CDD6D_OFFSET UNITYSDK_OFFSET(0x1117CBC0)
#define CLASS_2_878BD064B338A110_METHOD_2_6D8A00FBFCEC72A4_OFFSET UNITYSDK_OFFSET(0x1117C480)
#define CLASS_2_878BD064B338A110_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x1117CB20)
#define CLASS_2_878BD064B338A110_METHOD_2_BAB12C449C617935_OFFSET UNITYSDK_OFFSET(0x1117C550)
#define CLASS_2_878BD064B338A110_METHOD_2_C5D1FBEC331BB4CB_OFFSET UNITYSDK_OFFSET(0x1117C940)
#define CLASS_2_878BD064B338A110_METHOD_2_C768887115A30002_OFFSET UNITYSDK_OFFSET(0x1117C850)
#define CLASS_2_878BD064B338A110_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1117CC10)
#define CLASS_2_878BD064B338A110_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1117BCF0)
#define CLASS_2_878BD064B338A110_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1117BD90)
#define CLASS_2_878BD064B338A110_TICK_OFFSET UNITYSDK_OFFSET(0x1117BDE0)
#define CLASS_2_878BD064B338A110__CTOR_OFFSET UNITYSDK_OFFSET(0x1117BCA0)

inline static constexpr unsigned int Class_2_878BD064B338A110_TypeDefinitionIndex = 54349;

class Class_2_878BD064B338A110 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x18
	::RPG::GameCore::WaitUINodeOpen* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_5; // 0x34
	::System::Boolean Field_2_6; // 0x44
	::Class_2_878BD064B338A110_FailReason Field_2_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUINodeOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUINodeOpen*))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_616710126FE6F057(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_616710126FE6F057_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_2_6D8A00FBFCEC72A4(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_6D8A00FBFCEC72A4_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BAB12C449C617935(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_BAB12C449C617935_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C768887115A30002(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_C768887115A30002_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C5D1FBEC331BB4CB(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_C5D1FBEC331BB4CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6840422FF09CDD6D(::Class_2_878BD064B338A110_FailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_878BD064B338A110_FailReason))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_6840422FF09CDD6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_878BD064B338A110_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}
};
