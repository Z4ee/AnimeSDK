#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ADC645CA97A179A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1A03D0)
#define CLASS_2_ADC645CA97A179A0_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xD1A0460)
#define CLASS_2_ADC645CA97A179A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD1A06F0)
#define CLASS_2_ADC645CA97A179A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1A0410)
#define CLASS_2_ADC645CA97A179A0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1A0640)
#define CLASS_2_ADC645CA97A179A0_TICK_OFFSET UNITYSDK_OFFSET(0xD1A0690)
#define CLASS_2_ADC645CA97A179A0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A03C0)

inline static constexpr unsigned int Class_2_ADC645CA97A179A0_TypeDefinitionIndex = 54834;

class Class_2_ADC645CA97A179A0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_2; // 0x28

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

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADC645CA97A179A0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
