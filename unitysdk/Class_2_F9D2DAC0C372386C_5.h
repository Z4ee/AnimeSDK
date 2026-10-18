#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class FormationData; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_5_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x15BD9470)
#define CLASS_2_F9D2DAC0C372386C_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15BD92D0)
#define CLASS_2_F9D2DAC0C372386C_5__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15BD9330)
#define CLASS_2_F9D2DAC0C372386C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD9280)
#define CLASS_2_F9D2DAC0C372386C_5__RESOLVE_OFFSET UNITYSDK_OFFSET(0x15BD9350)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_5_TypeDefinitionIndex = 56524;

class Class_2_F9D2DAC0C372386C_5 : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::FormationData*>
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

	::System::Void _ctor_2(::RPG::GameCore::FormationData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::FormationData* _Resolve()
	{
		return ((::RPG::GameCore::FormationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_5_UNRESOLVE_OFFSET))(this);
	}
};
