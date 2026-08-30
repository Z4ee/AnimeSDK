#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_1_5C7F69784A5C81DE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_853611BC2A26D1D6_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x15834770)
#define CLASS_2_853611BC2A26D1D6_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x15834AE0)
#define CLASS_2_853611BC2A26D1D6_METHOD_2_FDC04BEF68D4E086_OFFSET UNITYSDK_OFFSET(0x15834860)
#define CLASS_2_853611BC2A26D1D6__CTOR_OFFSET UNITYSDK_OFFSET(0x15834BD0)
#define CLASS_2_853611BC2A26D1D6__ONBIND_OFFSET UNITYSDK_OFFSET(0x158346B0)

inline static constexpr unsigned int Class_2_853611BC2A26D1D6_TypeDefinitionIndex = 71547;

class Class_2_853611BC2A26D1D6 : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x60
	::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x68
	::RPG::Client::LocalizedText* EEOBJAOPJIM; // 0x70
	::System::Boolean IDBEBIDMHME; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_853611BC2A26D1D6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_853611BC2A26D1D6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_853611BC2A26D1D6_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_FDC04BEF68D4E086(::Class_1_5C7F69784A5C81DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE*))((::PBYTE)hIl2Cpp + CLASS_2_853611BC2A26D1D6_METHOD_2_FDC04BEF68D4E086_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_853611BC2A26D1D6_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}
};
