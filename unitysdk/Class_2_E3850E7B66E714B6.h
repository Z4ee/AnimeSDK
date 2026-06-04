#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_06CA57680E115A32_2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_E3850E7B66E714B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13FFE120)
#define CLASS_2_E3850E7B66E714B6_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x13FFE5E0)
#define CLASS_2_E3850E7B66E714B6_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x13FFE1A0)
#define CLASS_2_E3850E7B66E714B6_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x13FFE320)
#define CLASS_2_E3850E7B66E714B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13FFE2C0)
#define CLASS_2_E3850E7B66E714B6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13FFE270)
#define CLASS_2_E3850E7B66E714B6_TICK_OFFSET UNITYSDK_OFFSET(0x13FFE580)
#define CLASS_2_E3850E7B66E714B6__CTOR_OFFSET UNITYSDK_OFFSET(0x13FFE110)

inline static constexpr unsigned int Class_2_E3850E7B66E714B6_TypeDefinitionIndex = 49212;

class Class_2_E3850E7B66E714B6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_3_06CA57680E115A32_2* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::RPG::GameCore::LevelGraphComponent* Field_2_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_2*))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}
};
