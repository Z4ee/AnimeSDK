#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_115297B50AB60A5D_4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8887056F53F3B090_GET_CAR_OFFSET UNITYSDK_OFFSET(0x18E5DAA0)
#define CLASS_1_8887056F53F3B090_GET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x18E5DAC0)
#define CLASS_1_8887056F53F3B090_GET_TRACKBESTTIMES_OFFSET UNITYSDK_OFFSET(0x18E5DAE0)
#define CLASS_1_8887056F53F3B090_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x18E5DB00)
#define CLASS_1_8887056F53F3B090_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x18E5DB90)
#define CLASS_1_8887056F53F3B090_SET_CAR_OFFSET UNITYSDK_OFFSET(0x18E5DAB0)
#define CLASS_1_8887056F53F3B090_SET_DRIVERID_OFFSET UNITYSDK_OFFSET(0x18E5DAD0)
#define CLASS_1_8887056F53F3B090_SET_TRACKBESTTIMES_OFFSET UNITYSDK_OFFSET(0x18E5DAF0)
#define CLASS_1_8887056F53F3B090__CTOR_OFFSET UNITYSDK_OFFSET(0x18E5DC00)

inline static constexpr unsigned int Class_1_8887056F53F3B090_TypeDefinitionIndex = 80375;

class Class_1_8887056F53F3B090 : public ::System::Object
{
public:
	::Class_1_115297B50AB60A5D_4* _Car_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TrackBestTimes_k__BackingField; // 0x18
	::System::UInt32 _DriverID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090__CTOR_OFFSET))(this);
	}

	::Class_1_115297B50AB60A5D_4* get_Car()
	{
		return ((::Class_1_115297B50AB60A5D_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_GET_CAR_OFFSET))(this);
	}

	::System::Void set_Car(::Class_1_115297B50AB60A5D_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_115297B50AB60A5D_4*))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_SET_CAR_OFFSET))(this, a1);
	}

	::System::UInt32 get_DriverID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_GET_DRIVERID_OFFSET))(this);
	}

	::System::Void set_DriverID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_SET_DRIVERID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_TrackBestTimes()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_GET_TRACKBESTTIMES_OFFSET))(this);
	}

	::System::Void set_TrackBestTimes(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_SET_TRACKBESTTIMES_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8887056F53F3B090_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}
};
