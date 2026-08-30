#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1E4F9B0ED3BF21DE;
class Class_3_26F8D27CD2489C12;
namespace RPG::Client { class BubbleTalkConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_76D28C55E605503C_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A466E80)
#define CLASS_3_76D28C55E605503C_1_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1A467BB0)
#define CLASS_3_76D28C55E605503C_1_METHOD_3_89C299F4AFCAD491_OFFSET UNITYSDK_OFFSET(0x1A467750)
#define CLASS_3_76D28C55E605503C_1_METHOD_3_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x1A467AE0)
#define CLASS_3_76D28C55E605503C_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A466F40)
#define CLASS_3_76D28C55E605503C_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A467A90)
#define CLASS_3_76D28C55E605503C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A466E50)

inline static constexpr unsigned int Class_3_76D28C55E605503C_1_TypeDefinitionIndex = 53130;

class Class_3_76D28C55E605503C_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_26F8D27CD2489C12*>
{
public:
	::RPG::Client::BubbleTalkConfig* GJMEBCMNPMK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_26F8D27CD2489C12* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_26F8D27CD2489C12*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_89C299F4AFCAD491(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_METHOD_3_89C299F4AFCAD491_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_METHOD_3_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_3_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_1_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
	}
};
