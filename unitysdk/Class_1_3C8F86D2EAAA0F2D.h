#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraConfig; }

#define CLASS_1_3C8F86D2EAAA0F2D_METHOD_1_3EDB7CC112612832_OFFSET UNITYSDK_OFFSET(0x11D44C70)

inline static constexpr unsigned int Class_1_3C8F86D2EAAA0F2D_TypeDefinitionIndex = 67452;

class Class_1_3C8F86D2EAAA0F2D : public ::System::Object
{
public:
	static ::System::Void Method_1_3EDB7CC112612832(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraConfig* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3C8F86D2EAAA0F2D_METHOD_1_3EDB7CC112612832_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
