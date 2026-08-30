#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class RendererMaterialCache; }

#define CLASS_2_CB6F540C07360F54_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5B59D0)
#define CLASS_2_CB6F540C07360F54_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE5B5C20)
#define CLASS_2_CB6F540C07360F54_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xE5B6A80)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_1_OFFSET UNITYSDK_OFFSET(0xE5B6470)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_2_OFFSET UNITYSDK_OFFSET(0xE5B64F0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_OFFSET UNITYSDK_OFFSET(0xE5B63F0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2A25137787E0DB0C_1_OFFSET UNITYSDK_OFFSET(0xE5B6720)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2A25137787E0DB0C_2_OFFSET UNITYSDK_OFFSET(0xE5B68D0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2A25137787E0DB0C_OFFSET UNITYSDK_OFFSET(0xE5B6570)
#define CLASS_2_CB6F540C07360F54_METHOD_2_2E360FF2B24436D4_OFFSET UNITYSDK_OFFSET(0xE5B6060)
#define CLASS_2_CB6F540C07360F54_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xE5B5980)
#define CLASS_2_CB6F540C07360F54_METHOD_2_5EC642F9F8BCFCB9_OFFSET UNITYSDK_OFFSET(0xE5B61C0)
#define CLASS_2_CB6F540C07360F54_METHOD_2_BEF1DE9624B24370_OFFSET UNITYSDK_OFFSET(0xE5B6B20)
#define CLASS_2_CB6F540C07360F54_METHOD_2_C29740D96B56956E_OFFSET UNITYSDK_OFFSET(0xE5B6260)
#define CLASS_2_CB6F540C07360F54_METHOD_2_D1149065CC4CFA55_OFFSET UNITYSDK_OFFSET(0xE5B6300)
#define CLASS_2_CB6F540C07360F54_METHOD_2_D97CDF059CC668F7_OFFSET UNITYSDK_OFFSET(0xE5B5C90)
#define CLASS_2_CB6F540C07360F54_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xE5B5A90)
#define CLASS_2_CB6F540C07360F54_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xE5B5A40)
#define CLASS_2_CB6F540C07360F54__CTOR_OFFSET UNITYSDK_OFFSET(0xE5B5970)

inline static constexpr unsigned int Class_2_CB6F540C07360F54_TypeDefinitionIndex = 57416;

class Class_2_CB6F540C07360F54 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::RendererMaterialCache* EAIBBECPIFJ; // 0x18
	::System::Single IFJMLKGEBKD; // 0x20
	::System::Single LKBKDNAMNEG; // 0x24
	::System::Single HDKKECHDBCN; // 0x28
	::System::Single FIJCHDIEKGF; // 0x2C
	::System::Single FEKKGMEBEBG; // 0x30
	::System::Boolean OEIBNCMNNJP; // 0x34
	::System::Boolean DPIKBLEOFGM; // 0x35
	::System::Boolean DFGBIEALLDD; // 0x36

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

	::System::Void Method_2_D97CDF059CC668F7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_D97CDF059CC668F7_OFFSET))(this, a1);
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

	::System::Void Method_2_2A25137787E0DB0C(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2A25137787E0DB0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2746E90F93D616D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A25137787E0DB0C_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2A25137787E0DB0C_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2746E90F93D616D2_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2A25137787E0DB0C_2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2A25137787E0DB0C_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2746E90F93D616D2_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB6F540C07360F54_METHOD_2_2746E90F93D616D2_2_OFFSET))(this, a1);
	}
};
