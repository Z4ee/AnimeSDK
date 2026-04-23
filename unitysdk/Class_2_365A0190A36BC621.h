#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFightActivityLose; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_365A0190A36BC621_DISPOSE_OFFSET UNITYSDK_OFFSET(0x999C110)
#define CLASS_2_365A0190A36BC621_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x999C1A0)
#define CLASS_2_365A0190A36BC621_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x999C3F0)
#define CLASS_2_365A0190A36BC621_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x999C150)
#define CLASS_2_365A0190A36BC621_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x999C340)
#define CLASS_2_365A0190A36BC621_TICK_OFFSET UNITYSDK_OFFSET(0x999C390)
#define CLASS_2_365A0190A36BC621__CTOR_OFFSET UNITYSDK_OFFSET(0x999C100)

inline static constexpr unsigned int Class_2_365A0190A36BC621_TypeDefinitionIndex = 54068;

class Class_2_365A0190A36BC621 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowFightActivityLose* Field_2_0; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFightActivityLose* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFightActivityLose*))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
