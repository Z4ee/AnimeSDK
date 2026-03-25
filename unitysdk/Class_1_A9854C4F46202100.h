#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9854C4F46202100_GET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x166216E0)
#define CLASS_1_A9854C4F46202100_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x16621700)
#define CLASS_1_A9854C4F46202100_GET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x16621720)
#define CLASS_1_A9854C4F46202100_GET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x16621760)
#define CLASS_1_A9854C4F46202100_GET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x16621740)
#define CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_1_OFFSET UNITYSDK_OFFSET(0x16621CE0)
#define CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x16621B20)
#define CLASS_1_A9854C4F46202100_METHOD_1_B892007B9247C983_OFFSET UNITYSDK_OFFSET(0x16621EA0)
#define CLASS_1_A9854C4F46202100_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET UNITYSDK_OFFSET(0x166217E0)
#define CLASS_1_A9854C4F46202100_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16621780)
#define CLASS_1_A9854C4F46202100_SET_INITRANDSEED_OFFSET UNITYSDK_OFFSET(0x166216F0)
#define CLASS_1_A9854C4F46202100_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET UNITYSDK_OFFSET(0x16621710)
#define CLASS_1_A9854C4F46202100_SET_NEXTFIELDEFFECTID_OFFSET UNITYSDK_OFFSET(0x16621730)
#define CLASS_1_A9854C4F46202100_SET_PAUSECAT_OFFSET UNITYSDK_OFFSET(0x16621770)
#define CLASS_1_A9854C4F46202100_SET_TIMEDYNAMICSCALE_OFFSET UNITYSDK_OFFSET(0x16621750)
#define CLASS_1_A9854C4F46202100__CTOR_OFFSET UNITYSDK_OFFSET(0x16622080)

inline static constexpr unsigned int Class_1_A9854C4F46202100_TypeDefinitionIndex = 29103;

class Class_1_A9854C4F46202100 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_11; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x18
	::Il2CppArray<::System::Collections::Generic::List_1<::System::UInt32>*>* Field_1_1; // 0x20
	::System::UInt32 Field_1_8; // 0x28
	::System::UInt32 Field_1_7; // 0x2C
	::System::Int32 _InitRandSeed_k__BackingField; // 0x30
	::System::Boolean _KeepRunWithoutOnlinePlayer_k__BackingField; // 0x34
	::System::Boolean Field_1_10; // 0x35
	::System::Boolean _TimeDynamicScale_k__BackingField; // 0x36
	::System::Boolean _PauseCat_k__BackingField; // 0x37
	::System::UInt32 _NextFieldEffectID_k__BackingField; // 0x38
	::System::UInt32 Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100__CTOR_OFFSET))(this);
	}

	::System::Int32 get_InitRandSeed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_INITRANDSEED_OFFSET))(this);
	}

	::System::Void set_InitRandSeed(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_INITRANDSEED_OFFSET))(this, value);
	}

	::System::Boolean get_KeepRunWithoutOnlinePlayer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this);
	}

	::System::Void set_KeepRunWithoutOnlinePlayer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_KEEPRUNWITHOUTONLINEPLAYER_OFFSET))(this, value);
	}

	::System::UInt32 get_NextFieldEffectID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_NEXTFIELDEFFECTID_OFFSET))(this);
	}

	::System::Void set_NextFieldEffectID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_NEXTFIELDEFFECTID_OFFSET))(this, value);
	}

	::System::Boolean get_TimeDynamicScale()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_TIMEDYNAMICSCALE_OFFSET))(this);
	}

	::System::Void set_TimeDynamicScale(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_TIMEDYNAMICSCALE_OFFSET))(this, value);
	}

	::System::Boolean get_PauseCat()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_GET_PAUSECAT_OFFSET))(this);
	}

	::System::Void set_PauseCat(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_SET_PAUSECAT_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_B8FA2BA3B5C0B3B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_B8FA2BA3B5C0B3B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_9972734FC91A4B95(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_OFFSET))(this, a1);
	}

	::System::Void Method_1_9972734FC91A4B95_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_9972734FC91A4B95_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_B892007B9247C983(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9854C4F46202100_METHOD_1_B892007B9247C983_OFFSET))(this, a1);
	}
};
