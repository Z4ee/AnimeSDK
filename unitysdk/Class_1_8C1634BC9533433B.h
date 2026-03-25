#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_385;
class Class_1_8C1634BC9533433B_Class_3_02B2979C95E11EA6;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8C1634BC9533433B_METHOD_1_0B914259ABB61A6C_OFFSET UNITYSDK_OFFSET(0xB8C87F0)
#define CLASS_1_8C1634BC9533433B_METHOD_1_7912C6EE653FCCA0_OFFSET UNITYSDK_OFFSET(0xB8C88B0)
#define CLASS_1_8C1634BC9533433B_METHOD_1_9606818A9CA2149C_OFFSET UNITYSDK_OFFSET(0xB8C86F0)
#define CLASS_1_8C1634BC9533433B_METHOD_1_AAC21C139466BE40_OFFSET UNITYSDK_OFFSET(0xB8C8060)
#define CLASS_1_8C1634BC9533433B__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8C8950)

inline static constexpr unsigned int Class_1_8C1634BC9533433B_TypeDefinitionIndex = 43412;

class Class_1_8C1634BC9533433B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_8C1634BC9533433B_Class_3_02B2979C95E11EA6*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_8C1634BC9533433B_Class_3_02B2979C95E11EA6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C1634BC9533433B_TypeDefinitionIndex)->GetStaticField(0x412E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_385* Method_1_AAC21C139466BE40(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_METHOD_1_AAC21C139466BE40_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_385* Method_1_9606818A9CA2149C(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_METHOD_1_9606818A9CA2149C_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_385* Method_1_0B914259ABB61A6C(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_METHOD_1_0B914259ABB61A6C_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_385* Method_1_7912C6EE653FCCA0(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_385*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_8C1634BC9533433B_METHOD_1_7912C6EE653FCCA0_OFFSET))(a1, a2);
	}
};
