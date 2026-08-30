#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRoundType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_E2DCA4DCC2D0E91F_METHOD_1_70FC9BA3400F387E_OFFSET UNITYSDK_OFFSET(0x1D01CBD0)
#define CLASS_1_E2DCA4DCC2D0E91F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D01CF00)

inline static constexpr unsigned int Class_1_E2DCA4DCC2D0E91F_TypeDefinitionIndex = 11474;

class Class_1_E2DCA4DCC2D0E91F : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* LKJNMGCBCAK; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* JAKDNHOHINO; // 0x18
	::Il2CppArray<::RPG::GameCore::FateRoundType>* MLNNCPNNDOO; // 0x20
	::System::UInt32 COPIFAPBMJH; // 0x28
	::System::UInt32 AENCLGAIGMD; // 0x2C
	::System::UInt32 MKPCBHODIFB; // 0x30
	::System::UInt32 POCKPDCKPMA; // 0x34
	::System::UInt32 LOEPLBPFMEN; // 0x38
	::System::UInt32 HFGNHCDNPHL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2DCA4DCC2D0E91F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_70FC9BA3400F387E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_E2DCA4DCC2D0E91F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_E2DCA4DCC2D0E91F*&))((::PBYTE)hIl2Cpp + CLASS_1_E2DCA4DCC2D0E91F_METHOD_1_70FC9BA3400F387E_OFFSET))(a1, a2);
	}
};
