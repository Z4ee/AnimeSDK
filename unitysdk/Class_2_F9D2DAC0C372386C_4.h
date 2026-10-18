#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_4_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x1555ADE0)
#define CLASS_2_F9D2DAC0C372386C_4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1555AC40)
#define CLASS_2_F9D2DAC0C372386C_4__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1555ACA0)
#define CLASS_2_F9D2DAC0C372386C_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1555ABF0)
#define CLASS_2_F9D2DAC0C372386C_4__RESOLVE_OFFSET UNITYSDK_OFFSET(0x1555ACC0)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_4_TypeDefinitionIndex = 56525;

class Class_2_F9D2DAC0C372386C_4 : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::VCameraConfig*>
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_4__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_4__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::VCameraConfig* _Resolve()
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_4__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_4_UNRESOLVE_OFFSET))(this);
	}
};
