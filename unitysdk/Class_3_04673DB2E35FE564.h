#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_9C4F8205C3DCBA57.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelSkillEffectScope.h"

namespace System { class String; }

#define CLASS_3_04673DB2E35FE564_METHOD_3_123DFB09BD2C9B9E_1_OFFSET UNITYSDK_OFFSET(0xF3CAA10)
#define CLASS_3_04673DB2E35FE564_METHOD_3_123DFB09BD2C9B9E_2_OFFSET UNITYSDK_OFFSET(0xF3CAAD0)
#define CLASS_3_04673DB2E35FE564_METHOD_3_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0xF3CA950)
#define CLASS_3_04673DB2E35FE564_METHOD_3_45AB26B350D2252A_OFFSET UNITYSDK_OFFSET(0xF3CAB90)
#define CLASS_3_04673DB2E35FE564_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xF3CA8E0)
#define CLASS_3_04673DB2E35FE564__CTOR_OFFSET UNITYSDK_OFFSET(0xF3CAC80)

inline static constexpr unsigned int Class_3_04673DB2E35FE564_TypeDefinitionIndex = 77091;

class Class_3_04673DB2E35FE564 : public ::Class_2_9C4F8205C3DCBA57
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04673DB2E35FE564__CTOR_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_04673DB2E35FE564_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_04673DB2E35FE564_METHOD_3_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_3_123DFB09BD2C9B9E_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_04673DB2E35FE564_METHOD_3_123DFB09BD2C9B9E_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_123DFB09BD2C9B9E_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_04673DB2E35FE564_METHOD_3_123DFB09BD2C9B9E_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_45AB26B350D2252A(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelSkillEffectScope a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelSkillEffectScope))((::PBYTE)hIl2Cpp + CLASS_3_04673DB2E35FE564_METHOD_3_45AB26B350D2252A_OFFSET))(this, a1, a2);
	}
};
