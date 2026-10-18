#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_0399F40049476FEF_METHOD_3_0EA31FDFD4AC3DFF_OFFSET UNITYSDK_OFFSET(0x1D1B13F0)
#define CLASS_3_0399F40049476FEF_METHOD_3_F39F86C4A9457EE8_OFFSET UNITYSDK_OFFSET(0x1D1B1350)
#define CLASS_3_0399F40049476FEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B13B0)

inline static constexpr unsigned int Class_3_0399F40049476FEF_TypeDefinitionIndex = 21068;

class Class_3_0399F40049476FEF : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* GFNAPNFFGPJ; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::Il2CppArray<::System::UInt32>* EGGCADJJJOD; // 0x28
	::RPG::GameCore::PlayNPCBubbleTalk* AAMIHCPFPIF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0399F40049476FEF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F39F86C4A9457EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0399F40049476FEF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0399F40049476FEF*&))((::PBYTE)hIl2Cpp + CLASS_3_0399F40049476FEF_METHOD_3_F39F86C4A9457EE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0EA31FDFD4AC3DFF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0399F40049476FEF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0399F40049476FEF*))((::PBYTE)hIl2Cpp + CLASS_3_0399F40049476FEF_METHOD_3_0EA31FDFD4AC3DFF_OFFSET))(a1, a2);
	}
};
