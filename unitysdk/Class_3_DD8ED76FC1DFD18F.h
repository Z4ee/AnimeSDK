#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowTalkRecordingDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DD8ED76FC1DFD18F_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x17AB9F90)
#define CLASS_3_DD8ED76FC1DFD18F_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17AB9EA0)
#define CLASS_3_DD8ED76FC1DFD18F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AB9DF0)
#define CLASS_3_DD8ED76FC1DFD18F__CTOR_OFFSET UNITYSDK_OFFSET(0x17AB9DC0)

inline static constexpr unsigned int Class_3_DD8ED76FC1DFD18F_TypeDefinitionIndex = 53544;

class Class_3_DD8ED76FC1DFD18F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowTalkRecordingDialog*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTalkRecordingDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTalkRecordingDialog*))((::PBYTE)hIl2Cpp + CLASS_3_DD8ED76FC1DFD18F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD8ED76FC1DFD18F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD8ED76FC1DFD18F_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD8ED76FC1DFD18F_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
	}
};
