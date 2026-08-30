#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_10E32D6D8DF977AC;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16B4E900)
#define CLASS_3_FE3BC0A9B1372E7D_1_METHOD_3_DE2F25FD84F7D432_OFFSET UNITYSDK_OFFSET(0x16B4E690)
#define CLASS_3_FE3BC0A9B1372E7D_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16B4DF50)
#define CLASS_3_FE3BC0A9B1372E7D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4DED0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_1_TypeDefinitionIndex = 52923;

class Class_3_FE3BC0A9B1372E7D_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_10E32D6D8DF977AC*>
{
public:
	::Class_2_5436AF4270279182* NFJGMKPFPOC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_10E32D6D8DF977AC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_10E32D6D8DF977AC*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_3_DE2F25FD84F7D432(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_1_METHOD_3_DE2F25FD84F7D432_OFFSET))(this, a1);
	}
};
