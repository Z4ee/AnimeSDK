#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET UNITYSDK_OFFSET(0x1D342DA0)
#define CLASS_3_DB92CDDA4388C8F2_METHOD_3_F73DE1E21818E48C_OFFSET UNITYSDK_OFFSET(0x1D342D60)
#define CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D342D90)

inline static constexpr unsigned int Class_3_DB92CDDA4388C8F2_TypeDefinitionIndex = 22615;

class Class_3_DB92CDDA4388C8F2 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* AOCGPGMHMEP; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::String* BMALIACHMOO; // 0x28
	::System::Single IEHPFADHJFD; // 0x30
	::RPG::MVector3 NNACFJKJOHO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F73DE1E21818E48C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*&))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_F73DE1E21818E48C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_185002BAD0CDE98D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DB92CDDA4388C8F2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DB92CDDA4388C8F2*))((::PBYTE)hIl2Cpp + CLASS_3_DB92CDDA4388C8F2_METHOD_3_185002BAD0CDE98D_OFFSET))(a1, a2);
	}
};
