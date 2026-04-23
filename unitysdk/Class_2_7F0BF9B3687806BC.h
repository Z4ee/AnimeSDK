#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueDLC1Dot3DiceRotate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7F0BF9B3687806BC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96BC3D0)
#define CLASS_2_7F0BF9B3687806BC_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x96BC610)
#define CLASS_2_7F0BF9B3687806BC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96BC4C0)
#define CLASS_2_7F0BF9B3687806BC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96BC570)
#define CLASS_2_7F0BF9B3687806BC_TICK_OFFSET UNITYSDK_OFFSET(0x96BC460)
#define CLASS_2_7F0BF9B3687806BC__CTOR_OFFSET UNITYSDK_OFFSET(0x96BC3C0)

inline static constexpr unsigned int Class_2_7F0BF9B3687806BC_TypeDefinitionIndex = 53889;

class Class_2_7F0BF9B3687806BC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RogueDLC1Dot3DiceRotate* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3DiceRotate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3DiceRotate*))((::PBYTE)hIl2Cpp + CLASS_2_7F0BF9B3687806BC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F0BF9B3687806BC_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7F0BF9B3687806BC_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F0BF9B3687806BC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F0BF9B3687806BC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7F0BF9B3687806BC_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
