#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_EC335E7569F4FD0F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_89B5B1B04274D4C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F7F270)
#define CLASS_3_89B5B1B04274D4C6__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7F1D0)

inline static constexpr unsigned int Class_3_89B5B1B04274D4C6_TypeDefinitionIndex = 54042;

class Class_3_89B5B1B04274D4C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_EC335E7569F4FD0F*>
{
public:
	::Class_3_07C3C4D2990C49EE* OODBJDPKKKF; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_EC335E7569F4FD0F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_EC335E7569F4FD0F*))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_89B5B1B04274D4C6_ONTASKBEGIN_OFFSET))(this);
	}
};
