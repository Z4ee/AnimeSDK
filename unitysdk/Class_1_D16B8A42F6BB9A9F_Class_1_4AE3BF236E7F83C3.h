#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D16B8A42F6BB9A9F_Class_1_41B104475EBB8850;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PerformanceCaptureNPC; }

#define CLASS_1_D16B8A42F6BB9A9F_CLASS_1_4AE3BF236E7F83C3__CTOR_OFFSET UNITYSDK_OFFSET(0x111AE050)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F_Class_1_4AE3BF236E7F83C3_TypeDefinitionIndex = 49190;

class Class_1_D16B8A42F6BB9A9F_Class_1_4AE3BF236E7F83C3 : public ::System::Object
{
public:
	::RPG::GameCore::PerformanceCaptureNPC* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::Class_1_D16B8A42F6BB9A9F_Class_1_41B104475EBB8850* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F_CLASS_1_4AE3BF236E7F83C3__CTOR_OFFSET))(this);
	}
};
