#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowTalkRecordingDialog; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_DD8ED76FC1DFD18F_METHOD_3_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x934A5F0)
#define CLASS_3_DD8ED76FC1DFD18F_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x934A4D0)
#define CLASS_3_DD8ED76FC1DFD18F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x934A460)
#define CLASS_3_DD8ED76FC1DFD18F__CTOR_OFFSET UNITYSDK_OFFSET(0x934A430)

inline static constexpr unsigned int Class_3_DD8ED76FC1DFD18F_TypeDefinitionIndex = 49138;

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

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD8ED76FC1DFD18F_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD8ED76FC1DFD18F_METHOD_3_51AC7912135C5E23_OFFSET))(this);
	}
};
