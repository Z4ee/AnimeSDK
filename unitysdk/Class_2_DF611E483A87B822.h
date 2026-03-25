#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/Guid.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class RogueTournCollectionShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DF611E483A87B822_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109FCF80)
#define CLASS_2_DF611E483A87B822_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x109FD780)
#define CLASS_2_DF611E483A87B822_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x109FD6F0)
#define CLASS_2_DF611E483A87B822_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x109FD820)
#define CLASS_2_DF611E483A87B822_METHOD_2_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x109FD370)
#define CLASS_2_DF611E483A87B822_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x109FD020)
#define CLASS_2_DF611E483A87B822_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x109FD420)
#define CLASS_2_DF611E483A87B822_TICK_OFFSET UNITYSDK_OFFSET(0x109FD510)
#define CLASS_2_DF611E483A87B822__CTOR_OFFSET UNITYSDK_OFFSET(0x109FCE90)

inline static constexpr unsigned int Class_2_DF611E483A87B822_TypeDefinitionIndex = 47177;

class Class_2_DF611E483A87B822 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x28
	::RPG::GameCore::RogueTournCollectionShowUI* Field_2_1; // 0x30
	::System::Guid Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournCollectionShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournCollectionShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_METHOD_2_B732DC7FA82BA621_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF611E483A87B822_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
