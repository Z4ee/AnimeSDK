#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_238F6B61DA4B8F1E;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_269D6C226D8DBE50_METHOD_3_40EBA7013E4CCDDF_OFFSET UNITYSDK_OFFSET(0x1119B820)
#define CLASS_3_269D6C226D8DBE50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1119B700)
#define CLASS_3_269D6C226D8DBE50__CTOR_OFFSET UNITYSDK_OFFSET(0x1119B690)
#define CLASS_3_269D6C226D8DBE50__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1119BA50)
#define CLASS_3_269D6C226D8DBE50___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1119BA60)

inline static constexpr unsigned int Class_3_269D6C226D8DBE50_TypeDefinitionIndex = 49283;

class Class_3_269D6C226D8DBE50 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_238F6B61DA4B8F1E*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_238F6B61DA4B8F1E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_238F6B61DA4B8F1E*))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50__CTOR_OFFSET))(this, a1, a2);
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
