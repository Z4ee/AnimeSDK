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

#define CLASS_2_B16757B03BA12169_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC8A2E0)
#define CLASS_2_B16757B03BA12169_METHOD_2_528AEDA1731C382D_OFFSET UNITYSDK_OFFSET(0xBC8B590)
#define CLASS_2_B16757B03BA12169_METHOD_2_6CF2BB138F9BE565_OFFSET UNITYSDK_OFFSET(0xBC8BD00)
#define CLASS_2_B16757B03BA12169_METHOD_2_95CD76A019E3B038_OFFSET UNITYSDK_OFFSET(0xBC8C9F0)
#define CLASS_2_B16757B03BA12169_METHOD_2_997664B88C7543E6_OFFSET UNITYSDK_OFFSET(0xBC8B7B0)
#define CLASS_2_B16757B03BA12169_METHOD_2_B43CEE784AB1C13B_OFFSET UNITYSDK_OFFSET(0xBC8B150)
#define CLASS_2_B16757B03BA12169_METHOD_2_CF7C21D487FB1779_OFFSET UNITYSDK_OFFSET(0xBC8C320)
#define CLASS_2_B16757B03BA12169_METHOD_2_EA4D2FDF5B5B3D04_OFFSET UNITYSDK_OFFSET(0xBC8C0D0)
#define CLASS_2_B16757B03BA12169_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC8A380)
#define CLASS_2_B16757B03BA12169_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC8C9A0)
#define CLASS_2_B16757B03BA12169_TICK_OFFSET UNITYSDK_OFFSET(0xBC8A320)
#define CLASS_2_B16757B03BA12169__CTOR_OFFSET UNITYSDK_OFFSET(0xBC8A2D0)

inline static constexpr unsigned int Class_2_B16757B03BA12169_TypeDefinitionIndex = 56423;

class Class_2_B16757B03BA12169 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetSkillTargetFormation* OFKGLJOAMLD; // 0x20
	::UnityEngine::Quaternion PKNPAPLFMHO; // 0x28
	::System::Int32 INAKMLFKHAM; // 0x38
	::UnityEngine::Vector3 HFINBPNMFEA; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormation*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_B43CEE784AB1C13B(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*&))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_B43CEE784AB1C13B_OFFSET))(this, a1);
	}

	::System::Void Method_2_997664B88C7543E6(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_997664B88C7543E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_528AEDA1731C382D(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_528AEDA1731C382D_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_EA4D2FDF5B5B3D04(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_EA4D2FDF5B5B3D04_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF7C21D487FB1779(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_CF7C21D487FB1779_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CF2BB138F9BE565(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TargetFormationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetFormationConfig*))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_6CF2BB138F9BE565_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_95CD76A019E3B038(::System::Single a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B16757B03BA12169_METHOD_2_95CD76A019E3B038_OFFSET))(this, a1, a2);
	}
};
