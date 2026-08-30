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

#define CLASS_2_4188E4CA339379A3_METHOD_2_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x15761AE0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_188E79BE765DE2C3_OFFSET UNITYSDK_OFFSET(0x15761FB0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x15761580)
#define CLASS_2_4188E4CA339379A3_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x157618F0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_2F3A7EB0C94C4BB8_OFFSET UNITYSDK_OFFSET(0x15761410)
#define CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15761940)
#define CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15761330)
#define CLASS_2_4188E4CA339379A3_METHOD_2_99462BC90C62BA8E_1_OFFSET UNITYSDK_OFFSET(0x157618A0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_99462BC90C62BA8E_OFFSET UNITYSDK_OFFSET(0x15761530)
#define CLASS_2_4188E4CA339379A3_METHOD_2_9EAB261938ECA35A_OFFSET UNITYSDK_OFFSET(0x157616D0)
#define CLASS_2_4188E4CA339379A3_METHOD_2_C575D690B75418DD_OFFSET UNITYSDK_OFFSET(0x15761C50)
#define CLASS_2_4188E4CA339379A3__CTOR_OFFSET UNITYSDK_OFFSET(0x15762020)

inline static constexpr unsigned int Class_2_4188E4CA339379A3_TypeDefinitionIndex = 69839;

class Class_2_4188E4CA339379A3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PJFPEKPDKIH; // 0x18
	::UnityEngine::Quaternion HDNOODAJMHE; // 0x20
	::UnityEngine::Quaternion CBKDGAFDBHH; // 0x30
	::RPG::MVector3 EGHJFEPGLDF; // 0x40
	::RPG::MVector3 HBKILGFLPOI; // 0x4C

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

	::System::Void Method_2_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_2_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_2_C575D690B75418DD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_C575D690B75418DD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_226842F6044F973B_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginEntityFollowEffect* Method_2_188E79BE765DE2C3()
	{
		return ((::RPG::Client::MonoEffectPluginEntityFollowEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_188E79BE765DE2C3_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_2F3A7EB0C94C4BB8()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4188E4CA339379A3_METHOD_2_2F3A7EB0C94C4BB8_OFFSET))(this);
	}
};
