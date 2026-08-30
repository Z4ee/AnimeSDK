#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5452947417BCF16A.h"

class Class_1_97E659ED8D5D259C_24;

#define CLASS_2_73BEC97D2FB56905_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x152D6880)
#define CLASS_2_73BEC97D2FB56905_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x152D68A0)
#define CLASS_2_73BEC97D2FB56905_METHOD_2_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x152D68C0)
#define CLASS_2_73BEC97D2FB56905_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x152D6890)
#define CLASS_2_73BEC97D2FB56905_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x152D68B0)
#define CLASS_2_73BEC97D2FB56905__CTOR_OFFSET UNITYSDK_OFFSET(0x152D6920)

inline static constexpr unsigned int Class_2_73BEC97D2FB56905_TypeDefinitionIndex = 80341;

class Class_2_73BEC97D2FB56905 : public ::Class_1_5452947417BCF16A
{
public:
	::System::UInt32 _MatchID_k__BackingField; // 0x20
	::System::UInt32 _TrackID_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73BEC97D2FB56905__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_MatchID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73BEC97D2FB56905_GET_MATCHID_OFFSET))(this);
	}

	::System::Void set_MatchID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_73BEC97D2FB56905_SET_MATCHID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TrackID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73BEC97D2FB56905_GET_TRACKID_OFFSET))(this);
	}

	::System::Void set_TrackID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_73BEC97D2FB56905_SET_TRACKID_OFFSET))(this, a1);
	}

	::System::Void Method_2_097468641FDED14E(::Class_1_97E659ED8D5D259C_24* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_24*))((::PBYTE)hIl2Cpp + CLASS_2_73BEC97D2FB56905_METHOD_2_097468641FDED14E_OFFSET))(this, a1);
	}
};
