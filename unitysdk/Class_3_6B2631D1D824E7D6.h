#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_SendMessage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_6B2631D1D824E7D6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x136AFD70)
#define CLASS_3_6B2631D1D824E7D6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136AFDE0)
#define CLASS_3_6B2631D1D824E7D6__CTOR_OFFSET UNITYSDK_OFFSET(0x136AFCC0)

inline static constexpr unsigned int Class_3_6B2631D1D824E7D6_TypeDefinitionIndex = 48737;

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
