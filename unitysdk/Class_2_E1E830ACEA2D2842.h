#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBuffPresenter; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_E1E830ACEA2D2842_METHOD_2_4DF46064365EF3A4_OFFSET UNITYSDK_OFFSET(0x13642C90)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_9256B4946C27AD99_OFFSET UNITYSDK_OFFSET(0x13642E00)
#define CLASS_2_E1E830ACEA2D2842_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x13642DB0)
#define CLASS_2_E1E830ACEA2D2842__CTOR_OFFSET UNITYSDK_OFFSET(0x13642E20)
#define CLASS_2_E1E830ACEA2D2842__ONBIND_OFFSET UNITYSDK_OFFSET(0x13642990)
#define CLASS_2_E1E830ACEA2D2842___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13642E90)
#define CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x13642E50)
#define CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x13642E70)

inline static constexpr unsigned int Class_2_E1E830ACEA2D2842_TypeDefinitionIndex = 66540;

class Class_2_E1E830ACEA2D2842 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::ElationBuffPresenterUIParam* Field_2_0; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68
	::RPG::Client::ElationBuffPresenter* Field_2_2; // 0x70
	::UnityEngine::Animation* Field_2_3; // 0x78
	::UnityEngine::UI::Button* Field_2_4; // 0x80

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

	::UnityEngine::RectTransform* Method_2_9256B4946C27AD99()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842_METHOD_2_9256B4946C27AD99_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_0_OFFSET))(this, a1);
	}

	::System::Void __OnBind_b__0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842___ONBIND_B__0_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E1E830ACEA2D2842___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
