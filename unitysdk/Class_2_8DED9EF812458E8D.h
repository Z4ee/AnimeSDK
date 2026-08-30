#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;

#define CLASS_2_8DED9EF812458E8D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A60E0B0)
#define CLASS_2_8DED9EF812458E8D_METHOD_2_A701DEC73862FAFB_OFFSET UNITYSDK_OFFSET(0x1A60E630)
#define CLASS_2_8DED9EF812458E8D_METHOD_2_FBDF3AC54A4E4976_OFFSET UNITYSDK_OFFSET(0x1A60E270)
#define CLASS_2_8DED9EF812458E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60E830)

inline static constexpr unsigned int Class_2_8DED9EF812458E8D_TypeDefinitionIndex = 41898;

class Class_2_8DED9EF812458E8D : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::System::UInt32 CCBIKJPMKBL; // 0x338
	::System::Single NMPMMIAKFMO; // 0x33C
	::System::Boolean NIEBBABBPNG; // 0x340
	::System::Boolean AMEPOEMDAPG; // 0x341
	::System::Boolean DBAJLFNMHPI; // 0x342
	::UnityEngine::Vector3 MGAHJFAHPAB; // 0x344
	::UnityEngine::Vector3 EIAEMLJAPED; // 0x350
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x35C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D_CLEAR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_2_FBDF3AC54A4E4976(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_B9E8C2EEAA5C96EC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D_METHOD_2_FBDF3AC54A4E4976_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_2_A701DEC73862FAFB(::Class_2_B9E8C2EEAA5C96EC* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::Class_2_B9E8C2EEAA5C96EC*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8DED9EF812458E8D_METHOD_2_A701DEC73862FAFB_OFFSET))(a1, a2, a3);
	}
};
