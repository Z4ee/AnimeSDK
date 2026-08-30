#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemFilterType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_E0C0E5A2FEE22B08_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x1C86D5C0)
#define CLASS_3_E0C0E5A2FEE22B08_METHOD_3_F32CA7BD1D486055_OFFSET UNITYSDK_OFFSET(0x1C86D580)
#define CLASS_3_E0C0E5A2FEE22B08__CTOR_OFFSET UNITYSDK_OFFSET(0x1C86D5B0)

inline static constexpr unsigned int Class_3_E0C0E5A2FEE22B08_TypeDefinitionIndex = 21256;

class Class_3_E0C0E5A2FEE22B08 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* LONAPEPCKGI; // 0x18
	::System::String* LJGJAPMGLNB; // 0x20
	::RPG::GameCore::ChenLingFesItemFilterType LPDKEDCAODC; // 0x28
	::System::UInt32 CMNOEFFFNPE; // 0x2C
	::System::UInt32 NJNFNFCJHFJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E0C0E5A2FEE22B08__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F32CA7BD1D486055(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E0C0E5A2FEE22B08*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E0C0E5A2FEE22B08*&))((::PBYTE)hIl2Cpp + CLASS_3_E0C0E5A2FEE22B08_METHOD_3_F32CA7BD1D486055_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E0C0E5A2FEE22B08* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E0C0E5A2FEE22B08*))((::PBYTE)hIl2Cpp + CLASS_3_E0C0E5A2FEE22B08_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
