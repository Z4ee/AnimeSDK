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

#define CLASS_2_A31606D67B4950E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA61580)
#define CLASS_2_A31606D67B4950E7_METHOD_2_089B55613DE1D687_OFFSET UNITYSDK_OFFSET(0xAA628C0)
#define CLASS_2_A31606D67B4950E7_METHOD_2_6CF2BB138F9BE565_OFFSET UNITYSDK_OFFSET(0xAA63070)
#define CLASS_2_A31606D67B4950E7_METHOD_2_95CD76A019E3B038_OFFSET UNITYSDK_OFFSET(0xAA63D50)
#define CLASS_2_A31606D67B4950E7_METHOD_2_997664B88C7543E6_OFFSET UNITYSDK_OFFSET(0xAA62B20)
#define CLASS_2_A31606D67B4950E7_METHOD_2_B43CEE784AB1C13B_OFFSET UNITYSDK_OFFSET(0xAA62410)
#define CLASS_2_A31606D67B4950E7_METHOD_2_CF7C21D487FB1779_OFFSET UNITYSDK_OFFSET(0xAA63680)
#define CLASS_2_A31606D67B4950E7_METHOD_2_EA4D2FDF5B5B3D04_OFFSET UNITYSDK_OFFSET(0xAA63430)
#define CLASS_2_A31606D67B4950E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA61620)
#define CLASS_2_A31606D67B4950E7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAA63D00)
#define CLASS_2_A31606D67B4950E7_TICK_OFFSET UNITYSDK_OFFSET(0xAA615C0)
#define CLASS_2_A31606D67B4950E7__CTOR_OFFSET UNITYSDK_OFFSET(0xAA61570)

inline static constexpr unsigned int Class_2_A31606D67B4950E7_TypeDefinitionIndex = 52679;

class Class_2_A31606D67B4950E7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetSkillTargetFormation* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::UnityEngine::Quaternion Field_2_3; // 0x34
	::System::Int32 Field_2_4; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_B43CEE784AB1C13B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_B43CEE784AB1C13B_OFFSET))(this, a1);
	}

	::System::Void Method_2_997664B88C7543E6(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_997664B88C7543E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_089B55613DE1D687(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_089B55613DE1D687_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_EA4D2FDF5B5B3D04(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_EA4D2FDF5B5B3D04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF7C21D487FB1779(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_CF7C21D487FB1779_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CF2BB138F9BE565(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TargetFormationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetFormationConfig*))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_6CF2BB138F9BE565_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_95CD76A019E3B038(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A31606D67B4950E7_METHOD_2_95CD76A019E3B038_OFFSET))(this, a1, a2);
	}
};
