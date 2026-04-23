#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetSkillTargetFormation; }
namespace RPG::GameCore { class TargetFormationConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B2EA5FDE95986074_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9917A10)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_01F007DF4ACDEBF8_OFFSET UNITYSDK_OFFSET(0x9918820)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_602D96DF4A28BA46_OFFSET UNITYSDK_OFFSET(0x9918E70)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_6CF2BB138F9BE565_OFFSET UNITYSDK_OFFSET(0x9919360)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_70D5880054673131_OFFSET UNITYSDK_OFFSET(0x9919940)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_76B2CD2618E98EEE_OFFSET UNITYSDK_OFFSET(0x9919720)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_95CD76A019E3B038_OFFSET UNITYSDK_OFFSET(0x9919E60)
#define CLASS_2_B2EA5FDE95986074_METHOD_2_A72BBA28C830D7A4_OFFSET UNITYSDK_OFFSET(0x9918C40)
#define CLASS_2_B2EA5FDE95986074_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9917AB0)
#define CLASS_2_B2EA5FDE95986074_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9919E10)
#define CLASS_2_B2EA5FDE95986074_TICK_OFFSET UNITYSDK_OFFSET(0x9917A50)
#define CLASS_2_B2EA5FDE95986074__CTOR_OFFSET UNITYSDK_OFFSET(0x9917A00)

inline static constexpr unsigned int Class_2_B2EA5FDE95986074_TypeDefinitionIndex = 52005;

class Class_2_B2EA5FDE95986074 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::SetSkillTargetFormation* Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x34
	::UnityEngine::Quaternion Field_2_4; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_01F007DF4ACDEBF8(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_01F007DF4ACDEBF8_OFFSET))(this, a1);
	}

	::System::Void Method_2_602D96DF4A28BA46(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_602D96DF4A28BA46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A72BBA28C830D7A4(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_A72BBA28C830D7A4_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_76B2CD2618E98EEE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_76B2CD2618E98EEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_70D5880054673131(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_70D5880054673131_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CF2BB138F9BE565(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TargetFormationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetFormationConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_6CF2BB138F9BE565_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_95CD76A019E3B038(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2EA5FDE95986074_METHOD_2_95CD76A019E3B038_OFFSET))(this, a1, a2);
	}
};
