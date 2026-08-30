#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/VFX/VFXOverlayCharacterBackgroundPositionInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_1342B57709FD7AC5;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define CLASS_1_E0409A3F2889A09E_METHOD_1_10EF2B858DD41018_OFFSET UNITYSDK_OFFSET(0x18743EC0)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18743B60)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_C8944546C709AC12_OFFSET UNITYSDK_OFFSET(0x18744220)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18744400)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_DFDEC541B5CDC368_OFFSET UNITYSDK_OFFSET(0x18743C90)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_E235CC7960A90A11_OFFSET UNITYSDK_OFFSET(0x18744110)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18743B70)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_F660D274D148C801_OFFSET UNITYSDK_OFFSET(0x18743B80)
#define CLASS_1_E0409A3F2889A09E_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x187440A0)
#define CLASS_1_E0409A3F2889A09E__CTOR_OFFSET UNITYSDK_OFFSET(0x18744450)

inline static constexpr unsigned int Class_1_E0409A3F2889A09E_TypeDefinitionIndex = 49120;

class Class_1_E0409A3F2889A09E : public ::System::Object
{
public:
	// static const ::System::Int32 IGJNBDLOLAJ = 0x1; // 0x0
	::UnityEngine::Texture2D* AAGHPLMLFPB; // 0x10
	::UnityEngine::Renderer* JAMDAALMOAL; // 0x18
	::Class_1_1342B57709FD7AC5* DBCCOEFFKCM; // 0x20
	::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo KNGOOHANMPG; // 0x28
	::System::Boolean DIMECBLLOGB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E__CTOR_OFFSET))(this);
	}

	::Class_1_1342B57709FD7AC5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1342B57709FD7AC5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_F660D274D148C801(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_F660D274D148C801_OFFSET))(this, a1);
	}

	::System::Void Method_1_10EF2B858DD41018(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_10EF2B858DD41018_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFDEC541B5CDC368(::Class_1_1342B57709FD7AC5* a1, ::UnityEngine::Renderer*& a2, ::UnityEngine::Material*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1342B57709FD7AC5*, ::UnityEngine::Renderer*&, ::UnityEngine::Material*&))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_DFDEC541B5CDC368_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E235CC7960A90A11(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_E235CC7960A90A11_OFFSET))(this, a1);
	}

	::System::Void Method_1_C8944546C709AC12(::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::VFX::VFXOverlayCharacterBackgroundPositionInfo))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_C8944546C709AC12_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0409A3F2889A09E_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
