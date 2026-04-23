#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_SendMessage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B2631D1D824E7D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC726950)
#define CLASS_3_6B2631D1D824E7D6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7269C0)
#define CLASS_3_6B2631D1D824E7D6__CTOR_OFFSET UNITYSDK_OFFSET(0xC7268A0)

inline static constexpr unsigned int Class_3_6B2631D1D824E7D6_TypeDefinitionIndex = 48119;

class Class_3_6B2631D1D824E7D6 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_SendMessage*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_SendMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_SendMessage*))((::PBYTE)hIl2Cpp + CLASS_3_6B2631D1D824E7D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B2631D1D824E7D6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B2631D1D824E7D6_ONTASKRESET_OFFSET))(this);
	}
};
