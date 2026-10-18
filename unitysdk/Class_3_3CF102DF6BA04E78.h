#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"

class Class_1_274386B6ECA5E606;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC4773E0)
#define CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC4775E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_043AEF5D7DD905FE_OFFSET UNITYSDK_OFFSET(0xC4752E0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xC4767F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_1_OFFSET UNITYSDK_OFFSET(0xC477210)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_OFFSET UNITYSDK_OFFSET(0xC477070)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0xC4772A0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET UNITYSDK_OFFSET(0xC475030)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0xC475A70)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_5C061BFFDACCF2F9_OFFSET UNITYSDK_OFFSET(0xC474F30)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0xC476980)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC4768F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0xC4751F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xC475470)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xC476540)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xC4772F0)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET UNITYSDK_OFFSET(0xC477100)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_CBA096B6B8D30164_OFFSET UNITYSDK_OFFSET(0xC476D00)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xC476480)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET UNITYSDK_OFFSET(0xC476880)
#define CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xC4764D0)
#define CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC474E20)
#define CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET UNITYSDK_OFFSET(0xC4777E0)
#define CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET UNITYSDK_OFFSET(0xC474B50)

inline static constexpr unsigned int Class_3_3CF102DF6BA04E78_TypeDefinitionIndex = 71925;

class Class_3_3CF102DF6BA04E78 : public ::Class_2_4156D5F344F828BD
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* NBJIGEOCMJC; // 0x0
	// static const ::System::String* LMHJHHEELLO; // 0x0
	// static const ::System::String* NNMNBGDBJAN; // 0x0
	// static const ::System::String* JPPPJGGAMJP; // 0x0
	// static const ::RPG::GameCore::ModifierBehaviorFlag FKJAGNNBGAN; // 0x0
	// static const ::System::String* FBNOEMDNIBN; // 0x0
	// static const ::System::String* IBAOBHODAKN; // 0x0
	// static const ::System::String* LLLKIDGGMKJ; // 0x0
	::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0xB8
	::RPG::Client::SPProgress* NAAODEIIMCI; // 0xC0
	::Class_1_274386B6ECA5E606* LCAFDOLIHIH; // 0xC8
	::UnityEngine::UI::Image* HFJBNHOHJHM; // 0xD0
	::UnityEngine::UI::Image* AJKPFICIIIP; // 0xD8
	::UnityEngine::UI::Image* IFPFGDMAJCF; // 0xE0
	::UnityEngine::Animation* LIFEJLAJJKO; // 0xE8
	::UnityEngine::Transform* MEBAOIBNLHL; // 0xF0
	::UnityEngine::UI::Image* MAOLDDGOHKO; // 0xF8
	::UnityEngine::Transform* CEGHCGEHNGI; // 0x100
	::UnityEngine::UI::SmoothMask* DOEGJDFFCNI; // 0x108
	::UnityEngine::UI::Image* IHDDCCAIDIB; // 0x110
	::UnityEngine::UI::Image* PMJFBCCOBJF; // 0x118
	::System::Boolean KHCEJBHMIDF; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_5C061BFFDACCF2F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_5C061BFFDACCF2F9_OFFSET))(this);
	}

	::System::Void Method_3_043AEF5D7DD905FE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_043AEF5D7DD905FE_OFFSET))(this, a1);
	}

	::System::Void Method_3_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_3_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_3_F5B4708E7805566C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_F5B4708E7805566C_1_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_3_CBA096B6B8D30164(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_CBA096B6B8D30164_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D5FD057B7606DE5(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_OFFSET))(this, a1);
	}

	::System::Void Method_3_2D5FD057B7606DE5_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_2D5FD057B7606DE5_1_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_3_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Void Method_3_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C4E2F930A41E34C0(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C4E2F930A41E34C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_427D56D899C161B9(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_427D56D899C161B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_METHOD_3_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3CF102DF6BA04E78_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
