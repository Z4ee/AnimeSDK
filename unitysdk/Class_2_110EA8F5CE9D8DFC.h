#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_110EA8F5CE9D8DFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB27C440)
#define CLASS_2_110EA8F5CE9D8DFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB27C480)
#define CLASS_2_110EA8F5CE9D8DFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB27C610)
#define CLASS_2_110EA8F5CE9D8DFC_TICK_OFFSET UNITYSDK_OFFSET(0xB27C660)
#define CLASS_2_110EA8F5CE9D8DFC__CTOR_OFFSET UNITYSDK_OFFSET(0xB27C430)

inline static constexpr unsigned int Class_2_110EA8F5CE9D8DFC_TypeDefinitionIndex = 47345;

class Class_2_110EA8F5CE9D8DFC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowGuide* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuide*))((::PBYTE)hIl2Cpp + CLASS_2_110EA8F5CE9D8DFC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_110EA8F5CE9D8DFC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_110EA8F5CE9D8DFC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_110EA8F5CE9D8DFC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_110EA8F5CE9D8DFC_TICK_OFFSET))(this, a1);
	}
};
