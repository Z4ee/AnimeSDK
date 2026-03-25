#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"

class Class_1_B5ED7EF1795E0962;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;

#define CLASS_1_7C7A80AB814CF033_METHOD_1_2E074E9E69970385_OFFSET UNITYSDK_OFFSET(0x165C5F50)
#define CLASS_1_7C7A80AB814CF033_METHOD_1_B0638F29C87B8445_OFFSET UNITYSDK_OFFSET(0x165C5E20)
#define CLASS_1_7C7A80AB814CF033_METHOD_1_D302333778F52717_OFFSET UNITYSDK_OFFSET(0x165C6010)
#define CLASS_1_7C7A80AB814CF033_METHOD_1_EB811131AA11234F_OFFSET UNITYSDK_OFFSET(0x165C6090)

inline static constexpr unsigned int Class_1_7C7A80AB814CF033_TypeDefinitionIndex = 28891;

class Class_1_7C7A80AB814CF033 : public ::System::Object
{
public:
	static ::System::Void Method_1_B0638F29C87B8445(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_3ABA989E5AECB261* a2, ::System::UInt32 a3, ::RPG::GameCore::CakeRaceTargetLockStatus a4)
	{
		return ((::System::Void(*)(::Class_2_F3C45F1FC7349B6E*, ::Class_2_3ABA989E5AECB261*, ::System::UInt32, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_1_7C7A80AB814CF033_METHOD_1_B0638F29C87B8445_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_B5ED7EF1795E0962* Method_1_2E074E9E69970385(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
	{
		return ((::Class_1_B5ED7EF1795E0962*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_1_7C7A80AB814CF033_METHOD_1_2E074E9E69970385_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_B5ED7EF1795E0962* Method_1_D302333778F52717(::Class_2_3ABA989E5AECB261* a1, ::System::UInt32 a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
	{
		return ((::Class_1_B5ED7EF1795E0962*(*)(::Class_2_3ABA989E5AECB261*, ::System::UInt32, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + CLASS_1_7C7A80AB814CF033_METHOD_1_D302333778F52717_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_EB811131AA11234F(::Class_2_3ABA989E5AECB261* a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Boolean(*)(::Class_2_3ABA989E5AECB261*, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_7C7A80AB814CF033_METHOD_1_EB811131AA11234F_OFFSET))(a1, a2, a3, a4, a5);
	}
};
