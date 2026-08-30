#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SwitchHandCancelLift; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_631094C36C844CC2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18557950)
#define CLASS_2_631094C36C844CC2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18557CE0)
#define CLASS_2_631094C36C844CC2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x185579F0)
#define CLASS_2_631094C36C844CC2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18557C90)
#define CLASS_2_631094C36C844CC2_TICK_OFFSET UNITYSDK_OFFSET(0x18557990)
#define CLASS_2_631094C36C844CC2__CTOR_OFFSET UNITYSDK_OFFSET(0x18557940)

inline static constexpr unsigned int Class_2_631094C36C844CC2_TypeDefinitionIndex = 53563;

class Class_2_631094C36C844CC2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::SwitchHandCancelLift* IGHAHBNLIJA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCancelLift* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCancelLift*))((::PBYTE)hIl2Cpp + CLASS_2_631094C36C844CC2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_631094C36C844CC2_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_631094C36C844CC2_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_631094C36C844CC2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_631094C36C844CC2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_631094C36C844CC2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
