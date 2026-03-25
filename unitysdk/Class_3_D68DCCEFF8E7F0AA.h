#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FB3E7B71A45FEB7C_AttackChangeReason.h"
#include "unitysdk/Class_1_FB3E7B71A45FEB7C_HpChangeReason.h"
#include "unitysdk/Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason.h"
#include "unitysdk/Class_2_20A66CAC7607EB44.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"

class Class_2_49CAB3DE74280C58;
namespace System { class String; }

#define CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_2D07314DFF5B93F4_OFFSET UNITYSDK_OFFSET(0x114F54D0)
#define CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_2E51398A775B82E3_OFFSET UNITYSDK_OFFSET(0x114F5CC0)
#define CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_4FF204F702F6DAB6_OFFSET UNITYSDK_OFFSET(0x114F5900)
#define CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_63682220FB290CE0_OFFSET UNITYSDK_OFFSET(0x114F6070)
#define CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x114F5030)
#define CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_92C41E0FCD9C233C_OFFSET UNITYSDK_OFFSET(0x114F50A0)
#define CLASS_3_D68DCCEFF8E7F0AA__CTOR_OFFSET UNITYSDK_OFFSET(0x114F6170)

inline static constexpr unsigned int Class_3_D68DCCEFF8E7F0AA_TypeDefinitionIndex = 63102;

class Class_3_D68DCCEFF8E7F0AA : public ::Class_2_20A66CAC7607EB44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA__CTOR_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_92C41E0FCD9C233C(::Class_2_49CAB3DE74280C58* a1, ::Class_1_FB3E7B71A45FEB7C_HpChangeReason a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_FB3E7B71A45FEB7C_HpChangeReason, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_92C41E0FCD9C233C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_2D07314DFF5B93F4(::Class_2_49CAB3DE74280C58* a1, ::Class_1_FB3E7B71A45FEB7C_AttackChangeReason a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_FB3E7B71A45FEB7C_AttackChangeReason, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_2D07314DFF5B93F4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4FF204F702F6DAB6(::Class_2_49CAB3DE74280C58* a1, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_4FF204F702F6DAB6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_2E51398A775B82E3(::Class_2_49CAB3DE74280C58* a1, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::Class_1_FB3E7B71A45FEB7C_ProbabilityChangeReason, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_2E51398A775B82E3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_63682220FB290CE0(::Class_2_49CAB3DE74280C58* a1, ::RPG::GameCore::ChimeraDuelStatusType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*, ::RPG::GameCore::ChimeraDuelStatusType))((::PBYTE)hIl2Cpp + CLASS_3_D68DCCEFF8E7F0AA_METHOD_3_63682220FB290CE0_OFFSET))(this, a1, a2);
	}
};
