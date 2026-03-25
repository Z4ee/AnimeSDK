#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class RendererMaterialCache; }

#define CLASS_2_CB6F540C07360F54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10695E00)
#define CLASS_2_CB6F540C07360F54_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10696060)
#define CLASS_2_CB6F540C07360F54_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10696E90)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_1_OFFSET UNITYSDK_OFFSET(0x106968B0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_2_OFFSET UNITYSDK_OFFSET(0x10696930)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_OFFSET UNITYSDK_OFFSET(0x10696830)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2E360FF2B24436D4_OFFSET UNITYSDK_OFFSET(0x106964A0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x10695DB0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_5EC642F9F8BCFCB9_OFFSET UNITYSDK_OFFSET(0x10696600)
#define CLASS_2_CB6F540C07360F54_METHOD_2_7D25AEBB6993B499_1_OFFSET UNITYSDK_OFFSET(0x10696B50)
#define CLASS_2_CB6F540C07360F54_METHOD_2_7D25AEBB6993B499_2_OFFSET UNITYSDK_OFFSET(0x10696CF0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_7D25AEBB6993B499_OFFSET UNITYSDK_OFFSET(0x106969B0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_BEF1DE9624B24370_OFFSET UNITYSDK_OFFSET(0x10696F30)
#define CLASS_2_CB6F540C07360F54_METHOD_2_C29740D96B56956E_OFFSET UNITYSDK_OFFSET(0x106966A0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_D1149065CC4CFA55_OFFSET UNITYSDK_OFFSET(0x10696740)
#define CLASS_2_CB6F540C07360F54_METHOD_2_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x106960D0)
#define CLASS_2_CB6F540C07360F54_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x10695EC0)
#define CLASS_2_CB6F540C07360F54_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x10695E70)
#define CLASS_2_CB6F540C07360F54__CTOR_OFFSET UNITYSDK_OFFSET(0x10695DA0)
#define CLASS_2_CB6F540C07360F54___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x10696FB0)

inline static constexpr unsigned int Class_2_CB6F540C07360F54_TypeDefinitionIndex = 46109;

class Class_2_CB6F540C07360F54 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::RendererMaterialCache* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Boolean Field_2_8; // 0x28
	::System::Boolean Field_2_0; // 0x29
	::System::Boolean Field_2_7; // 0x2A
	::System::Single Field_2_6; // 0x2C
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_2E360FF2B24436D4(::UnityEngine::Color a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Color a4, ::UnityEngine::Color a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2E360FF2B24436D4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D1149065CC4CFA55(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_D1149065CC4CFA55_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_EE2957687AFE92A5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_EE2957687AFE92A5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_C29740D96B56956E(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_C29740D96B56956E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BEF1DE9624B24370(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_BEF1DE9624B24370_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EC642F9F8BCFCB9(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_5EC642F9F8BCFCB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7D25AEBB6993B499(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_7D25AEBB6993B499_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2746E90F93D616D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D25AEBB6993B499_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_7D25AEBB6993B499_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2746E90F93D616D2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D25AEBB6993B499_2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_7D25AEBB6993B499_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2746E90F93D616D2_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_2_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
	}
};
