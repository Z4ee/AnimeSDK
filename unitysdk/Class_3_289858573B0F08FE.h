#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphComponent.h"

class Class_1_E7BD46EB43F1A06F;

#define CLASS_3_289858573B0F08FE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8DD880)
#define CLASS_3_289858573B0F08FE_METHOD_3_8D956ADCE45678D8_OFFSET UNITYSDK_OFFSET(0xB8DD960)
#define CLASS_3_289858573B0F08FE_TICK_OFFSET UNITYSDK_OFFSET(0xB8DD900)
#define CLASS_3_289858573B0F08FE__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DDA20)
#define CLASS_3_289858573B0F08FE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB8DD770)

inline static constexpr unsigned int Class_3_289858573B0F08FE_TypeDefinitionIndex = 54248;

class Class_3_289858573B0F08FE : public ::RPG::GameCore::LevelGraphComponent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_8D956ADCE45678D8(::Class_1_E7BD46EB43F1A06F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7BD46EB43F1A06F*))((::PBYTE)hIl2Cpp + CLASS_3_289858573B0F08FE_METHOD_3_8D956ADCE45678D8_OFFSET))(this, a1);
	}
};
