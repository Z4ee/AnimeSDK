#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostSubmitType.h"
#include "unitysdk/RPG/GameCore/LimaoNewsPostType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_FAC024BF6BF908E1_2_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x1D026CA0)
#define CLASS_1_FAC024BF6BF908E1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1D027330)

inline static constexpr unsigned int Class_1_FAC024BF6BF908E1_2_TypeDefinitionIndex = 13920;

class Class_1_FAC024BF6BF908E1_2 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* MHLNDBFHHLF; // 0x10
	::System::String* ODLDEEANNCM; // 0x18
	::Il2CppArray<::System::UInt32>* NEPKPFOBEIO; // 0x20
	::Il2CppArray<::System::UInt32>* LIDHGBEAJMA; // 0x28
	::System::String* EEIEODMEMFI; // 0x30
	::System::String* BDEBECLIHMD; // 0x38
	::System::String* BDACPPLKLGL; // 0x40
	::Il2CppArray<::System::UInt32>* BDKECJFBAJJ; // 0x48
	::RPG::GameCore::LimaoNewsPostType EFFFIJHJHMA; // 0x50
	::System::UInt32 AEONKNDCDKN; // 0x54
	::RPG::GameCore::LimaoNewsPostSubmitType GAPKKIEIEHE; // 0x58
	::System::UInt32 DGLJLJEHNNB; // 0x5C
	::System::UInt32 JFBDBCKPPEI; // 0x60
	::System::UInt32 HIHLLBFEONI; // 0x64
	::System::UInt32 KHIALKEMEGH; // 0x68
	::RPG::GameCore::LimaoNewsOfficeSurveyType BEBEEMKOBNN; // 0x6C
	::System::UInt32 ODEKADIBFAO; // 0x70
	::RPG::Client::TextID DPFCAIKMBEP; // 0x78
	::RPG::Client::TextID KJGJGNLACKF; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC024BF6BF908E1_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_FAC024BF6BF908E1_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_FAC024BF6BF908E1_2*&))((::PBYTE)hIl2Cpp + CLASS_1_FAC024BF6BF908E1_2_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
