#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Struct_2_22FE7B3FF5958EFB.h"
#include "unitysdk/Struct_2_4495C6EC85BB961A.h"

class AMLegIK;
class AMLegIK_AnimageDelegate;
namespace System { class Action; }
namespace UnityEngine { class AnimageComponent; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_518;

#define CLASS_3_1CF0AE513797DBD3_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15FECC60)
#define CLASS_3_1CF0AE513797DBD3_METHOD_3_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15FECDC0)
#define CLASS_3_1CF0AE513797DBD3_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15FECE20)
#define CLASS_3_1CF0AE513797DBD3_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x15FECD40)
#define CLASS_3_1CF0AE513797DBD3_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x15FEC8F0)
#define CLASS_3_1CF0AE513797DBD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FECCB0)
#define CLASS_3_1CF0AE513797DBD3__CTOR_OFFSET UNITYSDK_OFFSET(0x15FECD30)

inline static constexpr unsigned int Class_3_1CF0AE513797DBD3_TypeDefinitionIndex = 60609;

class Class_3_1CF0AE513797DBD3 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x92; // 0x0
	::Il2CppArray<::System::Boolean>* Field_3_0; // 0x48
	::Class_0_16E4307DCC419505_518<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>* Field_3_10; // 0x50
	::UnityEngine::AnimageComponent* Field_3_2; // 0x58
	::AMLegIK* Field_3_1; // 0x60
	::AMLegIK_AnimageDelegate* Field_3_5; // 0x68
	::System::Action* Field_3_4; // 0x70
	::System::Action* Field_3_3; // 0x78
	::System::Boolean Field_3_9; // 0x80
	::System::Boolean Field_3_7; // 0x81
	::System::Boolean Field_3_6; // 0x82
	::Foundation::Coroutine::CoroutineHandle Field_3_8; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_1CF0AE513797DBD3* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_1CF0AE513797DBD3*(*)())((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Boolean Method_3_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3_METHOD_3_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1CF0AE513797DBD3_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
