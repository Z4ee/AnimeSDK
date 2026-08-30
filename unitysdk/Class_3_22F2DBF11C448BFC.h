#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_22F2DBF11C448BFC_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0x1B496500)
#define CLASS_3_22F2DBF11C448BFC_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x1CAB8AC0)
#define CLASS_3_22F2DBF11C448BFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B496840)

inline static constexpr unsigned int Class_3_22F2DBF11C448BFC_TypeDefinitionIndex = 21856;

class Class_3_22F2DBF11C448BFC : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* EOPBPNBAHLD; // 0x18
	::System::String* BGGCOJBIMKH; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* CAJPPBDLFEF; // 0x28
	::System::String* CNGCNFCJEKL; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* BFNDNNPKHHE; // 0x38
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LAEOOOLKFEF; // 0x40
	::System::String* PCNMDMDIFKF; // 0x48
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22F2DBF11C448BFC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22F2DBF11C448BFC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22F2DBF11C448BFC*&))((::PBYTE)hIl2Cpp + CLASS_3_22F2DBF11C448BFC_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22F2DBF11C448BFC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22F2DBF11C448BFC*))((::PBYTE)hIl2Cpp + CLASS_3_22F2DBF11C448BFC_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};
