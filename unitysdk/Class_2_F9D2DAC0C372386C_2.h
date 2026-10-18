#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_2_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0xBF0F5F0)
#define CLASS_2_F9D2DAC0C372386C_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBF0F430)
#define CLASS_2_F9D2DAC0C372386C_2__CTOR_2_OFFSET UNITYSDK_OFFSET(0xBF0F490)
#define CLASS_2_F9D2DAC0C372386C_2__CTOR_OFFSET UNITYSDK_OFFSET(0xBF0F3E0)
#define CLASS_2_F9D2DAC0C372386C_2__RESOLVE_OFFSET UNITYSDK_OFFSET(0xBF0F4B0)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_2_TypeDefinitionIndex = 56523;

class Class_2_F9D2DAC0C372386C_2 : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::TargetEvaluator*>
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_2__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::TargetEvaluator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_2__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TargetEvaluator* _Resolve()
	{
		return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_2__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_2_UNRESOLVE_OFFSET))(this);
	}
};
