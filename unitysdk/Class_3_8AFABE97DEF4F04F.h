#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_20A66CAC7607EB44.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelSkillEffectScope.h"

namespace System { class String; }

#define CLASS_3_8AFABE97DEF4F04F_METHOD_3_3215929EE992C1D6_OFFSET UNITYSDK_OFFSET(0x979FCB0)
#define CLASS_3_8AFABE97DEF4F04F_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x979F8E0)
#define CLASS_3_8AFABE97DEF4F04F_METHOD_3_F4F61B09D32675B2_1_OFFSET UNITYSDK_OFFSET(0x979FA70)
#define CLASS_3_8AFABE97DEF4F04F_METHOD_3_F4F61B09D32675B2_2_OFFSET UNITYSDK_OFFSET(0x979FB90)
#define CLASS_3_8AFABE97DEF4F04F_METHOD_3_F4F61B09D32675B2_OFFSET UNITYSDK_OFFSET(0x979F950)
#define CLASS_3_8AFABE97DEF4F04F__CTOR_OFFSET UNITYSDK_OFFSET(0x979FE00)

inline static constexpr unsigned int Class_3_8AFABE97DEF4F04F_TypeDefinitionIndex = 71143;

class Class_3_8AFABE97DEF4F04F : public ::Class_2_20A66CAC7607EB44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AFABE97DEF4F04F__CTOR_OFFSET))(this);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AFABE97DEF4F04F_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_3_F4F61B09D32675B2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AFABE97DEF4F04F_METHOD_3_F4F61B09D32675B2_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4F61B09D32675B2_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AFABE97DEF4F04F_METHOD_3_F4F61B09D32675B2_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_F4F61B09D32675B2_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8AFABE97DEF4F04F_METHOD_3_F4F61B09D32675B2_2_OFFSET))(this, a1);
	}

	::System::Void Method_3_3215929EE992C1D6(::System::UInt32 a1, ::RPG::GameCore::ChimeraDuelSkillEffectScope a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChimeraDuelSkillEffectScope))((::PBYTE)hIl2Cpp + CLASS_3_8AFABE97DEF4F04F_METHOD_3_3215929EE992C1D6_OFFSET))(this, a1, a2);
	}
};
