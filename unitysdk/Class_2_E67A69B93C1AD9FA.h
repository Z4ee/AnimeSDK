#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class RendererMaterialCache; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_E67A69B93C1AD9FA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A9F3F0)
#define CLASS_2_E67A69B93C1AD9FA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13A9F7A0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_0923681E23F3E91E_OFFSET UNITYSDK_OFFSET(0x13A9F910)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13A9FD80)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x13A9F3A0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_49B17BDAFA3D54D9_OFFSET UNITYSDK_OFFSET(0x13A9F650)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_5EC642F9F8BCFCB9_OFFSET UNITYSDK_OFFSET(0x13A9FA70)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_77109E5FB0A804AD_OFFSET UNITYSDK_OFFSET(0x13A9F810)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x13A9FB10)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x13A9FEA0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_B6D1987AA7FD48D4_OFFSET UNITYSDK_OFFSET(0x13A9FC40)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_BC0FA8C838B766A1_OFFSET UNITYSDK_OFFSET(0x13A9FBB0)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_BEF1DE9624B24370_OFFSET UNITYSDK_OFFSET(0x13A9FE20)
#define CLASS_2_E67A69B93C1AD9FA_METHOD_2_C29740D96B56956E_OFFSET UNITYSDK_OFFSET(0x13A9F9D0)
#define CLASS_2_E67A69B93C1AD9FA_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13A9F4B0)
#define CLASS_2_E67A69B93C1AD9FA_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13A9F460)
#define CLASS_2_E67A69B93C1AD9FA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A9F390)
#define CLASS_2_E67A69B93C1AD9FA___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x13AA0020)

inline static constexpr unsigned int Class_2_E67A69B93C1AD9FA_TypeDefinitionIndex = 53478;

class Class_2_E67A69B93C1AD9FA : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::Client::RendererMaterialCache* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Boolean Field_2_4; // 0x2C
	::System::Boolean Field_2_5; // 0x2D
	::System::Boolean Field_2_6; // 0x2E
	::System::Int32 Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_LATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0923681E23F3E91E(::System::Single a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_0923681E23F3E91E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77109E5FB0A804AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_77109E5FB0A804AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_49B17BDAFA3D54D9(::UnityEngine::SkinnedMeshRenderer* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_49B17BDAFA3D54D9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_C29740D96B56956E(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_C29740D96B56956E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_BEF1DE9624B24370(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_BEF1DE9624B24370_OFFSET))(this, a1);
	}

	::System::Void Method_2_5EC642F9F8BCFCB9(::System::Int32 a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_5EC642F9F8BCFCB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B6D1987AA7FD48D4(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_B6D1987AA7FD48D4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BC0FA8C838B766A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA_METHOD_2_BC0FA8C838B766A1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_LateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E67A69B93C1AD9FA___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, a1);
	}
};
