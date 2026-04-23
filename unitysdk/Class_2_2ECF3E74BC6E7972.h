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
class Class_2_3597DB134B23579E;
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

#define CLASS_2_2ECF3E74BC6E7972_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9A5FA40)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x9A61280)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x9A603F0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0x9A62CB0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_1FC86D2BFE10815E_OFFSET UNITYSDK_OFFSET(0x9A60F30)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x9A5FF20)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0x9A61340)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x9A62920)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_43D0E6660B80632D_OFFSET UNITYSDK_OFFSET(0x9A62DF0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_5F42FB087225C58F_OFFSET UNITYSDK_OFFSET(0x9A60EC0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_68FB99B33E7C7AEB_OFFSET UNITYSDK_OFFSET(0x9A632A0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_75827C77C2CACBC7_OFFSET UNITYSDK_OFFSET(0x9A618C0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x9A610C0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x9A62360)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_8FD747E33B53F3FC_OFFSET UNITYSDK_OFFSET(0x9A62FB0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_90E9D33A92962443_OFFSET UNITYSDK_OFFSET(0x9A61420)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x9A613D0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_9DDC0238EE296CDD_OFFSET UNITYSDK_OFFSET(0x9A63170)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_A08790145D7087F5_OFFSET UNITYSDK_OFFSET(0x9A62970)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x9A60E20)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x9A61E70)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x9A62690)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_E28D96E8A800BE06_OFFSET UNITYSDK_OFFSET(0x9A615F0)
#define CLASS_2_2ECF3E74BC6E7972_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x9A619B0)
#define CLASS_2_2ECF3E74BC6E7972_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9A5FBC0)
#define CLASS_2_2ECF3E74BC6E7972_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9A5FD40)
#define CLASS_2_2ECF3E74BC6E7972_TICK_OFFSET UNITYSDK_OFFSET(0x9A60010)
#define CLASS_2_2ECF3E74BC6E7972__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A63380)
#define CLASS_2_2ECF3E74BC6E7972__CTOR_OFFSET UNITYSDK_OFFSET(0x9A5F740)
#define CLASS_2_2ECF3E74BC6E7972__ENTERPATROL_B__16_0_OFFSET UNITYSDK_OFFSET(0x9A633C0)
#define CLASS_2_2ECF3E74BC6E7972__FACETOTARGETPOSITION_B__22_0_OFFSET UNITYSDK_OFFSET(0x9A633D0)

inline static constexpr unsigned int Class_2_2ECF3E74BC6E7972_TypeDefinitionIndex = 48407;

class Class_2_2ECF3E74BC6E7972 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2ECF3E74BC6E7972_TypeDefinitionIndex)->GetStaticField(0x7530);
	}
	::Class_1_5F51D4049EA87B7B* Field_2_18; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::Class_2_3597DB134B23579E*, ::RPG::GameCore::SoldierLineupPatrolStatus>* Field_2_16; // 0x28
	::RPG::GameCore::AdvNPCOfficerLineupPatrol* Field_2_3; // 0x30
	::Class_2_19E76B515E7B257C* Field_2_4; // 0x38
	::System::Collections::Generic::List_1<::Class_1_F41502F4DEBDB355*>* Field_2_14; // 0x40
	::System::Collections::Generic::List_1<::Class_2_3597DB134B23579E*>* Field_2_13; // 0x48
	::RPG::GameCore::NPCComponent* Field_2_7; // 0x50
	::RPG::GameCore::TaskContext* Field_2_2; // 0x58
	::RPG::Client::MapNpcDef* Field_2_11; // 0x60
	::Class_1_23F67DD15593C8D6* Field_2_17; // 0x68
	::Class_2_A0580152EB393340* Field_2_5; // 0x70
	::RPG::GameCore::AdvNpcPatrolStatus Field_2_10; // 0x78
	::System::Int32 Field_2_15; // 0x7C
	::UnityEngine::Vector3 Field_2_8; // 0x80
	::System::Boolean Field_2_19; // 0x8C
	::RPG::GameCore::OfficerLineupPatrolStatus Field_2_9; // 0x90
	::System::UInt32 Field_2_12; // 0x94
	::System::Single Field_2_1; // 0x98

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

	::System::Void Method_2_2368DFE07F28F7DA(::Class_2_3597DB134B23579E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3597DB134B23579E*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_01953D7882459DEC(::Class_2_3597DB134B23579E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3597DB134B23579E*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_01953D7882459DEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_323DCA18419DFB89(::Class_2_3597DB134B23579E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3597DB134B23579E*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_3597DB134B23579E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3597DB134B23579E*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_90E9D33A92962443(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_90E9D33A92962443_OFFSET))(this, a1);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_75827C77C2CACBC7(::RPG::GameCore::AISlaveConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISlaveConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_75827C77C2CACBC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_2_1FC86D2BFE10815E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_1FC86D2BFE10815E_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_5F42FB087225C58F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_5F42FB087225C58F_OFFSET))(this);
	}

	::System::Void Method_2_7C2C2820B36B9508()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_7C2C2820B36B9508_OFFSET))(this);
	}

	::System::Void Method_2_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_C8E2469222842786_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
	}

	::System::Void Method_2_43D0E6660B80632D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_43D0E6660B80632D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E28D96E8A800BE06(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_E28D96E8A800BE06_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_8FD747E33B53F3FC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_8FD747E33B53F3FC_OFFSET))(this);
	}

	::System::Void Method_2_9DDC0238EE296CDD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_9DDC0238EE296CDD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_68FB99B33E7C7AEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_68FB99B33E7C7AEB_OFFSET))(this);
	}

	::System::Void Method_2_A08790145D7087F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_A08790145D7087F5_OFFSET))(this);
	}

	::System::Void Method_2_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2ECF3E74BC6E7972_METHOD_2_0860F812E446AE7C_OFFSET))(this);
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
