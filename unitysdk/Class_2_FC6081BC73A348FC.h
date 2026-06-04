#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/Class_2_FC6081BC73A348FC_WorldFourSpeState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FC6081BC73A348FC_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0xB0474F0)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0xB046FF0)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xB047230)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0xB0479D0)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB047970)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0xB047700)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xB047100)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xB0471E0)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xB0472F0)
#define CLASS_2_FC6081BC73A348FC__CTOR_OFFSET UNITYSDK_OFFSET(0xB046FE0)
#define CLASS_2_FC6081BC73A348FC___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0xB047960)

inline static constexpr unsigned int Class_2_FC6081BC73A348FC_TypeDefinitionIndex = 70550;

class Class_2_FC6081BC73A348FC : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::MVector3 Field_2_3; // 0x28
	::Class_2_FC6081BC73A348FC_WorldFourSpeState Field_2_4; // 0x34

	::System::Void _ctor(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_2_0EBCBF3C29D8B33D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_0EBCBF3C29D8B33D_OFFSET))(this, a1);
	}

	::System::Void __AddEndCellEffect_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC___ADDENDCELLEFFECT_B__5_0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
