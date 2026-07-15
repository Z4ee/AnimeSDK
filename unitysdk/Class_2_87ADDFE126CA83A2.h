#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_2B3811E66EE856E4;
class Class_3_12825D4B6E545D7F_1;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_87ADDFE126CA83A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D76C10)
#define CLASS_2_87ADDFE126CA83A2_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x14D771B0)
#define CLASS_2_87ADDFE126CA83A2_METHOD_2_98574DC3A5F01E6A_OFFSET UNITYSDK_OFFSET(0x14D76FB0)
#define CLASS_2_87ADDFE126CA83A2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14D76CD0)
#define CLASS_2_87ADDFE126CA83A2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14D76EE0)
#define CLASS_2_87ADDFE126CA83A2_TICK_OFFSET UNITYSDK_OFFSET(0x14D77150)
#define CLASS_2_87ADDFE126CA83A2__CTOR_OFFSET UNITYSDK_OFFSET(0x14D76C00)

inline static constexpr unsigned int Class_2_87ADDFE126CA83A2_TypeDefinitionIndex = 52587;

class Class_2_87ADDFE126CA83A2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_12825D4B6E545D7F_1* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Class_1_2B3811E66EE856E4* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_12825D4B6E545D7F_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_12825D4B6E545D7F_1*))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_98574DC3A5F01E6A(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::JsonEnum* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2_METHOD_2_98574DC3A5F01E6A_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87ADDFE126CA83A2_GETCONFIG_OFFSET))(this);
	}
};
