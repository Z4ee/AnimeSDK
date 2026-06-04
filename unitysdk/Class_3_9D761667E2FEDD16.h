#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_07C3C4D2990C49EE;
class Class_3_CD5F873E4094CD5D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9D761667E2FEDD16_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA498350)
#define CLASS_3_9D761667E2FEDD16_METHOD_3_0C40E517E32C6432_OFFSET UNITYSDK_OFFSET(0xA497F40)
#define CLASS_3_9D761667E2FEDD16_METHOD_3_0F2AF21BF93699B5_OFFSET UNITYSDK_OFFSET(0xA4981F0)
#define CLASS_3_9D761667E2FEDD16_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA497AF0)
#define CLASS_3_9D761667E2FEDD16_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA498280)
#define CLASS_3_9D761667E2FEDD16__CTOR_OFFSET UNITYSDK_OFFSET(0xA497900)
#define CLASS_3_9D761667E2FEDD16___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA498400)
#define CLASS_3_9D761667E2FEDD16___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA4983F0)

inline static constexpr unsigned int Class_3_9D761667E2FEDD16_TypeDefinitionIndex = 49258;

class Class_3_9D761667E2FEDD16 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CD5F873E4094CD5D*>
{
public:
	// static const ::System::Int32 Field_3_0 = 0x4; // 0x0
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x28
	::Class_2_5436AF4270279182* Field_3_2; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CD5F873E4094CD5D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CD5F873E4094CD5D*))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_0F2AF21BF93699B5(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_METHOD_3_0F2AF21BF93699B5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0C40E517E32C6432()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16_METHOD_3_0C40E517E32C6432_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D761667E2FEDD16___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
