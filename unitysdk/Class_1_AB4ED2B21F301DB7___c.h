#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_AB4ED2B21F301DB7___C__BUILDDISPLAYOPTIONS_B__13_2_OFFSET UNITYSDK_OFFSET(0xB54D930)
#define CLASS_1_AB4ED2B21F301DB7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB54D8F0)
#define CLASS_1_AB4ED2B21F301DB7___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB54D920)
#define CLASS_1_AB4ED2B21F301DB7___C___PICKLEAVEEMPLOYEE_B__26_0_OFFSET UNITYSDK_OFFSET(0xB54D940)

inline static constexpr unsigned int Class_1_AB4ED2B21F301DB7___c_TypeDefinitionIndex = 78990;

class Class_1_AB4ED2B21F301DB7___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>** StaticGet___9__13_2()
	{
		return (::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4ED2B21F301DB7___c_TypeDefinitionIndex)->GetStaticField(0x60EA0);
	}
	static ::System::Predicate_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>** StaticGet___9__26_0()
	{
		return (::System::Predicate_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4ED2B21F301DB7___c_TypeDefinitionIndex)->GetStaticField(0x60EA8);
	}
	static ::Class_1_AB4ED2B21F301DB7___c** StaticGet___9()
	{
		return (::Class_1_AB4ED2B21F301DB7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4ED2B21F301DB7___c_TypeDefinitionIndex)->GetStaticField(0x60EB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _BuildDisplayOptions_b__13_2(::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C__BUILDDISPLAYOPTIONS_B__13_2_OFFSET))(this, a1);
	}

	::System::Boolean __PickLeaveEmployee_b__26_0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7___C___PICKLEAVEEMPLOYEE_B__26_0_OFFSET))(this, a1);
	}
};
