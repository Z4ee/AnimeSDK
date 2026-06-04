#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_5436AF4270279182;
class Class_4_DF607302E6EFE15C_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8D795888C790834D_METHOD_3_3215AC64FF8F0B10_OFFSET UNITYSDK_OFFSET(0x13BD1340)
#define CLASS_3_8D795888C790834D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BD10C0)
#define CLASS_3_8D795888C790834D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13BD15E0)
#define CLASS_3_8D795888C790834D_TICK_OFFSET UNITYSDK_OFFSET(0x13BD1630)
#define CLASS_3_8D795888C790834D__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD1090)
#define CLASS_3_8D795888C790834D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13BD1820)

inline static constexpr unsigned int Class_3_8D795888C790834D_TypeDefinitionIndex = 48754;

class Class_3_8D795888C790834D : public ::RPG::GameCore::ST_Task_1<::Class_4_DF607302E6EFE15C_1*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30
	::System::Single Field_3_2; // 0x34
	::UnityEngine::Quaternion Field_3_3; // 0x38
	::UnityEngine::Quaternion Field_3_4; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DF607302E6EFE15C_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DF607302E6EFE15C_1*))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_3215AC64FF8F0B10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D_METHOD_3_3215AC64FF8F0B10_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8D795888C790834D___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
