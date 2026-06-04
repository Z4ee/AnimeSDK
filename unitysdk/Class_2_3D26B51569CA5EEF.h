#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_4;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_3D26B51569CA5EEF_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xAB18A90)
#define CLASS_2_3D26B51569CA5EEF_METHOD_2_538009D0B11159B3_OFFSET UNITYSDK_OFFSET(0xAB18B80)
#define CLASS_2_3D26B51569CA5EEF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAB18F50)
#define CLASS_2_3D26B51569CA5EEF_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0xAB18DD0)
#define CLASS_2_3D26B51569CA5EEF__CTOR_OFFSET UNITYSDK_OFFSET(0xAB18EC0)
#define CLASS_2_3D26B51569CA5EEF__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB189D0)
#define CLASS_2_3D26B51569CA5EEF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAB18EF0)

inline static constexpr unsigned int Class_2_3D26B51569CA5EEF_TypeDefinitionIndex = 66923;

class Class_2_3D26B51569CA5EEF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_0; // 0x60
	::RPG::Client::LocalizedText* Field_2_1; // 0x68
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_538009D0B11159B3(::Class_1_6CE70F4211D79CD5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_4*))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF_METHOD_2_538009D0B11159B3_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3D26B51569CA5EEF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
