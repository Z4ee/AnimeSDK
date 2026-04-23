#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5BE5E19C57698C00.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }

#define CLASS_3_556E9C29895B365A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x903B610)

inline static constexpr unsigned int Class_3_556E9C29895B365A_2_TypeDefinitionIndex = 64279;

class Class_3_556E9C29895B365A_2 : public ::Class_2_5BE5E19C57698C00
{
public:
	::System::Void _ctor(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::PipelineCameraGlobalConfig* a2, ::RPG::Client::CameraModuleConfigCollection* a3, ::RPG::Client::CameraDataAndFlags* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + CLASS_3_556E9C29895B365A_2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
