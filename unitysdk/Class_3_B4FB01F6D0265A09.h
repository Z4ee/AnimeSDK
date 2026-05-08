#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_674;
namespace System { class String; }

#define CLASS_3_B4FB01F6D0265A09_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x116BCBB0)
#define CLASS_3_B4FB01F6D0265A09_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x116BCC90)
#define CLASS_3_B4FB01F6D0265A09_METHOD_3_C560AC67CF346DCB_OFFSET UNITYSDK_OFFSET(0x116BCD20)
#define CLASS_3_B4FB01F6D0265A09_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x116BD130)
#define CLASS_3_B4FB01F6D0265A09_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x116BCB30)
#define CLASS_3_B4FB01F6D0265A09__CCTOR_OFFSET UNITYSDK_OFFSET(0x116BCC00)
#define CLASS_3_B4FB01F6D0265A09__CTOR_OFFSET UNITYSDK_OFFSET(0x116BCC80)

inline static constexpr unsigned int Class_3_B4FB01F6D0265A09_TypeDefinitionIndex = 58906;

class Class_3_B4FB01F6D0265A09 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x7B; // 0x0
	::System::String* Field_3_8; // 0x48
	::Class_2_208CC9941471731A_674* Field_3_9; // 0x50
	::System::String* Field_3_7; // 0x58
	::System::String* Field_3_4; // 0x60
	::UnityEngine::Vector3 Field_3_2; // 0x68
	::System::UInt32 Field_3_10; // 0x74
	::UnityEngine::Vector3 Field_3_1; // 0x78
	::UnityEngine::Vector3 Field_3_5; // 0x84
	::UnityEngine::Vector3 Field_3_0; // 0x90
	::System::Boolean Field_3_3; // 0x9C
	::UnityEngine::Vector3 Field_3_6; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C560AC67CF346DCB(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_METHOD_3_C560AC67CF346DCB_OFFSET))(this, a1);
	}

	static ::Class_3_B4FB01F6D0265A09* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_B4FB01F6D0265A09*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B4FB01F6D0265A09_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
