#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ADC645CA97A179A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96A3620)
#define CLASS_2_ADC645CA97A179A0_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x96A36B0)
#define CLASS_2_ADC645CA97A179A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x96A3950)
#define CLASS_2_ADC645CA97A179A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x96A3660)
#define CLASS_2_ADC645CA97A179A0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x96A38A0)
#define CLASS_2_ADC645CA97A179A0_TICK_OFFSET UNITYSDK_OFFSET(0x96A38F0)
#define CLASS_2_ADC645CA97A179A0__CTOR_OFFSET UNITYSDK_OFFSET(0x96A3610)

inline static constexpr unsigned int Class_2_ADC645CA97A179A0_TypeDefinitionIndex = 54108;

class Class_2_ADC645CA97A179A0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::LuaUIController* Field_2_2; // 0x18
	::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
