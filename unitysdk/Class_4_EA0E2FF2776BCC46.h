#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3AA8DA5529BE44AF.h"

namespace RPG::GameCore { class PlayAeonTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_42DB5D19EEAC74D5_OFFSET UNITYSDK_OFFSET(0x17E60B20)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x17E60CC0)
#define CLASS_4_EA0E2FF2776BCC46_METHOD_4_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x17E60810)
#define CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E607B0)
#define CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET UNITYSDK_OFFSET(0x17E60780)

inline static constexpr unsigned int Class_4_EA0E2FF2776BCC46_TypeDefinitionIndex = 58411;

class Class_4_EA0E2FF2776BCC46 : public ::Class_3_3AA8DA5529BE44AF
{
public:
	::RPG::GameCore::PlayAeonTalk* HMBPCFHKPPI; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayAeonTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayAeonTalk*))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_4_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Boolean Method_4_42DB5D19EEAC74D5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EA0E2FF2776BCC46_METHOD_4_42DB5D19EEAC74D5_OFFSET))(this);
	}
};
