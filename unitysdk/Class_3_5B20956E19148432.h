#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
class Class_3_9846D5C553A9930F_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5B20956E19148432_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D86B80)
#define CLASS_3_5B20956E19148432_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D86CE0)
#define CLASS_3_5B20956E19148432__CTOR_OFFSET UNITYSDK_OFFSET(0x17D86A70)

inline static constexpr unsigned int Class_3_5B20956E19148432_TypeDefinitionIndex = 52556;

class Class_3_5B20956E19148432 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9846D5C553A9930F_2*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9846D5C553A9930F_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9846D5C553A9930F_2*))((::PBYTE)hIl2Cpp + CLASS_3_5B20956E19148432__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B20956E19148432_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B20956E19148432_ONTASKBEGIN_OFFSET))(this);
	}
};
