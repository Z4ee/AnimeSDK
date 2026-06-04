#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSkillAddServerCheckSkillResultCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_33A459EC6797DC84_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD17E6D0)
#define CLASS_3_33A459EC6797DC84_METHOD_3_2C8484BE9A26CCD5_OFFSET UNITYSDK_OFFSET(0xD17E610)
#define CLASS_3_33A459EC6797DC84_METHOD_3_3F5DC960A2A68BBD_OFFSET UNITYSDK_OFFSET(0xD17E750)
#define CLASS_3_33A459EC6797DC84_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xD17E500)
#define CLASS_3_33A459EC6797DC84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD17E340)
#define CLASS_3_33A459EC6797DC84_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD17E5C0)
#define CLASS_3_33A459EC6797DC84__CTOR_OFFSET UNITYSDK_OFFSET(0xD17E2B0)
#define CLASS_3_33A459EC6797DC84___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD17E890)
#define CLASS_3_33A459EC6797DC84___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD17E840)

inline static constexpr unsigned int Class_3_33A459EC6797DC84_TypeDefinitionIndex = 49109;

class Class_3_33A459EC6797DC84 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*>
{
public:
	::Class_3_07C3C4D2990C49EE* Field_3_0; // 0x28
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

	::System::Void Method_3_3F5DC960A2A68BBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_3F5DC960A2A68BBD_OFFSET))(this, a1);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_2C8484BE9A26CCD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_2C8484BE9A26CCD5_OFFSET))(this);
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
