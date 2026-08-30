#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBuffPresenter; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_E1E830ACEA2D2842_METHOD_2_4DF46064365EF3A4_OFFSET UNITYSDK_OFFSET(0x15406410)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x15406530)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_F4A3996D27B8F20B_OFFSET UNITYSDK_OFFSET(0x15406580)
#define CLASS_2_E1E830ACEA2D2842__CTOR_OFFSET UNITYSDK_OFFSET(0x154065E0)
#define CLASS_2_E1E830ACEA2D2842__ONBIND_OFFSET UNITYSDK_OFFSET(0x154060B0)
#define CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x15406610)
#define CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x15406630)

inline static constexpr unsigned int Class_2_E1E830ACEA2D2842_TypeDefinitionIndex = 71150;

class Class_2_E1E830ACEA2D2842 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Button* LOJGMKCCADN; // 0x60
	::RPG::Client::ElationBuffPresenterUIParam* HCKLPPPGCIB; // 0x68
	::UnityEngine::UI::Button* IIEABLPHBKM; // 0x70
	::RPG::Client::ElationBuffPresenter* OCHMHGBBCJI; // 0x78
	::UnityEngine::Animation* KCOAILOHDND; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4DF46064365EF3A4(::RPG::Client::ElationBattleBuffGroupViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842_METHOD_2_4DF46064365EF3A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_F4A3996D27B8F20B()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842_METHOD_2_F4A3996D27B8F20B_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_0_OFFSET))(this, a1);
	}

	::System::Void __OnBind_b__0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_1_OFFSET))(this, a1);
	}
};
