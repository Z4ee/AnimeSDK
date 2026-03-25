#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class ElationBattleBuffViewData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_F76E966DD50AB39A_METHOD_2_A9A17872BEDA287B_OFFSET UNITYSDK_OFFSET(0x8837660)
#define CLASS_2_F76E966DD50AB39A__CTOR_OFFSET UNITYSDK_OFFSET(0x8837800)
#define CLASS_2_F76E966DD50AB39A__ONBIND_OFFSET UNITYSDK_OFFSET(0x88373D0)
#define CLASS_2_F76E966DD50AB39A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8837830)

inline static constexpr unsigned int Class_2_F76E966DD50AB39A_TypeDefinitionIndex = 58324;

class Class_2_F76E966DD50AB39A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_4; // 0x60
	::UnityEngine::Transform* Field_2_2; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::UnityEngine::UI::Text* Field_2_3; // 0x78
	::UnityEngine::UI::Text* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E966DD50AB39A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E966DD50AB39A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A9A17872BEDA287B(::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElationBattleBuffViewData*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F76E966DD50AB39A_METHOD_2_A9A17872BEDA287B_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F76E966DD50AB39A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
