#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_5C7F69784A5C81DE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_678D70946B8AA4E6_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x13CDFC50)
#define CLASS_2_678D70946B8AA4E6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13CE01A0)
#define CLASS_2_678D70946B8AA4E6_METHOD_2_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x13CDFD40)
#define CLASS_2_678D70946B8AA4E6_METHOD_2_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x13CE0020)
#define CLASS_2_678D70946B8AA4E6__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE0110)
#define CLASS_2_678D70946B8AA4E6__ONBIND_OFFSET UNITYSDK_OFFSET(0x13CDFB90)
#define CLASS_2_678D70946B8AA4E6___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13CE0140)

inline static constexpr unsigned int Class_2_678D70946B8AA4E6_TypeDefinitionIndex = 66922;

class Class_2_678D70946B8AA4E6 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::LocalizedText* Field_2_0; // 0x60
	::RPG::Client::UIValueChangeAnimation* Field_2_1; // 0x68
	::UnityEngine::UI::Image* Field_2_2; // 0x70
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_CEEA8717F1571454(::Class_1_5C7F69784A5C81DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C7F69784A5C81DE*))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6_METHOD_2_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2A08F3D951A0C1D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6_METHOD_2_D2A08F3D951A0C1D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_678D70946B8AA4E6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
