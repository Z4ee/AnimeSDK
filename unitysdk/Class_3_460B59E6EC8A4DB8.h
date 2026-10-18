#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class MonsterEnergyBarCustomColor; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define CLASS_3_460B59E6EC8A4DB8_METHOD_3_514ABAC4020261C0_OFFSET UNITYSDK_OFFSET(0x1CDE97F0)
#define CLASS_3_460B59E6EC8A4DB8_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x1CDE96F0)
#define CLASS_3_460B59E6EC8A4DB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE9780)

inline static constexpr unsigned int Class_3_460B59E6EC8A4DB8_TypeDefinitionIndex = 24110;

class Class_3_460B59E6EC8A4DB8 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* PKKDIAENBEK; // 0x18
	::RPG::GameCore::MonsterEnergyBarCustomColor* OCHLDEHBDOL; // 0x20
	::RPG::GameCore::DynamicFloat* OFBPKCNCGFG; // 0x28
	::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x30
	::RPG::GameCore::DynamicFloat* JADMAPDKLKL; // 0x38
	::System::String* OLOIFNNLKJP; // 0x40
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x48
	::Il2CppArray<::RPG::GameCore::UITextNode*>* KDIAKCHPLMN; // 0x50
	::System::String* FCAHMLGMDMN; // 0x58
	::System::String* KOOOKCNNPFE; // 0x60
	::System::String* ECLCEDOLOBG; // 0x68
	::System::String* JKMABBEGEAH; // 0x70
	::System::Int32 EIADCADKKDN; // 0x78
	::RPG::GameCore::BoolEx BGCEFKAHBDE; // 0x7C
	::System::Int32 EOIHOACNHDH; // 0x80
	::RPG::GameCore::MonsterEnergyBarType OPFMFGGBAKC; // 0x84
	::RPG::GameCore::BoolEx IOBJFEJFLJP; // 0x88
	::System::Int32 IMPAJLCMHFP; // 0x8C
	::RPG::GameCore::MonsterEnergyBarNumColor IBNBFBBNBBH; // 0x90
	::RPG::GameCore::EnergyBarState MEPFOEEGBEA; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_460B59E6EC8A4DB8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_460B59E6EC8A4DB8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_460B59E6EC8A4DB8*&))((::PBYTE)hIl2Cpp + CLASS_3_460B59E6EC8A4DB8_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_514ABAC4020261C0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_460B59E6EC8A4DB8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_460B59E6EC8A4DB8*))((::PBYTE)hIl2Cpp + CLASS_3_460B59E6EC8A4DB8_METHOD_3_514ABAC4020261C0_OFFSET))(a1, a2);
	}
};
