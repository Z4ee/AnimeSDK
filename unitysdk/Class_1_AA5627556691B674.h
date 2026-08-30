#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfigChange; }

#define CLASS_1_AA5627556691B674__CTOR_OFFSET UNITYSDK_OFFSET(0x1850BD40)

inline static constexpr unsigned int Class_1_AA5627556691B674_TypeDefinitionIndex = 69527;

class Class_1_AA5627556691B674 : public ::System::Object
{
public:
	::RPG::GameCore::VCameraConfigChange* FABCCDICDLO; // 0x10
	::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA5627556691B674__CTOR_OFFSET))(this);
	}
};
