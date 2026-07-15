#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class AddDynamicEntityParam; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B21BAAF008B541D8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B5C750)
#define CLASS_2_B21BAAF008B541D8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B5C790)
#define CLASS_2_B21BAAF008B541D8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B5CB90)
#define CLASS_2_B21BAAF008B541D8_TICK_OFFSET UNITYSDK_OFFSET(0x14B5CBE0)
#define CLASS_2_B21BAAF008B541D8__CTOR_OFFSET UNITYSDK_OFFSET(0x14B5C680)

inline static constexpr unsigned int Class_2_B21BAAF008B541D8_TypeDefinitionIndex = 52330;

class Class_2_B21BAAF008B541D8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AddDynamicEntityParam* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::StringHash Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddDynamicEntityParam* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddDynamicEntityParam*))((::PBYTE)hIl2Cpp + CLASS_2_B21BAAF008B541D8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21BAAF008B541D8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21BAAF008B541D8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B21BAAF008B541D8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B21BAAF008B541D8_TICK_OFFSET))(this, a1);
	}
};
