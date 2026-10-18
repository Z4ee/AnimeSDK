#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AdvSkillAddServerCheckSkillResultCallback; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_33A459EC6797DC84_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBC6FF0)
#define CLASS_3_33A459EC6797DC84_METHOD_3_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xEBC6E20)
#define CLASS_3_33A459EC6797DC84_METHOD_3_7908E0A3A062534E_OFFSET UNITYSDK_OFFSET(0xEBC70D0)
#define CLASS_3_33A459EC6797DC84_METHOD_3_F944CC0CE8B3E57A_OFFSET UNITYSDK_OFFSET(0xEBC6F30)
#define CLASS_3_33A459EC6797DC84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBC6C60)
#define CLASS_3_33A459EC6797DC84_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBC6EE0)
#define CLASS_3_33A459EC6797DC84__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC6BD0)

inline static constexpr unsigned int Class_3_33A459EC6797DC84_TypeDefinitionIndex = 52509;

class Class_3_33A459EC6797DC84 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvSkillAddServerCheckSkillResultCallback*>
{
public:
	::Class_3_07C3C4D2990C49EE* CHOOMNGLJHI; // 0x28
	::System::UInt32 GDMJNMFOKIO; // 0x30

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

	::System::Void Method_3_7908E0A3A062534E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_7908E0A3A062534E_OFFSET))(this, a1);
	}

	::System::Void Method_3_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_3_F944CC0CE8B3E57A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33A459EC6797DC84_METHOD_3_F944CC0CE8B3E57A_OFFSET))(this);
	}
};
