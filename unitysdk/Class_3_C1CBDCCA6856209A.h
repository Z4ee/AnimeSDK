#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_720948D49026633D;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define CLASS_3_C1CBDCCA6856209A_METHOD_3_292B86D9FDC9A4F5_OFFSET UNITYSDK_OFFSET(0x1D0CEE70)
#define CLASS_3_C1CBDCCA6856209A_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1D0CEEC0)
#define CLASS_3_C1CBDCCA6856209A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CEEB0)

inline static constexpr unsigned int Class_3_C1CBDCCA6856209A_TypeDefinitionIndex = 22866;

class Class_3_C1CBDCCA6856209A : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_720948D49026633D* HJKLHEIOJBG; // 0x18
	::RPG::GameCore::DynamicFloat* DPOADEGJFJN; // 0x20
	::RPG::GameCore::DynamicFloat* MKAIFLDPHGD; // 0x28
	::RPG::GameCore::DynamicFloat* MEMDDBLODBL; // 0x30
	::RPG::GameCore::DynamicFloat* NJKLFNLALJL; // 0x38
	::System::String* EMHGEGEGJEI; // 0x40
	::RPG::GameCore::DynamicFloat* PDELICMHBEG; // 0x48
	::Class_2_720948D49026633D* IDJADOBDIFG; // 0x50
	::RPG::GameCore::DynamicFloat* JPEIKNPHGBB; // 0x58
	::System::Boolean LPJDKNICJAM; // 0x60
	::System::Boolean GKIOLMEAOJC; // 0x61
	::System::Boolean IBDLGGNNJMP; // 0x62

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C1CBDCCA6856209A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_292B86D9FDC9A4F5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C1CBDCCA6856209A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C1CBDCCA6856209A*&))((::PBYTE)hIl2Cpp + CLASS_3_C1CBDCCA6856209A_METHOD_3_292B86D9FDC9A4F5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_C1CBDCCA6856209A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_C1CBDCCA6856209A*))((::PBYTE)hIl2Cpp + CLASS_3_C1CBDCCA6856209A_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
