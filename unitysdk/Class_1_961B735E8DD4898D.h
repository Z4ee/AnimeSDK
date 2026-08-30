#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_961B735E8DD4898D_GET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1A57D740)
#define CLASS_1_961B735E8DD4898D_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A57D760)
#define CLASS_1_961B735E8DD4898D_GET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1A57D780)
#define CLASS_1_961B735E8DD4898D_GET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1A57D7C0)
#define CLASS_1_961B735E8DD4898D_GET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1A57D7A0)
#define CLASS_1_961B735E8DD4898D_METHOD_1_2CEBCCAF54FB984A_OFFSET UNITYSDK_OFFSET(0x1A57D840)
#define CLASS_1_961B735E8DD4898D_METHOD_1_6632BA9E17A7643A_OFFSET UNITYSDK_OFFSET(0x1A57DF10)
#define CLASS_1_961B735E8DD4898D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A57D7E0)
#define CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_1_OFFSET UNITYSDK_OFFSET(0x1A57DD40)
#define CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_OFFSET UNITYSDK_OFFSET(0x1A57DB70)
#define CLASS_1_961B735E8DD4898D_SET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x1A57D750)
#define CLASS_1_961B735E8DD4898D_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x1A57D770)
#define CLASS_1_961B735E8DD4898D_SET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1A57D790)
#define CLASS_1_961B735E8DD4898D_SET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x1A57D7D0)
#define CLASS_1_961B735E8DD4898D_SET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x1A57D7B0)
#define CLASS_1_961B735E8DD4898D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A57E100)

inline static constexpr unsigned int Class_1_961B735E8DD4898D_TypeDefinitionIndex = 36763;

class Class_1_961B735E8DD4898D : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* FODGHIDJAPP; // 0x10
	::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* HCCKOGIHLPK; // 0x18
	::Il2CppArray<::System::UInt32>* DJGJFJNDDLP; // 0x20
	::System::Boolean _TimeDynamicScale_k__BackingField; // 0x28
	::System::Boolean DLMMGPLEGOF; // 0x29
	::System::Boolean _PauseCat_k__BackingField; // 0x2A
	::System::Boolean _KeepRunWithoutOnlinePlayer_k__BackingField; // 0x2B
	::System::UInt32 CKGKBLMDCLJ; // 0x2C
	::System::UInt32 EKLCLHAKJFN; // 0x30
	::System::UInt32 _NextFieldEffectID_k__BackingField; // 0x34
	::System::UInt32 NEIHFJGJPHH; // 0x38
	::System::Int32 _InitRandSeed_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D__CTOR_OFFSET))(this);
	}

	::System::Int32 get_InitRandSeed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_INITRANDSEED_OFFSET))(this);
	}

	::System::Void set_InitRandSeed(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_INITRANDSEED_OFFSET))(this, a1);
	}

	::System::Boolean get_KeepRunWithoutOnlinePlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this);
	}

	::System::Void set_KeepRunWithoutOnlinePlayer(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this, a1);
	}

	::System::UInt32 get_NextFieldEffectID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_NEXTFIELDEFFECTID_OFFSET))(this);
	}

	::System::Void set_NextFieldEffectID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_NEXTFIELDEFFECTID_OFFSET))(this, a1);
	}

	::System::Boolean get_TimeDynamicScale()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_TIMEDYNAMICSCALE_OFFSET))(this);
	}

	::System::Void set_TimeDynamicScale(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_TIMEDYNAMICSCALE_OFFSET))(this, a1);
	}

	::System::Boolean get_PauseCat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_GET_PAUSECAT_OFFSET))(this);
	}

	::System::Void set_PauseCat(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_SET_PAUSECAT_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2CEBCCAF54FB984A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_2CEBCCAF54FB984A_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA082F774806CCC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEA082F774806CCC_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_EEA082F774806CCC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6632BA9E17A7643A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_961B735E8DD4898D_METHOD_1_6632BA9E17A7643A_OFFSET))(this, a1);
	}
};
