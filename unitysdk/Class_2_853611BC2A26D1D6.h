#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_5C7F69784A5C81DE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_853611BC2A26D1D6_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1454A250)
#define CLASS_2_853611BC2A26D1D6_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x1454A5C0)
#define CLASS_2_853611BC2A26D1D6_METHOD_2_FDC04BEF68D4E086_OFFSET UNITYSDK_OFFSET(0x1454A340)
#define CLASS_2_853611BC2A26D1D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1454A6B0)
#define CLASS_2_853611BC2A26D1D6__ONBIND_OFFSET UNITYSDK_OFFSET(0x1454A190)

inline static constexpr unsigned int Class_2_853611BC2A26D1D6_TypeDefinitionIndex = 68366;

class Class_2_853611BC2A26D1D6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::UnityEngine::UI::Image* Field_2_1; // 0x68
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

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
