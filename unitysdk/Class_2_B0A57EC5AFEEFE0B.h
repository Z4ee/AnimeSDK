#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1FB256EC3633CF9E.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"

class Class_2_46FD925988407D1E;

#define CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x1524F6B0)
#define CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x1524FB30)
#define CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_9A6C904A5C8D7167_OFFSET UNITYSDK_OFFSET(0x1524F5B0)
#define CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x1524F960)
#define CLASS_2_B0A57EC5AFEEFE0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1524FCA0)

inline static constexpr unsigned int Class_2_B0A57EC5AFEEFE0B_TypeDefinitionIndex = 77526;

class Class_2_B0A57EC5AFEEFE0B : public ::Class_1_1FB256EC3633CF9E
{
public:
	::System::Int32 AIKAPJELHNK; // 0x28
	::RPG::GameCore::CakeRaceProperty NOIGFGJJDLB; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0A57EC5AFEEFE0B__CTOR_OFFSET))(this);
	}

	static ::Class_2_B0A57EC5AFEEFE0B* Method_2_9A6C904A5C8D7167(::Class_2_46FD925988407D1E* a1, ::System::UInt64 a2, ::RPG::GameCore::CakeRaceProperty a3, ::System::Int32 a4)
	{
		return ((::Class_2_B0A57EC5AFEEFE0B*(*)(::Class_2_46FD925988407D1E*, ::System::UInt64, ::RPG::GameCore::CakeRaceProperty, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_9A6C904A5C8D7167_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0A57EC5AFEEFE0B_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}
};
