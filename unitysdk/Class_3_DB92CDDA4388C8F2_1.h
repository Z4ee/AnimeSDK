#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1CFB0D10)
#define CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CFB0C50)
#define CLASS_3_DB92CDDA4388C8F2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB0CC0)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_1_TypeDefinitionIndex = 23851;

class Class_3_DB92CDDA4388C8F2_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
	::System::String* FMADKPNEFDD; // 0x20
	::RPG::MVector3 LJDHGFECMHJ; // 0x28
	::System::Single IEHPFADHJFD; // 0x34
	::System::Single MLKAGGJKCGN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2_1*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2_1*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_1_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
