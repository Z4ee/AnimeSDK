#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BattlePlayTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_B61FBE0C476B14D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118538A0)
#define CLASS_2_B61FBE0C476B14D7_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11853AA0)
#define CLASS_2_B61FBE0C476B14D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11853940)
#define CLASS_2_B61FBE0C476B14D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x118539F0)
#define CLASS_2_B61FBE0C476B14D7_TICK_OFFSET UNITYSDK_OFFSET(0x11853A40)
#define CLASS_2_B61FBE0C476B14D7__CTOR_OFFSET UNITYSDK_OFFSET(0x11853890)

inline static constexpr unsigned int Class_2_B61FBE0C476B14D7_TypeDefinitionIndex = 46731;

class Class_2_B61FBE0C476B14D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::BattlePlayTalk* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePlayTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePlayTalk*))((::PBYTE)hIl2Cpp + CLASS_2_B61FBE0C476B14D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61FBE0C476B14D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61FBE0C476B14D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B61FBE0C476B14D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B61FBE0C476B14D7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B61FBE0C476B14D7_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
