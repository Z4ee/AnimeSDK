#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfigChange; }

#define CLASS_1_AA5627556691B674__CTOR_OFFSET UNITYSDK_OFFSET(0x8F82FE0)

inline static constexpr unsigned int Class_1_AA5627556691B674_TypeDefinitionIndex = 64108;

class Class_1_AA5627556691B674 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_1; // 0x10
	::RPG::GameCore::VCameraConfigChange* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA5627556691B674__CTOR_OFFSET))(this);
	}
};
