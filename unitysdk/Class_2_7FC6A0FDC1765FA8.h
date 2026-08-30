#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_9015B34004B876E5;
namespace RPG::Client { class GridFightAugmentConfig; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class SmoothMask; }

#define CLASS_2_7FC6A0FDC1765FA8_METHOD_2_78C62398E94F0FB1_OFFSET UNITYSDK_OFFSET(0x159A0AD0)
#define CLASS_2_7FC6A0FDC1765FA8_METHOD_2_D3271A54A24C6AD0_OFFSET UNITYSDK_OFFSET(0x159A09B0)
#define CLASS_2_7FC6A0FDC1765FA8__CTOR_OFFSET UNITYSDK_OFFSET(0x159A0C60)
#define CLASS_2_7FC6A0FDC1765FA8__ONBIND_OFFSET UNITYSDK_OFFSET(0x159A0910)

inline static constexpr unsigned int Class_2_7FC6A0FDC1765FA8_TypeDefinitionIndex = 72201;

class Class_2_7FC6A0FDC1765FA8 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::GridFightAugmentConfig* IGHAHBNLIJA; // 0x60
	::RPG::Client::MonoUIColorSwitcher* NFNKELKMJPJ; // 0x68
	::UnityEngine::UI::SmoothMask* LMAMGADEJDM; // 0x70
	::Class_1_9015B34004B876E5* AKEKCBLCBEK; // 0x78
	::UnityEngine::Sprite* EKHDCANFFIL; // 0x80
	::System::Double GBOONBHNDFC; // 0x88

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
