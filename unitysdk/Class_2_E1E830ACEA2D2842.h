#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBuffPresenter; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_E1E830ACEA2D2842_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x156B0FA0)
#define CLASS_2_E1E830ACEA2D2842_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x156B0FF0)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_4DF46064365EF3A4_OFFSET UNITYSDK_OFFSET(0x156B1030)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x156B1150)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_F4A3996D27B8F20B_OFFSET UNITYSDK_OFFSET(0x156B11A0)
#define CLASS_2_E1E830ACEA2D2842__CTOR_OFFSET UNITYSDK_OFFSET(0x156B1200)
#define CLASS_2_E1E830ACEA2D2842__ONBIND_OFFSET UNITYSDK_OFFSET(0x156B0B70)
#define CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x156B1230)
#define CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x156B1250)

inline static constexpr unsigned int Class_2_E1E830ACEA2D2842_TypeDefinitionIndex = 71188;

class Class_2_E1E830ACEA2D2842 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Button* LOJGMKCCADN; // 0x60
	::UnityEngine::UI::Button* IIEABLPHBKM; // 0x68
	::RPG::Client::ElationBuffPresenterUIParam* HCKLPPPGCIB; // 0x70
	::UnityEngine::Animation* KCOAILOHDND; // 0x78
	::RPG::Client::ElationBuffPresenter* OCHMHGBBCJI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842_GET_INDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842_GET_TRANS_OFFSET))(this);
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
