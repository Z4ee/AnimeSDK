#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class CheckIsMagicRogueAutoDressOpen; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A039196385F1D3A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A8F370)
#define CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x10A8F6E0)
#define CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10A8F600)
#define CLASS_2_A039196385F1D3A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A8F400)
#define CLASS_2_A039196385F1D3A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A8F7C0)
#define CLASS_2_A039196385F1D3A2_TICK_OFFSET UNITYSDK_OFFSET(0x10A8F8A0)
#define CLASS_2_A039196385F1D3A2__CTOR_OFFSET UNITYSDK_OFFSET(0x10A8F280)

inline static constexpr unsigned int Class_2_A039196385F1D3A2_TypeDefinitionIndex = 46791;

class Class_2_A039196385F1D3A2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckIsMagicRogueAutoDressOpen*))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A039196385F1D3A2_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}
};
