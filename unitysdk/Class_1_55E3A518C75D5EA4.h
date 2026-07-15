#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_8B83CE81FFD7409A;
namespace RPG::Client { class BattleAlertParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_55E3A518C75D5EA4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A681D0)
#define CLASS_1_55E3A518C75D5EA4_METHOD_1_83BA7A77318408F1_OFFSET UNITYSDK_OFFSET(0x13A68470)
#define CLASS_1_55E3A518C75D5EA4_METHOD_1_F4E56A8E4D4BF903_OFFSET UNITYSDK_OFFSET(0x13A68260)
#define CLASS_1_55E3A518C75D5EA4__CTOR_OFFSET UNITYSDK_OFFSET(0x13A68520)

inline static constexpr unsigned int Class_1_55E3A518C75D5EA4_TypeDefinitionIndex = 68199;

class Class_1_55E3A518C75D5EA4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillType, ::Class_1_8B83CE81FFD7409A*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55E3A518C75D5EA4__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_55E3A518C75D5EA4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F4E56A8E4D4BF903(::RPG::Client::BattleAlertParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + CLASS_1_55E3A518C75D5EA4_METHOD_1_F4E56A8E4D4BF903_OFFSET))(this, a1);
	}

	::Class_1_8B83CE81FFD7409A* Method_1_83BA7A77318408F1(::RPG::GameCore::SkillType a1)
	{
		return ((::Class_1_8B83CE81FFD7409A*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + CLASS_1_55E3A518C75D5EA4_METHOD_1_83BA7A77318408F1_OFFSET))(this, a1);
	}
};
