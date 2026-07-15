#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvPropSteerV2; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6F16B2FDA17087A4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15300360)
#define CLASS_3_6F16B2FDA17087A4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x153003A0)
#define CLASS_3_6F16B2FDA17087A4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15300F60)
#define CLASS_3_6F16B2FDA17087A4__CTOR_OFFSET UNITYSDK_OFFSET(0x15300330)

inline static constexpr unsigned int Class_3_6F16B2FDA17087A4_TypeDefinitionIndex = 50090;

class Class_3_6F16B2FDA17087A4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPropSteerV2*>
{
public:
	::RPG::GameCore::PropComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPropSteerV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPropSteerV2*))((::PBYTE)hIl2Cpp + CLASS_3_6F16B2FDA17087A4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F16B2FDA17087A4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F16B2FDA17087A4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6F16B2FDA17087A4_ONTASKRESET_OFFSET))(this);
	}
};
