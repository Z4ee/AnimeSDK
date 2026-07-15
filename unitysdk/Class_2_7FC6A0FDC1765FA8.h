#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_9015B34004B876E5;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_2_7FC6A0FDC1765FA8_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x1470A310)
#define CLASS_2_7FC6A0FDC1765FA8_METHOD_2_D3271A54A24C6AD0_OFFSET UNITYSDK_OFFSET(0x1470A1F0)
#define CLASS_2_7FC6A0FDC1765FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1470A490)
#define CLASS_2_7FC6A0FDC1765FA8__ONBIND_OFFSET UNITYSDK_OFFSET(0x1470A150)

inline static constexpr unsigned int Class_2_7FC6A0FDC1765FA8_TypeDefinitionIndex = 69002;

class Class_2_7FC6A0FDC1765FA8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::Class_1_9015B34004B876E5* Field_2_0; // 0x60
	::UnityEngine::Sprite* Field_2_1; // 0x68
	::RPG::Client::GridFightAugmentConfig* Field_2_2; // 0x70
	::RPG::Client::MonoUIColorSwitcher* Field_2_3; // 0x78
	::UnityEngine::UI::SmoothMask* Field_2_4; // 0x80
	::System::Double Field_2_5; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FC6A0FDC1765FA8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FC6A0FDC1765FA8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D3271A54A24C6AD0(::Class_1_9015B34004B876E5* a1, ::System::Double a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9015B34004B876E5*, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_2_7FC6A0FDC1765FA8_METHOD_2_D3271A54A24C6AD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_78C62398E94F0FB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FC6A0FDC1765FA8_METHOD_2_78C62398E94F0FB1_OFFSET))(this);
	}
};
