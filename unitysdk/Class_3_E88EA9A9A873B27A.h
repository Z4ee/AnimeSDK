#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_E88EA9A9A873B27A_METHOD_3_99AC8556B83941E4_OFFSET UNITYSDK_OFFSET(0x1CD35C90)
#define CLASS_3_E88EA9A9A873B27A_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CD35BD0)
#define CLASS_3_E88EA9A9A873B27A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD35C40)

inline static constexpr unsigned int Class_3_E88EA9A9A873B27A_TypeDefinitionIndex = 24126;

class Class_3_E88EA9A9A873B27A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* FMADKPNEFDD; // 0x20
	::System::Single MLKAGGJKCGN; // 0x28
	::RPG::MVector3 LJDHGFECMHJ; // 0x2C
	::System::Single IEHPFADHJFD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E88EA9A9A873B27A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E88EA9A9A873B27A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E88EA9A9A873B27A*&))((::PBYTE)hIl2Cpp + CLASS_3_E88EA9A9A873B27A_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_99AC8556B83941E4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E88EA9A9A873B27A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E88EA9A9A873B27A*))((::PBYTE)hIl2Cpp + CLASS_3_E88EA9A9A873B27A_METHOD_3_99AC8556B83941E4_OFFSET))(a1, a2);
	}
};
