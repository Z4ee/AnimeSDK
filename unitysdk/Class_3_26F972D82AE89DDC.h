#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7C65529CEEBE6D95;
namespace RPG::GameCore { class AdventureCameraLookAtTemplate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_26F972D82AE89DDC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FFFB0)
#define CLASS_3_26F972D82AE89DDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FFE80)
#define CLASS_3_26F972D82AE89DDC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8FFF20)
#define CLASS_3_26F972D82AE89DDC__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FFA80)

inline static constexpr unsigned int Class_3_26F972D82AE89DDC_TypeDefinitionIndex = 55042;

class Class_3_26F972D82AE89DDC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdventureCameraLookAtTemplate*>
{
public:
	::Class_3_7C65529CEEBE6D95* GJBPIKOJDLM; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureCameraLookAtTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureCameraLookAtTemplate*))((::PBYTE)hIl2Cpp + CLASS_3_26F972D82AE89DDC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26F972D82AE89DDC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26F972D82AE89DDC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_26F972D82AE89DDC_DISPOSE_OFFSET))(this);
	}
};
