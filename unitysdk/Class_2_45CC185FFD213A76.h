#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowDreamLandPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_45CC185FFD213A76_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18DC3AC0)
#define CLASS_2_45CC185FFD213A76_METHOD_2_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x18DC3B50)
#define CLASS_2_45CC185FFD213A76_METHOD_2_89EF21CA0414B145_OFFSET UNITYSDK_OFFSET(0x18DC3DC0)
#define CLASS_2_45CC185FFD213A76_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DC3B00)
#define CLASS_2_45CC185FFD213A76_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DC3D10)
#define CLASS_2_45CC185FFD213A76_TICK_OFFSET UNITYSDK_OFFSET(0x18DC3D60)
#define CLASS_2_45CC185FFD213A76__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC3AB0)

inline static constexpr unsigned int Class_2_45CC185FFD213A76_TypeDefinitionIndex = 56008;

class Class_2_45CC185FFD213A76 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowDreamLandPage* Field_2_0; // 0x18
	::RPG::Client::LuaUIController* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowDreamLandPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowDreamLandPage*))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_METHOD_2_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_2_89EF21CA0414B145()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_45CC185FFD213A76_METHOD_2_89EF21CA0414B145_OFFSET))(this);
	}
};
