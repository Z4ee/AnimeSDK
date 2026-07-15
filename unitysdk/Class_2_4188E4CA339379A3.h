#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class MonoEffectPluginEntityFollowEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4188E4CA339379A3_METHOD_2_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x1755BE50)
#define CLASS_2_4188E4CA339379A3_METHOD_2_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x1755B8E0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_51F0FE1A09DB9E61_OFFSET UNITYSDK_OFFSET(0x1755B7A0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1755BCB0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1755B6C0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_99462BC90C62BA8E_1_OFFSET UNITYSDK_OFFSET(0x1755BC00)
#define CLASS_2_4188E4CA339379A3_METHOD_2_99462BC90C62BA8E_OFFSET UNITYSDK_OFFSET(0x1755B890)
#define CLASS_2_4188E4CA339379A3_METHOD_2_9EAB261938ECA35A_OFFSET UNITYSDK_OFFSET(0x1755BA30)
#define CLASS_2_4188E4CA339379A3_METHOD_2_C006EF9131AC83DF_OFFSET UNITYSDK_OFFSET(0x1755C2D0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_C75BDBED59C3449E_OFFSET UNITYSDK_OFFSET(0x1755BC50)
#define CLASS_2_4188E4CA339379A3_METHOD_2_FCC709676397F1AF_OFFSET UNITYSDK_OFFSET(0x1755BFC0)
#define CLASS_2_4188E4CA339379A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1755C320)

inline static constexpr unsigned int Class_2_4188E4CA339379A3_TypeDefinitionIndex = 66737;

class Class_2_4188E4CA339379A3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::RPG::MVector3 Field_2_1; // 0x20
	::UnityEngine::Quaternion Field_2_2; // 0x2C
	::UnityEngine::Quaternion Field_2_3; // 0x3C
	::RPG::MVector3 Field_2_4; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_99462BC90C62BA8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_99462BC90C62BA8E_OFFSET))(this);
	}

	::System::Void Method_2_9EAB261938ECA35A(::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_9EAB261938ECA35A_OFFSET))(this, a1);
	}

	::System::Void Method_2_99462BC90C62BA8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_99462BC90C62BA8E_1_OFFSET))(this);
	}

	::System::Void Method_2_C75BDBED59C3449E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_C75BDBED59C3449E_OFFSET))(this, a1);
	}

	::System::Void Method_2_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_2_FCC709676397F1AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_FCC709676397F1AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_226842F6044F973B_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginEntityFollowEffect* Method_2_C006EF9131AC83DF()
	{
		return ((::RPG::Client::MonoEffectPluginEntityFollowEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_C006EF9131AC83DF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_51F0FE1A09DB9E61()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_51F0FE1A09DB9E61_OFFSET))(this);
	}
};
