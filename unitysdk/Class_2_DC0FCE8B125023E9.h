#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/DamageTextType.h"

namespace RPG::GameCore { class SetDamageTextStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DC0FCE8B125023E9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E273C0)
#define CLASS_2_DC0FCE8B125023E9_METHOD_2_32F0DE28AD7B43EC_OFFSET UNITYSDK_OFFSET(0x9E27510)
#define CLASS_2_DC0FCE8B125023E9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E27400)
#define CLASS_2_DC0FCE8B125023E9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9E27560)
#define CLASS_2_DC0FCE8B125023E9_TICK_OFFSET UNITYSDK_OFFSET(0x9E275B0)
#define CLASS_2_DC0FCE8B125023E9__CTOR_OFFSET UNITYSDK_OFFSET(0x9E273B0)

inline static constexpr unsigned int Class_2_DC0FCE8B125023E9_TypeDefinitionIndex = 51986;

class Class_2_DC0FCE8B125023E9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetDamageTextStyle* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDamageTextStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDamageTextStyle*))((::PBYTE)hIl2Cpp + CLASS_2_DC0FCE8B125023E9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC0FCE8B125023E9_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC0FCE8B125023E9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC0FCE8B125023E9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DC0FCE8B125023E9_TICK_OFFSET))(this, a1);
	}

	::RPG::Client::UIFloatingTextType Method_2_32F0DE28AD7B43EC(::RPG::GameCore::DamageTextType a1)
	{
		return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::RPG::GameCore::DamageTextType))((::PBYTE)hIl2Cpp + CLASS_2_DC0FCE8B125023E9_METHOD_2_32F0DE28AD7B43EC_OFFSET))(this, a1);
	}
};
