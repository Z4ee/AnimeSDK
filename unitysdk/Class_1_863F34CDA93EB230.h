#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5623C129675A2671_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_863F34CDA93EB230_GETACCUMULATEDORBCOUNT_OFFSET UNITYSDK_OFFSET(0x15D29210)
#define CLASS_1_863F34CDA93EB230_GET_BLUEORBCOUNT_OFFSET UNITYSDK_OFFSET(0x15D29380)
#define CLASS_1_863F34CDA93EB230_GET_GOLDORBCOUNT_OFFSET UNITYSDK_OFFSET(0x15D29440)
#define CLASS_1_863F34CDA93EB230_GET_GRAYORBCOUNT_OFFSET UNITYSDK_OFFSET(0x15D292C0)
#define CLASS_1_863F34CDA93EB230_GET_SETTLED_OFFSET UNITYSDK_OFFSET(0x15D292A0)
#define CLASS_1_863F34CDA93EB230_METHOD_1_A6EB043AED5D5D84_OFFSET UNITYSDK_OFFSET(0x15D28BB0)
#define CLASS_1_863F34CDA93EB230_SET_SETTLED_OFFSET UNITYSDK_OFFSET(0x15D292B0)
#define CLASS_1_863F34CDA93EB230_UPDATE_OFFSET UNITYSDK_OFFSET(0x15D28DA0)
#define CLASS_1_863F34CDA93EB230__CTOR_OFFSET UNITYSDK_OFFSET(0x15D28CF0)

inline static constexpr unsigned int Class_1_863F34CDA93EB230_TypeDefinitionIndex = 67706;

class Class_1_863F34CDA93EB230 : public ::System::Object
{
public:
	// static const ::System::UInt32 KMNHOMHKMPO = 0x1; // 0x0
	// static const ::System::UInt32 ILKKPKKGGBB = 0x2; // 0x0
	// static const ::System::UInt32 IDELPBPODED = 0x3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EONGILIPALO; // 0x10
	::System::Boolean _Settled_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230__CTOR_OFFSET))(this);
	}

	static ::Class_1_863F34CDA93EB230* Method_1_A6EB043AED5D5D84(::Class_1_5623C129675A2671_1* a1)
	{
		return ((::Class_1_863F34CDA93EB230*(*)(::Class_1_5623C129675A2671_1*))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_METHOD_1_A6EB043AED5D5D84_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_5623C129675A2671_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5623C129675A2671_1*))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 GetAccumulatedOrbCount(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_GETACCUMULATEDORBCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean get_Settled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_GET_SETTLED_OFFSET))(this);
	}

	::System::Void set_Settled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_SET_SETTLED_OFFSET))(this, a1);
	}

	::System::UInt32 get_GrayOrbCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_GET_GRAYORBCOUNT_OFFSET))(this);
	}

	::System::UInt32 get_BlueOrbCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_GET_BLUEORBCOUNT_OFFSET))(this);
	}

	::System::UInt32 get_GoldOrbCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_863F34CDA93EB230_GET_GOLDORBCOUNT_OFFSET))(this);
	}
};
