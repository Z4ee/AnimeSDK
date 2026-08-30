#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchPhotoGraphMode; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_63336D767068CBC5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE3A0C0)
#define CLASS_3_63336D767068CBC5__CTOR_OFFSET UNITYSDK_OFFSET(0xBE3A090)

inline static constexpr unsigned int Class_3_63336D767068CBC5_TypeDefinitionIndex = 53579;

class Class_3_63336D767068CBC5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchPhotoGraphMode*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchPhotoGraphMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchPhotoGraphMode*))((::PBYTE)hIl2Cpp + CLASS_3_63336D767068CBC5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63336D767068CBC5_ONTASKBEGIN_OFFSET))(this);
	}
};
