#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowMuseumPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_17113158531A530F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111892C0)
#define CLASS_2_17113158531A530F_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x111893F0)
#define CLASS_2_17113158531A530F_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11189750)
#define CLASS_2_17113158531A530F_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x111897B0)
#define CLASS_2_17113158531A530F_METHOD_2_A088A6C0EFC42F07_OFFSET UNITYSDK_OFFSET(0x11189660)
#define CLASS_2_17113158531A530F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11189350)
#define CLASS_2_17113158531A530F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111895B0)
#define CLASS_2_17113158531A530F_TICK_OFFSET UNITYSDK_OFFSET(0x11189600)
#define CLASS_2_17113158531A530F__CTOR_OFFSET UNITYSDK_OFFSET(0x111892B0)

inline static constexpr unsigned int Class_2_17113158531A530F_TypeDefinitionIndex = 47356;

class Class_2_17113158531A530F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowMuseumPage* Field_2_0; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowMuseumPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowMuseumPage*))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_A088A6C0EFC42F07(::RPG::Client::LuaUIController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_METHOD_2_A088A6C0EFC42F07_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_17113158531A530F_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
