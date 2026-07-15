#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_511;
class Class_1_C3EF82492437643F_Class_3_02B2979C95E11EA6;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C3EF82492437643F_METHOD_1_2D55DA8C3A456CFB_OFFSET UNITYSDK_OFFSET(0x15FBED70)
#define CLASS_1_C3EF82492437643F_METHOD_1_2E3055BBF9A39172_OFFSET UNITYSDK_OFFSET(0x15FBECA0)
#define CLASS_1_C3EF82492437643F_METHOD_1_353356F1ADFA3760_OFFSET UNITYSDK_OFFSET(0x15FBEA30)
#define CLASS_1_C3EF82492437643F_METHOD_1_A1DE90D0F5A5D27A_OFFSET UNITYSDK_OFFSET(0x15FBEB90)
#define CLASS_1_C3EF82492437643F__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FBEE10)

inline static constexpr unsigned int Class_1_C3EF82492437643F_TypeDefinitionIndex = 51858;

class Class_1_C3EF82492437643F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_C3EF82492437643F_Class_3_02B2979C95E11EA6*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_C3EF82492437643F_Class_3_02B2979C95E11EA6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3EF82492437643F_TypeDefinitionIndex)->GetStaticField(0x3C220);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3EF82492437643F__CCTOR_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_511* Method_1_353356F1ADFA3760(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C3EF82492437643F_METHOD_1_353356F1ADFA3760_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_511* Method_1_A1DE90D0F5A5D27A(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C3EF82492437643F_METHOD_1_A1DE90D0F5A5D27A_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_511* Method_1_2E3055BBF9A39172(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C3EF82492437643F_METHOD_1_2E3055BBF9A39172_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_511* Method_1_2D55DA8C3A456CFB(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::Class_0_16E4307DCC419505_511*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_C3EF82492437643F_METHOD_1_2D55DA8C3A456CFB_OFFSET))(a1, a2);
	}
};
