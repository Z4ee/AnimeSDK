#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PetMarbleTitleCondition.h"
#include "unitysdk/RPG/GameCore/PetMarbleTitleValue.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_A7D9701F5F4CE19E_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1CEED620)
#define CLASS_1_A7D9701F5F4CE19E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEEDA40)

inline static constexpr unsigned int Class_1_A7D9701F5F4CE19E_TypeDefinitionIndex = 14447;

class Class_1_A7D9701F5F4CE19E : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* NNACKOBKFGE; // 0x10
	::RPG::Client::TextID OENAMINOLLF; // 0x18
	::RPG::GameCore::PetMarbleTitleValue ACBKMOPHPLE; // 0x28
	::System::UInt32 PHFMCACHFIJ; // 0x2C
	::System::Int32 NALMBOOCCIN; // 0x30
	::System::Int32 DPICNGBHFAC; // 0x34
	::RPG::Client::TextID NMAHGFAPENI; // 0x38
	::System::Int32 JAADBJBIBPH; // 0x48
	::RPG::GameCore::PetMarbleTitleCondition EKIJFPIPCKF; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D9701F5F4CE19E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_A7D9701F5F4CE19E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_A7D9701F5F4CE19E*&))((::PBYTE)hIl2Cpp + CLASS_1_A7D9701F5F4CE19E_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
