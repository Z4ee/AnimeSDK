#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForceFiveDimLoadModel; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4D3F9F3A8AE3E689_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1800B210)
#define CLASS_3_4D3F9F3A8AE3E689_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1800B250)
#define CLASS_3_4D3F9F3A8AE3E689_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1800B6A0)
#define CLASS_3_4D3F9F3A8AE3E689__CTOR_OFFSET UNITYSDK_OFFSET(0x1800B1E0)

inline static constexpr unsigned int Class_3_4D3F9F3A8AE3E689_TypeDefinitionIndex = 53173;

class Class_3_4D3F9F3A8AE3E689 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceFiveDimLoadModel*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceFiveDimLoadModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceFiveDimLoadModel*))((::PBYTE)hIl2Cpp + CLASS_3_4D3F9F3A8AE3E689__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D3F9F3A8AE3E689_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D3F9F3A8AE3E689_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4D3F9F3A8AE3E689_ONTASKRESET_OFFSET))(this);
	}
};
