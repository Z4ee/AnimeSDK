#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfigRefBase_1.h"

namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }

#define CLASS_2_F9D2DAC0C372386C_3_UNRESOLVE_OFFSET UNITYSDK_OFFSET(0x15A2DAF0)
#define CLASS_2_F9D2DAC0C372386C_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A2D950)
#define CLASS_2_F9D2DAC0C372386C_3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15A2D9B0)
#define CLASS_2_F9D2DAC0C372386C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2D900)
#define CLASS_2_F9D2DAC0C372386C_3__RESOLVE_OFFSET UNITYSDK_OFFSET(0x15A2D9D0)

inline static constexpr unsigned int Class_2_F9D2DAC0C372386C_3_TypeDefinitionIndex = 56522;

class Class_2_F9D2DAC0C372386C_3 : public ::RPG::GameCore::JsonConfigRefBase_1<::RPG::GameCore::TaskListTemplate*>
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_3__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::RPG::GameCore::TaskListTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_3__CTOR_2_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskListTemplate* _Resolve()
	{
		return ((::RPG::GameCore::TaskListTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_3__RESOLVE_OFFSET))(this);
	}

	::System::Void UnResolve()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9D2DAC0C372386C_3_UNRESOLVE_OFFSET))(this);
	}
};
