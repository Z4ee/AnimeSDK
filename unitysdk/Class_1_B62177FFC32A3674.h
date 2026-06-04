#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"
#include "unitysdk/System/Object.h"

class Class_1_E8ECC4E6ADAEEA66;
class Class_2_B992A3C719B13727;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B62177FFC32A3674_GET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x112A5690)
#define CLASS_1_B62177FFC32A3674_GET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x112A5670)
#define CLASS_1_B62177FFC32A3674_METHOD_1_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x112A6FD0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_84BB0FC3F2A3AAA9_OFFSET UNITYSDK_OFFSET(0x112A6B90)
#define CLASS_1_B62177FFC32A3674_METHOD_1_9DFA3005978AF9DB_OFFSET UNITYSDK_OFFSET(0x112A6490)
#define CLASS_1_B62177FFC32A3674_METHOD_1_9F11D5796B54872D_OFFSET UNITYSDK_OFFSET(0x112A6E50)
#define CLASS_1_B62177FFC32A3674_METHOD_1_B54BE3BA29CFCAF9_OFFSET UNITYSDK_OFFSET(0x112A6870)
#define CLASS_1_B62177FFC32A3674_METHOD_1_C13FF1006FB39E3D_OFFSET UNITYSDK_OFFSET(0x112A6020)
#define CLASS_1_B62177FFC32A3674_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x112A5A60)
#define CLASS_1_B62177FFC32A3674_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x112A56B0)
#define CLASS_1_B62177FFC32A3674_METHOD_1_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x112A5880)
#define CLASS_1_B62177FFC32A3674_METHOD_1_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0x112A5790)
#define CLASS_1_B62177FFC32A3674_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x112A5970)
#define CLASS_1_B62177FFC32A3674_METHOD_1_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0x112A5DA0)
#define CLASS_1_B62177FFC32A3674_SET_MUTEPOSITIONNTF_OFFSET UNITYSDK_OFFSET(0x112A56A0)
#define CLASS_1_B62177FFC32A3674_SET_MUTESCALENTF_OFFSET UNITYSDK_OFFSET(0x112A5680)
#define CLASS_1_B62177FFC32A3674__CTOR_OFFSET UNITYSDK_OFFSET(0x112A7250)

inline static constexpr unsigned int Class_1_B62177FFC32A3674_TypeDefinitionIndex = 53178;

class Class_1_B62177FFC32A3674 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_E8ECC4E6ADAEEA66*>* Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean _MuteScaleNtf_k__BackingField; // 0x31
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

	::System::Void Method_1_C13FF1006FB39E3D(::Class_2_B992A3C719B13727* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B992A3C719B13727*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_C13FF1006FB39E3D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9DFA3005978AF9DB(::Class_2_B992A3C719B13727* a1, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B992A3C719B13727*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_9DFA3005978AF9DB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B54BE3BA29CFCAF9(::Class_2_B992A3C719B13727* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B992A3C719B13727*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_B54BE3BA29CFCAF9_OFFSET))(this, a1);
	}

	::System::Void Method_1_84BB0FC3F2A3AAA9(::Class_2_B992A3C719B13727* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B992A3C719B13727*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_84BB0FC3F2A3AAA9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9F11D5796B54872D(::System::Boolean a1, ::Class_2_B992A3C719B13727* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_B992A3C719B13727*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_9F11D5796B54872D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B62177FFC32A3674_METHOD_1_51BBA01F511E6107_OFFSET))(this);
	}
};
