#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_FA3DB7B30E78C0CA_2;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_E3850E7B66E714B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CF4EE0)
#define CLASS_2_E3850E7B66E714B6_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15CF54B0)
#define CLASS_2_E3850E7B66E714B6_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x15CF50F0)
#define CLASS_2_E3850E7B66E714B6_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x15CF4F70)
#define CLASS_2_E3850E7B66E714B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CF5090)
#define CLASS_2_E3850E7B66E714B6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CF5040)
#define CLASS_2_E3850E7B66E714B6_TICK_OFFSET UNITYSDK_OFFSET(0x15CF5450)
#define CLASS_2_E3850E7B66E714B6__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF4ED0)

inline static constexpr unsigned int Class_2_E3850E7B66E714B6_TypeDefinitionIndex = 52890;

class Class_2_E3850E7B66E714B6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* MPGEHLEADII; // 0x0
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GameEntity* OALILMALLAI; // 0x20
	::Class_3_FA3DB7B30E78C0CA_2* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::LevelGraphComponent* LJCPCPJJEIB; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_2*))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3850E7B66E714B6_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
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
