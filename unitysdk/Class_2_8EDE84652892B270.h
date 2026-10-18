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

#define CLASS_2_8EDE84652892B270_METHOD_2_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x15A46B40)
#define CLASS_2_8EDE84652892B270_METHOD_2_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0x15A465A0)
#define CLASS_2_8EDE84652892B270_METHOD_2_2DA8F7A684C1DC34_OFFSET UNITYSDK_OFFSET(0x15A46950)
#define CLASS_2_8EDE84652892B270_METHOD_2_51F0FE1A09DB9E61_OFFSET UNITYSDK_OFFSET(0x15A46460)
#define CLASS_2_8EDE84652892B270_METHOD_2_6E4820C3BE9ACB06_OFFSET UNITYSDK_OFFSET(0x15A466F0)
#define CLASS_2_8EDE84652892B270_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15A469A0)
#define CLASS_2_8EDE84652892B270_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15A46380)
#define CLASS_2_8EDE84652892B270_METHOD_2_99462BC90C62BA8E_1_OFFSET UNITYSDK_OFFSET(0x15A46900)
#define CLASS_2_8EDE84652892B270_METHOD_2_99462BC90C62BA8E_OFFSET UNITYSDK_OFFSET(0x15A46550)
#define CLASS_2_8EDE84652892B270_METHOD_2_C006EF9131AC83DF_OFFSET UNITYSDK_OFFSET(0x15A46FC0)
#define CLASS_2_8EDE84652892B270_METHOD_2_FCC709676397F1AF_OFFSET UNITYSDK_OFFSET(0x15A46CB0)
#define CLASS_2_8EDE84652892B270__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47010)

inline static constexpr unsigned int Class_2_8EDE84652892B270_TypeDefinitionIndex = 69873;

class Class_2_8EDE84652892B270 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* PJFPEKPDKIH; // 0x18
	::UnityEngine::Quaternion HDNOODAJMHE; // 0x20
	::UnityEngine::Quaternion CBKDGAFDBHH; // 0x30
	::RPG::MVector3 EGHJFEPGLDF; // 0x40
	::RPG::MVector3 HBKILGFLPOI; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_99462BC90C62BA8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_99462BC90C62BA8E_OFFSET))(this);
	}

	::System::Void Method_2_6E4820C3BE9ACB06(::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_6E4820C3BE9ACB06_OFFSET))(this, a1);
	}

	::System::Void Method_2_99462BC90C62BA8E_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_99462BC90C62BA8E_1_OFFSET))(this);
	}

	::System::Void Method_2_2DA8F7A684C1DC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_2DA8F7A684C1DC34_OFFSET))(this);
	}

	::System::Void Method_2_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_2_FCC709676397F1AF(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_FCC709676397F1AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_226842F6044F973B_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginEntityFollowEffect* Method_2_C006EF9131AC83DF()
	{
		return ((::RPG::Client::MonoEffectPluginEntityFollowEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_C006EF9131AC83DF_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_51F0FE1A09DB9E61()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EDE84652892B270_METHOD_2_51F0FE1A09DB9E61_OFFSET))(this);
	}
};
