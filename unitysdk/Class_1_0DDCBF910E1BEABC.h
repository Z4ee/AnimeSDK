#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleCharacterCameraTag.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtBattleCharacterCameraConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0DDCBF910E1BEABC_CLEAR_OFFSET UNITYSDK_OFFSET(0x9A14B90)
#define CLASS_1_0DDCBF910E1BEABC_METHOD_1_5D53338527D01CA8_OFFSET UNITYSDK_OFFSET(0x9A14C20)
#define CLASS_1_0DDCBF910E1BEABC_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x9A148E0)
#define CLASS_1_0DDCBF910E1BEABC_METHOD_1_B7A8627FBC70C11A_OFFSET UNITYSDK_OFFSET(0x9A148F0)
#define CLASS_1_0DDCBF910E1BEABC__CTOR_OFFSET UNITYSDK_OFFSET(0x9A14DC0)

inline static constexpr unsigned int Class_1_0DDCBF910E1BEABC_TypeDefinitionIndex = 50105;

class Class_1_0DDCBF910E1BEABC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_5F51D4049EA87B7B*>* Field_1_2; // 0x10
	::RPG::GameCore::TaskContext* Field_1_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DDCBF910E1BEABC__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DDCBF910E1BEABC_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}

	::System::Void Method_1_B7A8627FBC70C11A(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::RtBattleCharacterCameraConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_0DDCBF910E1BEABC_METHOD_1_B7A8627FBC70C11A_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0DDCBF910E1BEABC_CLEAR_OFFSET))(this);
	}

	::RPG::GameCore::RtBattleCharacterCameraConfig* Method_1_5D53338527D01CA8(::RPG::GameCore::RtBattleCharacterCameraTag a1)
	{
		return ((::RPG::GameCore::RtBattleCharacterCameraConfig*(*)(::PVOID, ::RPG::GameCore::RtBattleCharacterCameraTag))((::PBYTE)hIl2Cpp + CLASS_1_0DDCBF910E1BEABC_METHOD_1_5D53338527D01CA8_OFFSET))(this, a1);
	}
};
