#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterReenterStage; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_51EB16D2A64767DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8989D70)
#define CLASS_2_51EB16D2A64767DF_METHOD_2_66D46FE721248009_OFFSET UNITYSDK_OFFSET(0x898A680)
#define CLASS_2_51EB16D2A64767DF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8989DB0)
#define CLASS_2_51EB16D2A64767DF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x898A6F0)
#define CLASS_2_51EB16D2A64767DF_TICK_OFFSET UNITYSDK_OFFSET(0x898A740)
#define CLASS_2_51EB16D2A64767DF__CTOR_OFFSET UNITYSDK_OFFSET(0x8989D60)

inline static constexpr unsigned int Class_2_51EB16D2A64767DF_TypeDefinitionIndex = 43975;

class Class_2_51EB16D2A64767DF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::CharacterReenterStage* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterReenterStage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterReenterStage*))((::PBYTE)hIl2Cpp + CLASS_2_51EB16D2A64767DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51EB16D2A64767DF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51EB16D2A64767DF_ONTASKBEGIN_OFFSET))(this);
	}

	static ::System::Int32 Method_2_66D46FE721248009(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_51EB16D2A64767DF_METHOD_2_66D46FE721248009_OFFSET))(a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51EB16D2A64767DF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51EB16D2A64767DF_TICK_OFFSET))(this, a1);
	}
};
