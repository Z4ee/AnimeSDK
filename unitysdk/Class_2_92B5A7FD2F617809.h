#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateOrigamiByPropStateChange; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_92B5A7FD2F617809_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11648B70)
#define CLASS_2_92B5A7FD2F617809_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x116491B0)
#define CLASS_2_92B5A7FD2F617809_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x11649320)
#define CLASS_2_92B5A7FD2F617809_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x11649210)
#define CLASS_2_92B5A7FD2F617809_METHOD_2_BC802E15953FDD35_OFFSET UNITYSDK_OFFSET(0x11649440)
#define CLASS_2_92B5A7FD2F617809_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11648C10)
#define CLASS_2_92B5A7FD2F617809_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x116492D0)
#define CLASS_2_92B5A7FD2F617809_TICK_OFFSET UNITYSDK_OFFSET(0x116493E0)
#define CLASS_2_92B5A7FD2F617809__CTOR_OFFSET UNITYSDK_OFFSET(0x11648B60)

inline static constexpr unsigned int Class_2_92B5A7FD2F617809_TypeDefinitionIndex = 42672;

class Class_2_92B5A7FD2F617809 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::MapPropDef*, ::System::Int32>>* Field_2_7; // 0x18
	::RPG::Client::RuntimeGroupManager* Field_2_4; // 0x20
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* Field_2_5; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::RPG::GameCore::CreateOrigamiByPropStateChange* Field_2_0; // 0x38
	::RPG::Client::MapDef* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* Field_2_6; // 0x48
	::System::UInt32 Field_2_8; // 0x50
	::System::Boolean Field_2_2; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateOrigamiByPropStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateOrigamiByPropStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_BC802E15953FDD35(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_92B5A7FD2F617809_METHOD_2_BC802E15953FDD35_OFFSET))(this, a1);
	}
};
