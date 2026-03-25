#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SaveCharacterState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_C3D280D728AC79D5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11169EE0)
#define CLASS_2_C3D280D728AC79D5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11169F20)
#define CLASS_2_C3D280D728AC79D5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1116A170)
#define CLASS_2_C3D280D728AC79D5_TICK_OFFSET UNITYSDK_OFFSET(0x1116A1C0)
#define CLASS_2_C3D280D728AC79D5__CTOR_OFFSET UNITYSDK_OFFSET(0x11169ED0)

inline static constexpr unsigned int Class_2_C3D280D728AC79D5_TypeDefinitionIndex = 44300;

class Class_2_C3D280D728AC79D5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SaveCharacterState* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SaveCharacterState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SaveCharacterState*))((::PBYTE)hIl2Cpp + CLASS_2_C3D280D728AC79D5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D280D728AC79D5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D280D728AC79D5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3D280D728AC79D5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C3D280D728AC79D5_TICK_OFFSET))(this, a1);
	}
};
