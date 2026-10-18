#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddSneakEffect; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_5C5883DEEE5E96DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB90EED0)
#define CLASS_2_5C5883DEEE5E96DD_METHOD_2_50DAA2D68A6C09FD_OFFSET UNITYSDK_OFFSET(0xB90FB10)
#define CLASS_2_5C5883DEEE5E96DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xB90F5F0)
#define CLASS_2_5C5883DEEE5E96DD_METHOD_2_CA44EFE57CEE5AB8_OFFSET UNITYSDK_OFFSET(0xB90F7D0)
#define CLASS_2_5C5883DEEE5E96DD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB90F070)
#define CLASS_2_5C5883DEEE5E96DD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB90FCE0)
#define CLASS_2_5C5883DEEE5E96DD_TICK_OFFSET UNITYSDK_OFFSET(0xB90FC00)
#define CLASS_2_5C5883DEEE5E96DD__CTOR_OFFSET UNITYSDK_OFFSET(0xB90EEC0)

inline static constexpr unsigned int Class_2_5C5883DEEE5E96DD_TypeDefinitionIndex = 52329;

class Class_2_5C5883DEEE5E96DD : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x20
	::RPG::GameCore::AddSneakEffect* OFKGLJOAMLD; // 0x28
	::Class_3_07C3C4D2990C49EE* MIDNKFFEBMG; // 0x30
	::RPG::GameCore::CharacterVisibleComponent* MDDDGNIOKOF; // 0x38
	::System::Boolean NMACOLODPPD; // 0x40
	::System::Boolean DIMECBLLOGB; // 0x41

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddSneakEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddSneakEffect*))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_METHOD_2_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_50DAA2D68A6C09FD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_METHOD_2_50DAA2D68A6C09FD_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA44EFE57CEE5AB8(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_METHOD_2_CA44EFE57CEE5AB8_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5C5883DEEE5E96DD_ONTASKRESET_OFFSET))(this);
	}
};
