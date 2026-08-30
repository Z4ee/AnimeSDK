#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ECC4E6ADAEEA66;
class Class_2_70550F2EE8A92C1F;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B62177FFC32A3674_GET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x187282D0)
#define CLASS_1_B62177FFC32A3674_GET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x187282B0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x18729C30)
#define CLASS_1_B62177FFC32A3674_METHOD_1_84BB0FC3F2A3AAA9_OFFSET UNITYSDK_OFFSET(0x187297F0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_9DFA3005978AF9DB_OFFSET UNITYSDK_OFFSET(0x187290F0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_9F11D5796B54872D_OFFSET UNITYSDK_OFFSET(0x18729AB0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_B54BE3BA29CFCAF9_OFFSET UNITYSDK_OFFSET(0x187294D0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_C13FF1006FB39E3D_OFFSET UNITYSDK_OFFSET(0x18728C80)
#define CLASS_1_B62177FFC32A3674_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x187286C0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x187282F0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x187284D0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x187283D0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x187285C0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x18728A00)
#define CLASS_1_B62177FFC32A3674_SET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x187282E0)
#define CLASS_1_B62177FFC32A3674_SET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x187282C0)
#define CLASS_1_B62177FFC32A3674__CTOR_OFFSET UNITYSDK_OFFSET(0x18729EB0)

inline static constexpr unsigned int Class_1_B62177FFC32A3674_TypeDefinitionIndex = 57114;

class Class_1_B62177FFC32A3674 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* IHIAEKHPBMH; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* EJPGOGENLJO; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E8ECC4E6ADAEEA66*>* JDJDCLGPLOE; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* NBEHFFIMIPI; // 0x28
	::System::Boolean _MuteScaleNtf_k__BackingField; // 0x30
	::System::Boolean AJAPHKJNOHO; // 0x31
	::System::Boolean _MutePositionNtf_k__BackingField; // 0x32

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674__CTOR_OFFSET))(this);
	}

	::System::Boolean get_MuteScaleNtf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_GET_MUTESCALENTF_OFFSET))(this);
	}

	::System::Void set_MuteScaleNtf(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_SET_MUTESCALENTF_OFFSET))(this, a1);
	}

	::System::Boolean get_MutePositionNtf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_GET_MUTEPOSITIONNTF_OFFSET))(this);
	}

	::System::Void set_MutePositionNtf(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_SET_MUTEPOSITIONNTF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_E3DE31A03057E055_1_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_D9BF9B27FAC3AAD2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_D9BF9B27FAC3AAD2_OFFSET))(this);
	}

	::System::Void Method_1_FD3B916300F77FDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_FD3B916300F77FDA_OFFSET))(this);
	}

	::System::Void Method_1_C13FF1006FB39E3D(::Class_2_70550F2EE8A92C1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_70550F2EE8A92C1F*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_C13FF1006FB39E3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DFA3005978AF9DB(::Class_2_70550F2EE8A92C1F* a1, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_70550F2EE8A92C1F*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_9DFA3005978AF9DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B54BE3BA29CFCAF9(::Class_2_70550F2EE8A92C1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_70550F2EE8A92C1F*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_B54BE3BA29CFCAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_84BB0FC3F2A3AAA9(::Class_2_70550F2EE8A92C1F* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_70550F2EE8A92C1F*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_84BB0FC3F2A3AAA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9F11D5796B54872D(::System::Boolean a1, ::Class_2_70550F2EE8A92C1F* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_70550F2EE8A92C1F*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_9F11D5796B54872D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}
};
