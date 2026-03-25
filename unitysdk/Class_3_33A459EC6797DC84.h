#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AdvSkillAddServerCheckSkillResultCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_33A459EC6797DC84_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA42FCE0)
#define CLASS_3_33A459EC6797DC84_METHOD_3_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0xA42FC50)
#define CLASS_3_33A459EC6797DC84_METHOD_3_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0xA42FB70)
#define CLASS_3_33A459EC6797DC84_METHOD_3_BFB7535D462E0EB4_OFFSET UNITYSDK_OFFSET(0xA42FD60)
#define CLASS_3_33A459EC6797DC84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA42F9B0)
#define CLASS_3_33A459EC6797DC84_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA42FC00)
#define CLASS_3_33A459EC6797DC84__CTOR_OFFSET UNITYSDK_OFFSET(0xA42F920)
#define CLASS_3_33A459EC6797DC84___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA42FEA0)
#define CLASS_3_33A459EC6797DC84___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA42FE50)

inline static constexpr unsigned int Class_3_33A459EC6797DC84_TypeDefinitionIndex = 42522;

class Class_3_33A459EC6797DC84 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*>
{
public:
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x28
	::System::UInt32 Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_BFB7535D462E0EB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_BFB7535D462E0EB4_OFFSET))(this, a1);
	}

	::System::Void Method_3_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_3_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
