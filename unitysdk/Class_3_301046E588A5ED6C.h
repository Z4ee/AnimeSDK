#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C5E5FE6832D0C155.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_301046E588A5ED6C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x134D5F60)
#define CLASS_3_301046E588A5ED6C_DOONENTER_OFFSET UNITYSDK_OFFSET(0x134D5E50)
#define CLASS_3_301046E588A5ED6C_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x134D5ED0)
#define CLASS_3_301046E588A5ED6C_METHOD_3_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0x134D6280)
#define CLASS_3_301046E588A5ED6C_METHOD_3_98CF22BA36B43C83_OFFSET UNITYSDK_OFFSET(0x134D62E0)
#define CLASS_3_301046E588A5ED6C_METHOD_3_E5264A23470727B2_OFFSET UNITYSDK_OFFSET(0x134D6030)
#define CLASS_3_301046E588A5ED6C__CTOR_OFFSET UNITYSDK_OFFSET(0x134D5C30)

inline static constexpr unsigned int Class_3_301046E588A5ED6C_TypeDefinitionIndex = 78409;

class Class_3_301046E588A5ED6C : public ::Class_2_C5E5FE6832D0C155
{
public:
	::System::Action* FFKBFPKEPEN; // 0xC0
	::System::Action* NMPLHCJKEOI; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* DANLMFFLFLH; // 0xD0
	::Il2CppArray<::RPG::GameCore::EntityType>* CCILDEPLEFF; // 0xD8
	::System::Boolean INNLLCMIDFK; // 0xE0
	::System::Boolean GFAMGLFOMGI; // 0xE1

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_E5264A23470727B2(::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_E5264A23470727B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_98CF22BA36B43C83(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_301046E588A5ED6C_METHOD_3_98CF22BA36B43C83_OFFSET))(this, a1);
	}
};
