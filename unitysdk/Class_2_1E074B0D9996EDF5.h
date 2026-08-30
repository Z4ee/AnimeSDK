#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_2_1E074B0D9996EDF5_METHOD_2_E4EE4D98EE55C81B_OFFSET UNITYSDK_OFFSET(0x1CEEB550)
#define CLASS_2_1E074B0D9996EDF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEB680)

inline static constexpr unsigned int Class_2_1E074B0D9996EDF5_TypeDefinitionIndex = 20825;

class Class_2_1E074B0D9996EDF5 : public ::RPG::GameCore::JsonConfig
{
public:
	::RPG::MVector3 LOLLEGPLMOO; // 0x10
	::RPG::MVector3 AIBGEDIGEOO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E074B0D9996EDF5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_E4EE4D98EE55C81B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_1E074B0D9996EDF5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_1E074B0D9996EDF5*&))((::PBYTE)hIl2Cpp + CLASS_2_1E074B0D9996EDF5_METHOD_2_E4EE4D98EE55C81B_OFFSET))(a1, a2);
	}
};
