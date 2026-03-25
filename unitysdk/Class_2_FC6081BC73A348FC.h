#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5136E14D9202F88B.h"
#include "unitysdk/Class_2_FC6081BC73A348FC_WorldFourSpeState.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_A4F0FA6F81B0B135;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_FC6081BC73A348FC_METHOD_2_0EBCBF3C29D8B33D_OFFSET UNITYSDK_OFFSET(0x893B780)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x893B4A0)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_4D2A473556700CDC_OFFSET UNITYSDK_OFFSET(0x893B280)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x893BC00)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x893B990)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x893B370)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x893BC60)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x893B450)
#define CLASS_2_FC6081BC73A348FC_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x893B560)
#define CLASS_2_FC6081BC73A348FC__CTOR_OFFSET UNITYSDK_OFFSET(0x893B270)
#define CLASS_2_FC6081BC73A348FC___ADDENDCELLEFFECT_B__5_0_OFFSET UNITYSDK_OFFSET(0x893BBF0)

inline static constexpr unsigned int Class_2_FC6081BC73A348FC_TypeDefinitionIndex = 61828;

class Class_2_FC6081BC73A348FC : public ::Class_1_5136E14D9202F88B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::Class_2_FC6081BC73A348FC_WorldFourSpeState Field_2_4; // 0x28
	::RPG::MVector3 Field_2_3; // 0x2C

	::System::Void _ctor(::Class_1_A4F0FA6F81B0B135* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4F0FA6F81B0B135*))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4D2A473556700CDC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_4D2A473556700CDC_OFFSET))(this);
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

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC6081BC73A348FC_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
