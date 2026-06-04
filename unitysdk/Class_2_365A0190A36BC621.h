#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFightActivityLose; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_365A0190A36BC621_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139D5860)
#define CLASS_2_365A0190A36BC621_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x139D58F0)
#define CLASS_2_365A0190A36BC621_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x139D5B40)
#define CLASS_2_365A0190A36BC621_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x139D58A0)
#define CLASS_2_365A0190A36BC621_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x139D5A90)
#define CLASS_2_365A0190A36BC621_TICK_OFFSET UNITYSDK_OFFSET(0x139D5AE0)
#define CLASS_2_365A0190A36BC621__CTOR_OFFSET UNITYSDK_OFFSET(0x139D5850)

inline static constexpr unsigned int Class_2_365A0190A36BC621_TypeDefinitionIndex = 54794;

class Class_2_365A0190A36BC621 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::ShowFightActivityLose* Field_2_2; // 0x28

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

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_365A0190A36BC621_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
