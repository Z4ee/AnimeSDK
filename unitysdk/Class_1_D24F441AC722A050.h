#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define CLASS_1_D24F441AC722A050_METHOD_1_65614E4F15820B4A_OFFSET UNITYSDK_OFFSET(0x134E2960)
#define CLASS_1_D24F441AC722A050_METHOD_1_78F48F708C181005_OFFSET UNITYSDK_OFFSET(0x134E29B0)
#define CLASS_1_D24F441AC722A050_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x134E2AE0)
#define CLASS_1_D24F441AC722A050__CTOR_1_OFFSET UNITYSDK_OFFSET(0x134E2950)
#define CLASS_1_D24F441AC722A050__CTOR_OFFSET UNITYSDK_OFFSET(0x134E28F0)

inline static constexpr unsigned int Class_1_D24F441AC722A050_TypeDefinitionIndex = 56706;

class Class_1_D24F441AC722A050 : public ::System::Object
{
public:
	::System::String* GGINDEBOODJ; // 0x10
	::RPG::GameCore::VCameraConfig* MOINFBGHNFO; // 0x18
	::System::Int32 NKEPLEIDNEP; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D24F441AC722A050__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D24F441AC722A050__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_65614E4F15820B4A(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D24F441AC722A050_METHOD_1_65614E4F15820B4A_OFFSET))(this, a1);
	}

	::RPG::GameCore::VCameraConfig* Method_1_78F48F708C181005()
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D24F441AC722A050_METHOD_1_78F48F708C181005_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D24F441AC722A050_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
