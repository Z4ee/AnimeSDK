#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_9015B34004B876E5;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_2_D80D1FE3E32C9633_METHOD_2_40E6AFCB91524816_OFFSET UNITYSDK_OFFSET(0xA436810)
#define CLASS_2_D80D1FE3E32C9633_METHOD_2_F698023FC94DE47E_OFFSET UNITYSDK_OFFSET(0xA4366F0)
#define CLASS_2_D80D1FE3E32C9633__CTOR_OFFSET UNITYSDK_OFFSET(0xA4369A0)
#define CLASS_2_D80D1FE3E32C9633__ONBIND_OFFSET UNITYSDK_OFFSET(0xA436590)
#define CLASS_2_D80D1FE3E32C9633___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA4369D0)

inline static constexpr unsigned int Class_2_D80D1FE3E32C9633_TypeDefinitionIndex = 59188;

class Class_2_D80D1FE3E32C9633 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::SmoothMask* Field_2_3; // 0x60
	::RPG::Client::GridFightAugmentConfig* Field_2_2; // 0x68
	::RPG::Client::MonoUIColorSwitcher* Field_2_1; // 0x70
	::Class_1_9015B34004B876E5* Field_2_0; // 0x78
	::UnityEngine::Sprite* Field_2_4; // 0x80
	::System::Double Field_2_5; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D80D1FE3E32C9633__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D80D1FE3E32C9633__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F698023FC94DE47E(::Class_1_9015B34004B876E5* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9015B34004B876E5*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_D80D1FE3E32C9633_METHOD_2_F698023FC94DE47E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40E6AFCB91524816()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D80D1FE3E32C9633_METHOD_2_40E6AFCB91524816_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D80D1FE3E32C9633___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
