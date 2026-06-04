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
class Class_1_6DE8726ADEF173A7_7;
class Class_1_86A56C53AF99E943;
class Class_1_8B172FAD11DD4BB5;
class Class_1_8F8B7368C48977DE;
class Class_1_9BA88018AC303C05;
class Class_1_B31117A1E82937F5;
class Class_1_C4C2ACF3D9655BEA_28;
class Class_1_D52D4C3F14D3FD6A;
class Class_1_F1C57540A2293C7F;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define CLASS_2_D7A74C083376D5D6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A08F00)
#define CLASS_2_D7A74C083376D5D6_GET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET UNITYSDK_OFFSET(0x13A0B740)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_2058ECBCF6D9089D_OFFSET UNITYSDK_OFFSET(0x13A0A7C0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_36E47868EF373D40_OFFSET UNITYSDK_OFFSET(0x13A09710)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13A0A740)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x13A0A890)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x13A0A8F0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13A0A6D0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x13A0A320)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x13A090F0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x13A09060)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_8339EF96C271882B_OFFSET UNITYSDK_OFFSET(0x13A0A440)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_84BC49D56C1AFB9E_OFFSET UNITYSDK_OFFSET(0x13A0AB90)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13A09F80)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x13A099C0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0x13A0A610)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_DF7A42235624D777_OFFSET UNITYSDK_OFFSET(0x13A09360)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x13A0A830)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x13A0A660)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC4D30408A2C6900_OFFSET UNITYSDK_OFFSET(0x13A0A990)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC61075536D10822_1_OFFSET UNITYSDK_OFFSET(0x13A0A550)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC61075536D10822_OFFSET UNITYSDK_OFFSET(0x13A0A4E0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_EC6CE26AB4985D28_OFFSET UNITYSDK_OFFSET(0x13A0A5C0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_F8B73ECE7F883AC1_1_OFFSET UNITYSDK_OFFSET(0x13A0A3F0)
#define CLASS_2_D7A74C083376D5D6_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x13A0A3A0)
#define CLASS_2_D7A74C083376D5D6_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13A09450)
#define CLASS_2_D7A74C083376D5D6_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13A09510)
#define CLASS_2_D7A74C083376D5D6_SET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET UNITYSDK_OFFSET(0x13A0B750)
#define CLASS_2_D7A74C083376D5D6_TICK_OFFSET UNITYSDK_OFFSET(0x13A09550)
#define CLASS_2_D7A74C083376D5D6__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0B760)
#define CLASS_2_D7A74C083376D5D6___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13A0B7F0)

inline static constexpr unsigned int Class_2_D7A74C083376D5D6_TypeDefinitionIndex = 53297;

class Class_2_D7A74C083376D5D6 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* _OverrideLinearMovementAutoDirection_k__BackingField; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_1; // 0x20
	::Class_1_8B172FAD11DD4BB5* Field_2_2; // 0x28
	::Class_1_86A56C53AF99E943* Field_2_3; // 0x30
	::Class_1_D52D4C3F14D3FD6A* Field_2_4; // 0x38
	::RPG::GameCore::TransformComponent* Field_2_5; // 0x40
	::Class_1_9BA88018AC303C05* Field_2_6; // 0x48
	::Class_1_C4C2ACF3D9655BEA_28* Field_2_7; // 0x50
	::Class_1_6DE8726ADEF173A7_7* Field_2_8; // 0x58
	::Class_1_58605927BBE9A4A2* Field_2_9; // 0x60
	::RPG::GameCore::CharacterModelComponent* Field_2_10; // 0x68
	::System::Int32 Field_2_11; // 0x70
	::UnityEngine::Quaternion Field_2_12; // 0x74
	::UnityEngine::Vector3 Field_2_13; // 0x84
	::System::Single Field_2_14; // 0x90
	::UnityEngine::Vector3 Field_2_15; // 0x94
	::System::Single Field_2_16; // 0xA0
	::UnityEngine::Vector3 Field_2_17; // 0xA4
	::System::Single Field_2_18; // 0xB0
	::System::Single Field_2_19; // 0xB4
	::RPG::GameCore::AdvCharacterRotationState Field_2_20; // 0xB8
	::RPG::GameCore::AdvCharacterFloatingState Field_2_21; // 0xBC

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

	::Class_1_F1C57540A2293C7F* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_F1C57540A2293C7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_47FCE72550F759BF_OFFSET))(this);
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

	::System::Boolean Method_2_EC6CE26AB4985D28()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_EC6CE26AB4985D28_OFFSET))(this);
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

	::System::Void Method_2_E9A575D18A0748D9_1(::Class_1_6DE8726ADEF173A7_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_7*))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6_METHOD_2_E9A575D18A0748D9_1_OFFSET))(this, a1);
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

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D7A74C083376D5D6___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
