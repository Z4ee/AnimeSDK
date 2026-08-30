#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_24A88014580ADDB3;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCasterToTargetConfig; }
namespace RPG::Client { class CameraSomatoDynamicOffset; }
namespace RPG::Client { class CloseupShotData; }
namespace RPG::Client { class FightModuleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7C810361B290A5A_METHOD_1_07BCFC57BBEA5532_OFFSET UNITYSDK_OFFSET(0x15AAF880)
#define CLASS_1_B7C810361B290A5A_METHOD_1_1475C67D4133B352_OFFSET UNITYSDK_OFFSET(0x15AB2EF0)
#define CLASS_1_B7C810361B290A5A_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x15AAF700)
#define CLASS_1_B7C810361B290A5A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15AB0260)
#define CLASS_1_B7C810361B290A5A_METHOD_1_3ABD0165571B5EF8_OFFSET UNITYSDK_OFFSET(0x15AB2060)
#define CLASS_1_B7C810361B290A5A_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15AB2530)
#define CLASS_1_B7C810361B290A5A_METHOD_1_5AB9334900615F7B_OFFSET UNITYSDK_OFFSET(0x15AB0340)
#define CLASS_1_B7C810361B290A5A_METHOD_1_71DD74098CFB7065_OFFSET UNITYSDK_OFFSET(0x15AB2C80)
#define CLASS_1_B7C810361B290A5A_METHOD_1_971C008093F4256E_OFFSET UNITYSDK_OFFSET(0x15AB11D0)
#define CLASS_1_B7C810361B290A5A_METHOD_1_9D8EF9AD3B13BD0E_OFFSET UNITYSDK_OFFSET(0x15AB1660)
#define CLASS_1_B7C810361B290A5A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15AAF770)
#define CLASS_1_B7C810361B290A5A_METHOD_1_B51668C48B36C071_1_OFFSET UNITYSDK_OFFSET(0x15AB2340)
#define CLASS_1_B7C810361B290A5A_METHOD_1_B51668C48B36C071_OFFSET UNITYSDK_OFFSET(0x15AB2150)
#define CLASS_1_B7C810361B290A5A_METHOD_1_C291676ABF9E9E8D_OFFSET UNITYSDK_OFFSET(0x15AB19B0)
#define CLASS_1_B7C810361B290A5A_METHOD_1_E6DC35D53BB280A2_OFFSET UNITYSDK_OFFSET(0x15AB0D90)
#define CLASS_1_B7C810361B290A5A_METHOD_1_E7CD24A54D7ADF3B_OFFSET UNITYSDK_OFFSET(0x15AB10A0)
#define CLASS_1_B7C810361B290A5A_METHOD_1_FAE9C4050544FE63_OFFSET UNITYSDK_OFFSET(0x15AB1590)
#define CLASS_1_B7C810361B290A5A__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAF470)

inline static constexpr unsigned int Class_1_B7C810361B290A5A_TypeDefinitionIndex = 69622;

class Class_1_B7C810361B290A5A : public ::System::Object
{
public:
	::RPG::Client::FightModuleConfig* GBCNKFOMCJO; // 0x10
	::RPG::Client::CloseupShotData* PCCIBCHCLHE; // 0x18
	::Class_2_24A88014580ADDB3* KGNJKPBPFKC; // 0x20
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x28
	::RPG::Client::CameraFightStateCasterToTargetConfig* HBJMKGKJHLO; // 0x30
	::System::Single DJHEOFLMKHI; // 0x38
	::UnityEngine::Quaternion CPBCEPJJNLK; // 0x3C
	::System::Single IHOLJOBEOOO; // 0x4C
	::UnityEngine::Quaternion EFOJEMGDBKL; // 0x50
	::System::Single BPAIDCADMDO; // 0x60
	::System::Boolean DOFJLCMOJML; // 0x64
	::System::Boolean GDGAOJMLDHC; // 0x65
	::UnityEngine::Vector3 KOGCFJCMFLD; // 0x68
	::UnityEngine::Vector3 IBMCLNIKOOJ; // 0x74
	::System::Single IMGJAKMFGIO; // 0x80
	::RPG::MVector3 PCIGOFEGMCN; // 0x84
	::UnityEngine::Vector3 BOKBLMPAFOP; // 0x90
	::System::Single DDMLGPKAIOB; // 0x9C
	::UnityEngine::Vector3 ECLDPECGDPB; // 0xA0
	::UnityEngine::Vector3 GNLKFOKBMHN; // 0xAC
	::System::Single PBKPHPBJJOC; // 0xB8
	::UnityEngine::Quaternion GCGKBFJIDLO; // 0xBC
	::UnityEngine::Vector3 IPDEGHKPEOO; // 0xCC
	::UnityEngine::Vector3 POJOCKIAHEG; // 0xD8

	::System::Void _ctor(::RPG::Client::CameraDataAndFlags* a1, ::RPG::Client::CloseupShotData* a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CloseupShotData*, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_07BCFC57BBEA5532(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Single a6, ::System::Nullable_1<::UnityEngine::Quaternion> a7, ::System::Nullable_1<::RPG::MVector3> a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_07BCFC57BBEA5532_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_E6DC35D53BB280A2(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_E6DC35D53BB280A2_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_E7CD24A54D7ADF3B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_E7CD24A54D7ADF3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_5AB9334900615F7B(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_5AB9334900615F7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C291676ABF9E9E8D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_C291676ABF9E9E8D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::RPG::Client::CameraSomatoDynamicOffset* Method_1_1475C67D4133B352(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Single& a2)
	{
		return ((::RPG::Client::CameraSomatoDynamicOffset*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_1475C67D4133B352_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71DD74098CFB7065(::RPG::Client::CameraSomatoDynamicOffset* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraSomatoDynamicOffset*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_71DD74098CFB7065_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9D8EF9AD3B13BD0E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_9D8EF9AD3B13BD0E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_B51668C48B36C071_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_B51668C48B36C071_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_B51668C48B36C071_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_3ABD0165571B5EF8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_3ABD0165571B5EF8_OFFSET))(this);
	}

	::System::Single Method_1_FAE9C4050544FE63()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_FAE9C4050544FE63_OFFSET))(this);
	}

	::System::Boolean Method_1_971C008093F4256E(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_B7C810361B290A5A_METHOD_1_971C008093F4256E_OFFSET))(this, a1, a2, a3);
	}
};
