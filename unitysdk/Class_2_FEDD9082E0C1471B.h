#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ElfManagerRestaurant; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_FEDD9082E0C1471B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D7EE50)
#define CLASS_2_FEDD9082E0C1471B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17D7EE90)
#define CLASS_2_FEDD9082E0C1471B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17D7F040)
#define CLASS_2_FEDD9082E0C1471B_TICK_OFFSET UNITYSDK_OFFSET(0x17D7F090)
#define CLASS_2_FEDD9082E0C1471B__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7EE40)

inline static constexpr unsigned int Class_2_FEDD9082E0C1471B_TypeDefinitionIndex = 55515;

class Class_2_FEDD9082E0C1471B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ElfManagerRestaurant* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfManagerRestaurant* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfManagerRestaurant*))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FEDD9082E0C1471B_TICK_OFFSET))(this, a1);
	}
};
