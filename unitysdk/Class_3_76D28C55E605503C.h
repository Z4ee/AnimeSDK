#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_1E4F9B0ED3BF21DE;
class Class_3_649F7823C69AF414;
class Class_3_912CC478F2B21832;
namespace RPG::Client { class BubbleTalkConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_76D28C55E605503C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156E5030)
#define CLASS_3_76D28C55E605503C_METHOD_3_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x156E5FE0)
#define CLASS_3_76D28C55E605503C_METHOD_3_63CABFF75FF759E3_OFFSET UNITYSDK_OFFSET(0x156E5A60)
#define CLASS_3_76D28C55E605503C_METHOD_3_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x156E5F10)
#define CLASS_3_76D28C55E605503C_METHOD_3_B9A56402214242F9_OFFSET UNITYSDK_OFFSET(0x156E5BC0)
#define CLASS_3_76D28C55E605503C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156E50D0)
#define CLASS_3_76D28C55E605503C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156E5EC0)
#define CLASS_3_76D28C55E605503C__CTOR_OFFSET UNITYSDK_OFFSET(0x156E5000)

inline static constexpr unsigned int Class_3_76D28C55E605503C_TypeDefinitionIndex = 53126;

class Class_3_76D28C55E605503C : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_649F7823C69AF414*>
{
public:
	::RPG::Client::BubbleTalkConfig* GJMEBCMNPMK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_649F7823C69AF414* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_649F7823C69AF414*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_63CABFF75FF759E3(::Class_3_1E4F9B0ED3BF21DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_63CABFF75FF759E3_OFFSET))(this, a1);
	}

	::System::Void Method_3_B9A56402214242F9(::Class_3_912CC478F2B21832* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_912CC478F2B21832*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_B9A56402214242F9_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_3_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_76D28C55E605503C_METHOD_3_229CEF33F0AF9039_OFFSET))(this);
	}
};
