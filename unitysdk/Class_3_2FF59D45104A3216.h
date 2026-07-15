#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class ByCheckColonyMirrorTakenDiff; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2FF59D45104A3216_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17D848E0)
#define CLASS_3_2FF59D45104A3216_METHOD_3_1B7062170F12239E_OFFSET UNITYSDK_OFFSET(0x17D84F40)
#define CLASS_3_2FF59D45104A3216_METHOD_3_7D3EF3C6B6273FCA_OFFSET UNITYSDK_OFFSET(0x17D84DA0)
#define CLASS_3_2FF59D45104A3216_METHOD_3_99A5FB3E84B54B3D_OFFSET UNITYSDK_OFFSET(0x17D84FD0)
#define CLASS_3_2FF59D45104A3216_METHOD_3_CC1F4B7E56F37345_OFFSET UNITYSDK_OFFSET(0x17D84EE0)
#define CLASS_3_2FF59D45104A3216__CTOR_OFFSET UNITYSDK_OFFSET(0x17D848B0)

inline static constexpr unsigned int Class_3_2FF59D45104A3216_TypeDefinitionIndex = 50703;

class Class_3_2FF59D45104A3216 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCheckColonyMirrorTakenDiff*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* Field_3_0; // 0x28
	::RPG::GameCore::MazePuzzleOrigamiColonyRow* Field_3_1; // 0x30
	::System::UInt32 Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCheckColonyMirrorTakenDiff*))((::PBYTE)hIl2Cpp + CLASS_3_2FF59D45104A3216__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FF59D45104A3216_EVALUATE_OFFSET))(this);
	}

	::System::Boolean Method_3_7D3EF3C6B6273FCA(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_3_2FF59D45104A3216_METHOD_3_7D3EF3C6B6273FCA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_CC1F4B7E56F37345(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_3_2FF59D45104A3216_METHOD_3_CC1F4B7E56F37345_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1B7062170F12239E(::RPG::GameCore::MazePuzzleOrigamiRow* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CLASS_3_2FF59D45104A3216_METHOD_3_1B7062170F12239E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_99A5FB3E84B54B3D(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + CLASS_3_2FF59D45104A3216_METHOD_3_99A5FB3E84B54B3D_OFFSET))(this, a1);
	}
};
