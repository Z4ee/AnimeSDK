#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowGuideText; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AD7CCA6F8C21249E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119198E0)
#define CLASS_2_AD7CCA6F8C21249E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11919920)
#define CLASS_2_AD7CCA6F8C21249E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11919BE0)
#define CLASS_2_AD7CCA6F8C21249E_TICK_OFFSET UNITYSDK_OFFSET(0x11919C30)
#define CLASS_2_AD7CCA6F8C21249E__CTOR_OFFSET UNITYSDK_OFFSET(0x119198D0)

inline static constexpr unsigned int Class_2_AD7CCA6F8C21249E_TypeDefinitionIndex = 54081;

class Class_2_AD7CCA6F8C21249E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowGuideText* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideText* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideText*))((::PBYTE)hIl2Cpp + CLASS_2_AD7CCA6F8C21249E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7CCA6F8C21249E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7CCA6F8C21249E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD7CCA6F8C21249E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AD7CCA6F8C21249E_TICK_OFFSET))(this, a1);
	}
};
