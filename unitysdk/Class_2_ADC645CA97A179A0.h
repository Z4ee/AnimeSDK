#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ADC645CA97A179A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DCC840)
#define CLASS_2_ADC645CA97A179A0_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x17DCC8D0)
#define CLASS_2_ADC645CA97A179A0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17DCCB60)
#define CLASS_2_ADC645CA97A179A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DCC880)
#define CLASS_2_ADC645CA97A179A0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17DCCAB0)
#define CLASS_2_ADC645CA97A179A0_TICK_OFFSET UNITYSDK_OFFSET(0x17DCCB00)
#define CLASS_2_ADC645CA97A179A0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCC830)

inline static constexpr unsigned int Class_2_ADC645CA97A179A0_TypeDefinitionIndex = 58840;

class Class_2_ADC645CA97A179A0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* OFKGLJOAMLD; // 0x20
	::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28

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
