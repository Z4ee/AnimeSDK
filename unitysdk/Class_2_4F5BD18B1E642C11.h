#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1152250B69783505;
class Class_2_17EDF3520C9FC3DE;
class Class_3_89DDDD327D710B05;
namespace RPG::Client::LittleGame::PingPong { class PingPongCameraView; }
namespace RPG::Client::LittleGame::PingPong { class PingPongDynamicBone; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class PingPongDropItemInfo; }
namespace RPG::GameCore { class PingPongEnemyConfig; }
namespace RPG::GameCore { class PingPongEnemyGroupConfig; }
namespace RPG::GameCore { class PingPongEnemyShootConfig; }
namespace RPG::GameCore { class PingPongEnemyShootOverrideCmptConfig; }
namespace RPG::GameCore { class PingPongEnemyStackConfig; }
namespace RPG::GameCore { class PingPongEnemyUnitConfig; }
namespace RPG::GameCore { class PingPongLevelAddPointCmptConfig; }
namespace RPG::GameCore { class PingPongProjectileInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4F5BD18B1E642C11_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1685F3D0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_01B43D1B877F310E_OFFSET UNITYSDK_OFFSET(0x1688D210)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_06EE413F5F118F16_OFFSET UNITYSDK_OFFSET(0x1688F150)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_1A9660A6909D7EAD_OFFSET UNITYSDK_OFFSET(0x1688F400)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_32156F548DFF9B68_OFFSET UNITYSDK_OFFSET(0x1688AE10)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_35B2FBA0E5997D8D_OFFSET UNITYSDK_OFFSET(0x16890A90)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x1688AF70)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_3A56D303CE773913_OFFSET UNITYSDK_OFFSET(0x1688CD30)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_401618101556C66C_OFFSET UNITYSDK_OFFSET(0x1688D450)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_4183A506897AACE6_OFFSET UNITYSDK_OFFSET(0x1688DC30)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_46EA48A9742EE531_OFFSET UNITYSDK_OFFSET(0x1688CE00)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_489A491218C2BD1D_OFFSET UNITYSDK_OFFSET(0x1688F780)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_50E30E5468FEEE17_OFFSET UNITYSDK_OFFSET(0x1688E4C0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_54CEDBD5DCB8FF0F_OFFSET UNITYSDK_OFFSET(0x16890740)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_5C9B6DC68CA2CE8D_OFFSET UNITYSDK_OFFSET(0x1688C8B0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_63A3951C98047210_OFFSET UNITYSDK_OFFSET(0x1688C610)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_73A12C1FFADBD599_OFFSET UNITYSDK_OFFSET(0x1688AA90)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_79160E0412619B08_OFFSET UNITYSDK_OFFSET(0x16890560)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_7C05131EF8C8E87C_OFFSET UNITYSDK_OFFSET(0x1688B830)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_8B9C6136D66FDACD_OFFSET UNITYSDK_OFFSET(0x16890BC0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_8CFF0F636B91228D_OFFSET UNITYSDK_OFFSET(0x16890F30)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_93BF7CCF4CA95EF5_OFFSET UNITYSDK_OFFSET(0x1688E7B0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_9673268865E37297_OFFSET UNITYSDK_OFFSET(0x1688AD00)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_AEAF6A75DCF54689_OFFSET UNITYSDK_OFFSET(0x1688FD20)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_B32870E027B88485_OFFSET UNITYSDK_OFFSET(0x1688C320)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_1_OFFSET UNITYSDK_OFFSET(0x168900E0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_2_OFFSET UNITYSDK_OFFSET(0x16890260)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_3_OFFSET UNITYSDK_OFFSET(0x168903E0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_OFFSET UNITYSDK_OFFSET(0x1688FF60)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_C8E1A02841F0B42D_OFFSET UNITYSDK_OFFSET(0x16890990)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_D45DEE19D6D4FA42_OFFSET UNITYSDK_OFFSET(0x1688FDD0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_DC7A443659A981AB_OFFSET UNITYSDK_OFFSET(0x1688ED60)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0x16890DE0)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_F7861F5872DC19FD_OFFSET UNITYSDK_OFFSET(0x1688B320)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x1688AB10)
#define CLASS_2_4F5BD18B1E642C11_METHOD_2_FB94E25B5AAA4415_OFFSET UNITYSDK_OFFSET(0x1688BD00)
#define CLASS_2_4F5BD18B1E642C11__CTOR_OFFSET UNITYSDK_OFFSET(0x1688A9D0)

inline static constexpr unsigned int Class_2_4F5BD18B1E642C11_TypeDefinitionIndex = 76177;

class Class_2_4F5BD18B1E642C11 : public ::RPG::Client::LittleGame::SimpleViewService_1<::Class_2_17EDF3520C9FC3DE*>
{
public:
	// static const ::System::Single OBEHOBMOENE; // 0x0
	::Class_2_1152250B69783505* NHIKLMODJJB; // 0x30
	::Class_3_89DDDD327D710B05* OKOEHJDMLFM; // 0x38
	::UnityEngine::Transform* CEDODCLEPBC; // 0x40

	::System::Void _ctor(::Class_3_89DDDD327D710B05* a1, ::Class_2_1152250B69783505* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_89DDDD327D710B05*, ::Class_2_1152250B69783505*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_DISPOSE_OFFSET))(this);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_73A12C1FFADBD599()
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_73A12C1FFADBD599_OFFSET))(this);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_9673268865E37297(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_9673268865E37297_OFFSET))(this, a1);
	}

	::System::Void Method_2_32156F548DFF9B68(::RPG::GameCore::PingPongLevelAddPointCmptConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongLevelAddPointCmptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_32156F548DFF9B68_OFFSET))(this, a1);
	}

	::System::Void Method_2_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_2_F7861F5872DC19FD(::RPG::GameCore::PingPongProjectileInfo* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileInfo*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_F7861F5872DC19FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7C05131EF8C8E87C(::RPG::GameCore::PingPongProjectileInfo* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileInfo*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_7C05131EF8C8E87C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB94E25B5AAA4415(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_FB94E25B5AAA4415_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B32870E027B88485(::RPG::GameCore::PingPongDropItemInfo* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongDropItemInfo*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_B32870E027B88485_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_63A3951C98047210(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_63A3951C98047210_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C9B6DC68CA2CE8D(::Class_2_17EDF3520C9FC3DE* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_5C9B6DC68CA2CE8D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3A56D303CE773913(::RPG::Client::LittleGame::PingPong::PingPongCameraView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::PingPongCameraView*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_3A56D303CE773913_OFFSET))(this, a1);
	}

	::System::Void Method_2_46EA48A9742EE531(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_46EA48A9742EE531_OFFSET))(this, a1);
	}

	::System::Void Method_2_401618101556C66C(::RPG::GameCore::LittleGameEntityConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_401618101556C66C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4183A506897AACE6(::Class_2_17EDF3520C9FC3DE* a1, ::UnityEngine::Transform* a2, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::UnityEngine::Transform*, ::System::ValueTuple_2<::RPG::GameCore::PingPongEnemyConfig*, ::RPG::GameCore::LittleGameEntityConfig*>))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_4183A506897AACE6_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_50E30E5468FEEE17(::RPG::Client::LittleGame::PingPong::PingPongDynamicBone* a1)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::RPG::Client::LittleGame::PingPong::PingPongDynamicBone*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_50E30E5468FEEE17_OFFSET))(this, a1);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_06EE413F5F118F16(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyShootConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_17EDF3520C9FC3DE*>* a3, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig* a4)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyShootConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_17EDF3520C9FC3DE*>*, ::RPG::GameCore::PingPongEnemyShootOverrideCmptConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_06EE413F5F118F16_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_DC7A443659A981AB(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyStackConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_17EDF3520C9FC3DE*>* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a4)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyStackConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_17EDF3520C9FC3DE*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_DC7A443659A981AB_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_1A9660A6909D7EAD(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyGroupConfig* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_17EDF3520C9FC3DE*>* a3)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyGroupConfig*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_17EDF3520C9FC3DE*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_1A9660A6909D7EAD_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_93BF7CCF4CA95EF5(::System::UInt32 a1, ::RPG::GameCore::PingPongEnemyUnitConfig* a2, ::UnityEngine::Transform* a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* a4)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PingPongEnemyUnitConfig*, ::UnityEngine::Transform*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_93BF7CCF4CA95EF5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_489A491218C2BD1D(::Class_2_17EDF3520C9FC3DE* a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::PingPongEnemyUnitConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::UnityEngine::Transform*, ::RPG::GameCore::PingPongEnemyUnitConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_489A491218C2BD1D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_01B43D1B877F310E(::Class_2_17EDF3520C9FC3DE* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_01B43D1B877F310E_OFFSET))(this, a1, a2);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_AEAF6A75DCF54689(::UnityEngine::RaycastHit a1)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_AEAF6A75DCF54689_OFFSET))(this, a1);
	}

	::Class_2_17EDF3520C9FC3DE* Method_2_D45DEE19D6D4FA42(::UnityEngine::Collider* a1)
	{
		return ((::Class_2_17EDF3520C9FC3DE*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_D45DEE19D6D4FA42_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C19F882B73A216DD(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C19F882B73A216DD_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C19F882B73A216DD_2(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_C19F882B73A216DD_3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C19F882B73A216DD_3_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_2_79160E0412619B08(::UnityEngine::Quaternion a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_79160E0412619B08_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_54CEDBD5DCB8FF0F(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4, ::System::Boolean a5, ::System::Single a6, ::System::Int32 a7)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*, ::System::Boolean, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_54CEDBD5DCB8FF0F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Int32 Method_2_C8E1A02841F0B42D(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Collider*>* a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Collider*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_C8E1A02841F0B42D_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_2_35B2FBA0E5997D8D(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_35B2FBA0E5997D8D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_8B9C6136D66FDACD(::UnityEngine::RaycastHit a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_8B9C6136D66FDACD_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_EC1B7452242AE25F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_8CFF0F636B91228D(::Class_2_17EDF3520C9FC3DE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11_METHOD_2_8CFF0F636B91228D_OFFSET))(this, a1);
	}
};
