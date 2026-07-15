#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }

#define CLASS_1_3C11F407E4B26D85_METHOD_1_D629173E454D124F_OFFSET UNITYSDK_OFFSET(0x193731E0)

inline static constexpr unsigned int Class_1_3C11F407E4B26D85_TypeDefinitionIndex = 69898;

class Class_1_3C11F407E4B26D85 : public ::System::Object
{
public:
	static ::System::Void Method_1_D629173E454D124F(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C11F407E4B26D85_METHOD_1_D629173E454D124F_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
