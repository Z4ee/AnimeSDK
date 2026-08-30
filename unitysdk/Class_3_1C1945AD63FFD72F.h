#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimSetBillboardInfo; }

#define CLASS_3_1C1945AD63FFD72F_METHOD_3_B0B66673456EDDF6_OFFSET UNITYSDK_OFFSET(0x1D431630)
#define CLASS_3_1C1945AD63FFD72F_METHOD_3_C17C5E1EBAECCBCD_OFFSET UNITYSDK_OFFSET(0x1D431670)
#define CLASS_3_1C1945AD63FFD72F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D431660)

inline static constexpr unsigned int Class_3_1C1945AD63FFD72F_TypeDefinitionIndex = 21232;

class Class_3_1C1945AD63FFD72F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::FiveDimSetBillboardInfo* OGAKGPFAHPM; // 0x18
	::RPG::GameCore::DynamicString* ODMPMJCAHPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C1945AD63FFD72F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_B0B66673456EDDF6(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1C1945AD63FFD72F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1C1945AD63FFD72F*&))((::PBYTE)hIl2Cpp + CLASS_3_1C1945AD63FFD72F_METHOD_3_B0B66673456EDDF6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C17C5E1EBAECCBCD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1C1945AD63FFD72F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1C1945AD63FFD72F*))((::PBYTE)hIl2Cpp + CLASS_3_1C1945AD63FFD72F_METHOD_3_C17C5E1EBAECCBCD_OFFSET))(a1, a2);
	}
};
