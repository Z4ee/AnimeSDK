#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class InitColonyOrigamiEntity; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CF16CFC089011476_METHOD_3_ED7542A53884A418_OFFSET UNITYSDK_OFFSET(0xD35E830)
#define CLASS_3_CF16CFC089011476_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD35E430)
#define CLASS_3_CF16CFC089011476__CTOR_OFFSET UNITYSDK_OFFSET(0xD35E400)

inline static constexpr unsigned int Class_3_CF16CFC089011476_TypeDefinitionIndex = 48817;

class Class_3_CF16CFC089011476 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::InitColonyOrigamiEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitColonyOrigamiEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitColonyOrigamiEntity*))((::PBYTE)hIl2Cpp + CLASS_3_CF16CFC089011476__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF16CFC089011476_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_ED7542A53884A418(::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*))((::PBYTE)hIl2Cpp + CLASS_3_CF16CFC089011476_METHOD_3_ED7542A53884A418_OFFSET))(this, a1);
	}
};
