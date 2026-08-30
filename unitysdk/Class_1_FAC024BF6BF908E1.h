#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_FAC024BF6BF908E1_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1C9257D0)
#define CLASS_1_FAC024BF6BF908E1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C925CC0)

inline static constexpr unsigned int Class_1_FAC024BF6BF908E1_TypeDefinitionIndex = 12865;

class Class_1_FAC024BF6BF908E1 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* HFIAAGAKFMD; // 0x10
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* EGEEJLHBALB; // 0x18
	::Il2CppArray<::System::UInt32>* JEBMBCLBIOI; // 0x20
	::Il2CppArray<::System::UInt32>* MLMEGBLDFKE; // 0x28
	::Il2CppArray<::System::UInt32>* OGEOMCGNNMP; // 0x30
	::Il2CppArray<::System::UInt32>* LCHKKJDBLGM; // 0x38
	::Il2CppArray<::RPG::GameCore::ItemConfig*>* OGALGHMIIAH; // 0x40
	::Il2CppArray<::RPG::GameCore::AttackDamageType>* LOJCIDLKPKG; // 0x48
	::System::UInt32 IMCMJHAMMKK; // 0x50
	::System::UInt32 PHOIICMCGIH; // 0x54
	::System::UInt32 PHFMCACHFIJ; // 0x58
	::System::UInt32 GNGENMHNLAH; // 0x5C
	::System::UInt32 DLCKKJFMJOB; // 0x60
	::System::UInt32 GNOOAGPBNLD; // 0x64
	::System::UInt32 EMNJGCPDIFF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC024BF6BF908E1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FAC024BF6BF908E1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FAC024BF6BF908E1*&))((::PBYTE)hIl2Cpp + CLASS_1_FAC024BF6BF908E1_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
