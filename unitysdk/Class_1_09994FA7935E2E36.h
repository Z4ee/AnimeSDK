#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_09994FA7935E2E36_METHOD_1_65B378624FF5673B_OFFSET UNITYSDK_OFFSET(0x180BE0B0)
#define CLASS_1_09994FA7935E2E36_METHOD_1_893BC47A9A28BF59_OFFSET UNITYSDK_OFFSET(0x180BDED0)
#define CLASS_1_09994FA7935E2E36_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x180BE190)
#define CLASS_1_09994FA7935E2E36_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180BE140)
#define CLASS_1_09994FA7935E2E36__CTOR_OFFSET UNITYSDK_OFFSET(0x180BE1E0)

inline static constexpr unsigned int Class_1_09994FA7935E2E36_TypeDefinitionIndex = 54634;

class Class_1_09994FA7935E2E36 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::GameCore::FixPoint>* NJJLNIMFPBD; // 0x10
	::RPG::GameCore::FixPoint NJCODFBDLDD; // 0x18
	::System::Int32 DPLMENILLLL; // 0x20
	::RPG::GameCore::FixPoint HKOJCEMPDGE; // 0x28
	::RPG::GameCore::FixPoint AMEPBNONNCL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09994FA7935E2E36__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_893BC47A9A28BF59(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::AttackDamageType a2, ::System::Boolean a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_09994FA7935E2E36_METHOD_1_893BC47A9A28BF59_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09994FA7935E2E36_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09994FA7935E2E36_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_65B378624FF5673B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_09994FA7935E2E36_METHOD_1_65B378624FF5673B_OFFSET))(this, a1, a2);
	}
};
