#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUITabOpen; }
namespace UnityEngine { class Transform; }

#define CLASS_2_43C7E4F339606B8B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3E5940)
#define CLASS_2_43C7E4F339606B8B_METHOD_2_E39884A88E26F31D_OFFSET UNITYSDK_OFFSET(0xC3E5BC0)
#define CLASS_2_43C7E4F339606B8B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3E5980)
#define CLASS_2_43C7E4F339606B8B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3E59D0)
#define CLASS_2_43C7E4F339606B8B_TICK_OFFSET UNITYSDK_OFFSET(0xC3E5A20)
#define CLASS_2_43C7E4F339606B8B__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E5930)

inline static constexpr unsigned int Class_2_43C7E4F339606B8B_TypeDefinitionIndex = 59094;

class Class_2_43C7E4F339606B8B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::WaitUITabOpen* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUITabOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUITabOpen*))((::PBYTE)hIl2Cpp + CLASS_2_43C7E4F339606B8B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C7E4F339606B8B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C7E4F339606B8B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C7E4F339606B8B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_43C7E4F339606B8B_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E39884A88E26F31D(::UnityEngine::Transform* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_43C7E4F339606B8B_METHOD_2_E39884A88E26F31D_OFFSET))(this, a1);
	}
};
