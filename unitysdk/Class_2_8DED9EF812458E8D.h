#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B9E8C2EEAA5C96EC;

#define CLASS_2_8DED9EF812458E8D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C405E00)
#define CLASS_2_8DED9EF812458E8D_METHOD_2_A701DEC73862FAFB_OFFSET UNITYSDK_OFFSET(0x1C4063A0)
#define CLASS_2_8DED9EF812458E8D_METHOD_2_FBDF3AC54A4E4976_OFFSET UNITYSDK_OFFSET(0x1C405FE0)
#define CLASS_2_8DED9EF812458E8D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4065A0)

inline static constexpr unsigned int Class_2_8DED9EF812458E8D_TypeDefinitionIndex = 41898;

class Class_2_8DED9EF812458E8D : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 MGAHJFAHPAB; // 0x338
	::System::Single NMPMMIAKFMO; // 0x344
	::UnityEngine::Vector3 EIAEMLJAPED; // 0x348
	::System::UInt32 CCBIKJPMKBL; // 0x354
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x358
	::System::Boolean AMEPOEMDAPG; // 0x364
	::System::Boolean DBAJLFNMHPI; // 0x365
	::System::Boolean NIEBBABBPNG; // 0x366

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
