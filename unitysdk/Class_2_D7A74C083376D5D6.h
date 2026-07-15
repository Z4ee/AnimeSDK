#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvCharacterFloatingState.h"
#include "unitysdk/RPG/GameCore/AdvCharacterRotationState.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/Struct_2_2D5788B16E028A11.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_58605927BBE9A4A2;
class Class_1_6DE8726ADEF173A7_8;
class Class_1_86A56C53AF99E943;
class Class_1_8B172FAD11DD4BB5;
class Class_1_8F8B7368C48977DE;
class Class_1_9BA88018AC303C05;
class Class_1_B31117A1E82937F5;
class Class_1_C4C2ACF3D9655BEA_28;
class Class_1_C891149273D7CFB5;
class Class_1_D52D4C3F14D3FD6A;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define CLASS_2_D7A74C083376D5D6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B08720)
#define CLASS_2_D7A74C083376D5D6_GET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET UNITYSDK_OFFSET(0x14B0AF10)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_2058ECBCF6D9089D_OFFSET UNITYSDK_OFFSET(0x14B09FA0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_36E47868EF373D40_OFFSET UNITYSDK_OFFSET(0x14B08F10)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x14B09F20)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x14B0A070)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x14B0A0D0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14B09EC0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x14B09B10)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x14B088F0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x14B08870)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_8339EF96C271882B_OFFSET UNITYSDK_OFFSET(0x14B09C30)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_84BC49D56C1AFB9E_OFFSET UNITYSDK_OFFSET(0x14B0A370)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x14B09770)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x14B091B0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_AEE8799035F6C4DD_OFFSET UNITYSDK_OFFSET(0x14B09DB0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x14B09E00)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_DF7A42235624D777_OFFSET UNITYSDK_OFFSET(0x14B08B50)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x14B0A010)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14B09E50)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC4D30408A2C6900_OFFSET UNITYSDK_OFFSET(0x14B0A170)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC61075536D10822_1_OFFSET UNITYSDK_OFFSET(0x14B09D40)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x14B09CD0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x14B09BE0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x14B09B90)
#define CLASS_2_D7A74C083376D5D6_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x14B08C40)
#define CLASS_2_D7A74C083376D5D6_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x14B08D00)
#define CLASS_2_D7A74C083376D5D6_SET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET UNITYSDK_OFFSET(0x14B0AF20)
#define CLASS_2_D7A74C083376D5D6_TICK_OFFSET UNITYSDK_OFFSET(0x14B08D40)
#define CLASS_2_D7A74C083376D5D6__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0AF30)

inline static constexpr unsigned int Class_2_D7A74C083376D5D6_TypeDefinitionIndex = 54512;

class Class_2_D7A74C083376D5D6 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_2_0; // 0x18
	::Class_1_9BA88018AC303C05* Field_2_1; // 0x20
	::Class_1_8B172FAD11DD4BB5* Field_2_2; // 0x28
	::Class_1_86A56C53AF99E943* Field_2_3; // 0x30
	::RPG::GameCore::CharacterModelComponent* Field_2_4; // 0x38
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x40
	::Class_1_C4C2ACF3D9655BEA_28* Field_2_6; // 0x48
	::Class_1_6DE8726ADEF173A7_8* Field_2_7; // 0x50
	::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* _OverrideLinearMovementAutoDirection_k__BackingField; // 0x58
	::Class_1_D52D4C3F14D3FD6A* Field_2_9; // 0x60
	::Class_1_58605927BBE9A4A2* Field_2_10; // 0x68
	::UnityEngine::Quaternion Field_2_11; // 0x70
	::RPG::GameCore::AdvCharacterRotationState Field_2_12; // 0x80
	::System::Int32 Field_2_13; // 0x84
	::System::Single Field_2_14; // 0x88
	::UnityEngine::Vector3 Field_2_15; // 0x8C
	::UnityEngine::Vector3 Field_2_16; // 0x98
	::System::Single Field_2_17; // 0xA4
	::System::Single Field_2_18; // 0xA8
	::RPG::GameCore::AdvCharacterFloatingState Field_2_19; // 0xAC
	::System::Single Field_2_20; // 0xB0
	::UnityEngine::Vector3 Field_2_21; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DF7A42235624D777(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_DF7A42235624D777_OFFSET))(this, a1);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_TICK_OFFSET))(this, a1);
	}

	::Class_1_C891149273D7CFB5* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_C891149273D7CFB5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::Class_1_86A56C53AF99E943* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_86A56C53AF99E943*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::Class_1_58605927BBE9A4A2* Method_2_F8B73ECE7F883AC1_1()
	{
		return ((::Class_1_58605927BBE9A4A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_F8B73ECE7F883AC1_1_OFFSET))(this);
	}

	::Class_1_D52D4C3F14D3FD6A* Method_2_8339EF96C271882B(::Struct_2_2D5788B16E028A11 a1)
	{
		return ((::Class_1_D52D4C3F14D3FD6A*(*)(::PVOID, ::Struct_2_2D5788B16E028A11))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_8339EF96C271882B_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC61075536D10822(::Class_1_B31117A1E82937F5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B31117A1E82937F5*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_EC61075536D10822_OFFSET))(this, a1);
	}

	::System::Void Method_2_EC61075536D10822_1(::Class_1_8F8B7368C48977DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F8B7368C48977DE*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_EC61075536D10822_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AEE8799035F6C4DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_AEE8799035F6C4DD_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_C4C2ACF3D9655BEA_28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_28*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_2058ECBCF6D9089D(::System::Boolean a1, ::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_2058ECBCF6D9089D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9_1(::Class_1_6DE8726ADEF173A7_8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_8*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_3_OFFSET))(this);
	}

	::System::Void Method_2_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_36E47868EF373D40(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_36E47868EF373D40_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_EC4D30408A2C6900(::System::Int32& a1, ::System::Single& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_EC4D30408A2C6900_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_84BC49D56C1AFB9E(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_84BC49D56C1AFB9E_OFFSET))(this, a1);
	}

	::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* get_OverrideLinearMovementAutoDirection()
	{
		return ((::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_GET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET))(this);
	}

	::System::Void set_OverrideLinearMovementAutoDirection(::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_SET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET))(this, a1);
	}
};
