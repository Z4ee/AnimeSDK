#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class PlayAndWaitLimaoNewsTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_ABF7F66D807478E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E31910)
#define CLASS_2_ABF7F66D807478E7_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x18E31B60)
#define CLASS_2_ABF7F66D807478E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18E319D0)
#define CLASS_2_ABF7F66D807478E7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18E31AB0)
#define CLASS_2_ABF7F66D807478E7_TICK_OFFSET UNITYSDK_OFFSET(0x18E31B00)
#define CLASS_2_ABF7F66D807478E7__CTOR_OFFSET UNITYSDK_OFFSET(0x18E31900)

inline static constexpr unsigned int Class_2_ABF7F66D807478E7_TypeDefinitionIndex = 53223;

class Class_2_ABF7F66D807478E7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::PlayAndWaitLimaoNewsTalk* OFKGLJOAMLD; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlayAndWaitLimaoNewsTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlayAndWaitLimaoNewsTalk*))((::PBYTE)hIl2Cpp + CLASS_2_ABF7F66D807478E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABF7F66D807478E7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABF7F66D807478E7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABF7F66D807478E7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ABF7F66D807478E7_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABF7F66D807478E7_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
