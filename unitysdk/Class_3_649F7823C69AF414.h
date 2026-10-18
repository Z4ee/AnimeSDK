#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace System { class String; }

#define CLASS_3_649F7823C69AF414_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x1CD24840)
#define CLASS_3_649F7823C69AF414_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1CD247F0)
#define CLASS_3_649F7823C69AF414__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD24830)

inline static constexpr unsigned int Class_3_649F7823C69AF414_TypeDefinitionIndex = 21481;

class Class_3_649F7823C69AF414 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::Int16>* JMHBBPPIELM; // 0x18
	::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* GPGOMMAGIBD; // 0x20
	::System::String* JBPHDACHHDG; // 0x28
	::System::UInt32 AHGIENEMKFI; // 0x30
	::System::Single OKILLMNGPGB; // 0x34
	::System::Boolean LHPMNOHBIMI; // 0x38
	::System::Boolean PDFFNPLKFMH; // 0x39
	::System::Boolean BNIMJJNOLAI; // 0x3A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_649F7823C69AF414__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_649F7823C69AF414*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_649F7823C69AF414*&))((::PBYTE)hIl2Cpp + CLASS_3_649F7823C69AF414_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_649F7823C69AF414* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_649F7823C69AF414*))((::PBYTE)hIl2Cpp + CLASS_3_649F7823C69AF414_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
