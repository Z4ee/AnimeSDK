#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvNpcPatrolStatus.h"
#include "unitysdk/RPG/GameCore/OfficerLineupPatrolStatus.h"
#include "unitysdk/RPG/GameCore/SoldierLineupPatrolStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
class Class_1_F41502F4DEBDB355;
class Class_2_19E76B515E7B257C;
class Class_2_8B5CAF842C5FBAA1;
class Class_2_A0580152EB393340;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class AISlaveConfig; }
namespace RPG::GameCore { class AdvNPCOfficerLineupPatrol; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2ECF3E74BC6E7972_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F09BD0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_15A11EB4EAAB3892_OFFSET UNITYSDK_OFFSET(0x17F0B5B0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_1FF2F2C6E71ECAD4_OFFSET UNITYSDK_OFFSET(0x17F0D580)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x17F0A150)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x17F0C1C0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x17F0CDA0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x17F0BC80)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_68337B7DC92048C0_OFFSET UNITYSDK_OFFSET(0x17F0B690)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_68FB99B33E7C7AEB_OFFSET UNITYSDK_OFFSET(0x17F0D670)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_75827C77C2CACBC7_OFFSET UNITYSDK_OFFSET(0x17F0BB90)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17F0B2C0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x17F0C710)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0x17F0A690)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x17F0B0C0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x17F0B640)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_9C814A85CBF45139_OFFSET UNITYSDK_OFFSET(0x17F0B490)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_A08790145D7087F5_OFFSET UNITYSDK_OFFSET(0x17F0CDF0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_A84CEAF7AFA573B3_OFFSET UNITYSDK_OFFSET(0x17F0D130)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17F0B020)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_B38EBBDFEAD62A01_OFFSET UNITYSDK_OFFSET(0x17F0D280)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0x17F0CAB0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_CAE8FB8CC7CF7CEF_OFFSET UNITYSDK_OFFSET(0x17F0B130)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_E28D96E8A800BE06_OFFSET UNITYSDK_OFFSET(0x17F0B8E0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_E57184F348C5EB8B_OFFSET UNITYSDK_OFFSET(0x17F0D3C0)
#define CLASS_2_2ECF3E74BC6E7972_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17F09DB0)
#define CLASS_2_2ECF3E74BC6E7972_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17F09FA0)
#define CLASS_2_2ECF3E74BC6E7972_TICK_OFFSET UNITYSDK_OFFSET(0x17F0A240)
#define CLASS_2_2ECF3E74BC6E7972__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F0D750)
#define CLASS_2_2ECF3E74BC6E7972__CTOR_OFFSET UNITYSDK_OFFSET(0x17F097D0)
#define CLASS_2_2ECF3E74BC6E7972__ENTERPATROL_B__16_0_OFFSET UNITYSDK_OFFSET(0x17F0D760)
#define CLASS_2_2ECF3E74BC6E7972__FACETOTARGETPOSITION_B__22_0_OFFSET UNITYSDK_OFFSET(0x17F0D770)

inline static constexpr unsigned int Class_2_2ECF3E74BC6E7972_TypeDefinitionIndex = 50046;

class Class_2_2ECF3E74BC6E7972 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2ECF3E74BC6E7972_TypeDefinitionIndex)->GetStaticField(0x9F60);
	}
	::Class_2_19E76B515E7B257C* Field_2_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x20
	::RPG::Client::MapNpcDef* Field_2_3; // 0x28
	::RPG::GameCore::NPCComponent* Field_2_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_F41502F4DEBDB355*>* Field_2_5; // 0x38
	::RPG::GameCore::TaskContext* Field_2_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_2_8B5CAF842C5FBAA1*, ::RPG::GameCore::SoldierLineupPatrolStatus>* Field_2_7; // 0x48
	::System::Collections::Generic::List_1<::Class_2_8B5CAF842C5FBAA1*>* Field_2_8; // 0x50
	::Class_1_5F51D4049EA87B7B* Field_2_9; // 0x58
	::Class_2_A0580152EB393340* Field_2_10; // 0x60
	::RPG::GameCore::AdvNPCOfficerLineupPatrol* Field_2_11; // 0x68
	::Class_1_23F67DD15593C8D6* Field_2_12; // 0x70
	::RPG::GameCore::AdvNpcPatrolStatus Field_2_13; // 0x78
	::UnityEngine::Vector3 Field_2_14; // 0x7C
	::System::Boolean Field_2_15; // 0x88
	::System::UInt32 Field_2_16; // 0x8C
	::System::Int32 Field_2_17; // 0x90
	::RPG::GameCore::OfficerLineupPatrolStatus Field_2_18; // 0x94
	::System::Single Field_2_19; // 0x98

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCOfficerLineupPatrol* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2368DFE07F28F7DA(::Class_2_8B5CAF842C5FBAA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8B5CAF842C5FBAA1*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9C814A85CBF45139(::Class_2_8B5CAF842C5FBAA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8B5CAF842C5FBAA1*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_9C814A85CBF45139_OFFSET))(this, a1);
	}

	::System::Void Method_2_15A11EB4EAAB3892(::Class_2_8B5CAF842C5FBAA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8B5CAF842C5FBAA1*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_15A11EB4EAAB3892_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_8B5CAF842C5FBAA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_8B5CAF842C5FBAA1*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_68337B7DC92048C0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_68337B7DC92048C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_81A66FB988DFA6AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_81A66FB988DFA6AA_OFFSET))(this);
	}

	::System::Void Method_2_75827C77C2CACBC7(::RPG::GameCore::AISlaveConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISlaveConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_75827C77C2CACBC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_CAE8FB8CC7CF7CEF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_CAE8FB8CC7CF7CEF_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_89C03AF435ED2C78_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_2_B38EBBDFEAD62A01(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_B38EBBDFEAD62A01_OFFSET))(this, a1);
	}

	::System::Void Method_2_E28D96E8A800BE06(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_E28D96E8A800BE06_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_E57184F348C5EB8B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_E57184F348C5EB8B_OFFSET))(this);
	}

	::System::Void Method_2_1FF2F2C6E71ECAD4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_1FF2F2C6E71ECAD4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_68FB99B33E7C7AEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_68FB99B33E7C7AEB_OFFSET))(this);
	}

	::System::Void Method_2_A08790145D7087F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_A08790145D7087F5_OFFSET))(this);
	}

	::System::Void Method_2_A84CEAF7AFA573B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_A84CEAF7AFA573B3_OFFSET))(this);
	}

	::System::Void _EnterPatrol_b__16_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972__ENTERPATROL_B__16_0_OFFSET))(this);
	}

	::System::Void _FaceToTargetPosition_b__22_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972__FACETOTARGETPOSITION_B__22_0_OFFSET))(this);
	}
};
