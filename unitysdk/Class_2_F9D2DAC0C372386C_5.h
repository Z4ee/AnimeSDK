#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_5_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x15566520)
#define CLASS_2_F9D2DAC0C372386C_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15566380)
#define CLASS_2_F9D2DAC0C372386C_5__CTOR_2_OFFSET UNITYSDK_OFFSET(0x155663E0)
#define CLASS_2_F9D2DAC0C372386C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15566330)
#define CLASS_2_F9D2DAC0C372386C_5__RESOLVE_OFFSET UNITYSDK_OFFSET(0x15566400)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_5_TypeDefinitionIndex = 56525;

class Class_2_F9D2DAC0C372386C_5 : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::VCameraConfig*>
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::VCameraConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::VCameraConfig* _Resolve()
	{
		return ((::RPG::GameCore::VCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5_UNRESOLVE_OFFSET))(this);
	}
};
