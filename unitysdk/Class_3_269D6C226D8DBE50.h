#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_3BDE34AF70542714;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_269D6C226D8DBE50_METHOD_3_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x11819510)
#define CLASS_3_269D6C226D8DBE50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x118193F0)
#define CLASS_3_269D6C226D8DBE50__CTOR_OFFSET UNITYSDK_OFFSET(0x11819380)
#define CLASS_3_269D6C226D8DBE50__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x11819740)
#define CLASS_3_269D6C226D8DBE50___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11819750)

inline static constexpr unsigned int Class_3_269D6C226D8DBE50_TypeDefinitionIndex = 43287;

class Class_3_269D6C226D8DBE50 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_3BDE34AF70542714*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_3BDE34AF70542714* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_3BDE34AF70542714*))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_40EBA7013E4CCDDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50_METHOD_3_40EBA7013E4CCDDF_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};
