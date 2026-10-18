#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;
class Class_1_3CFD07DFD0180CDE;
class Class_1_CDF5B114F6C8E3BB;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_134F4A605D115C87_ADD_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xB1F4680)
#define CLASS_1_134F4A605D115C87_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB1F4740)
#define CLASS_1_134F4A605D115C87_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xB1F44A0)
#define CLASS_1_134F4A605D115C87_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0xB1F44E0)
#define CLASS_1_134F4A605D115C87_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB1F48E0)
#define CLASS_1_134F4A605D115C87_METHOD_1_5E8F1DC95ECDC741_OFFSET UNITYSDK_OFFSET(0xB1F4850)
#define CLASS_1_134F4A605D115C87_METHOD_1_C6753EE2589CADFA_OFFSET UNITYSDK_OFFSET(0xB1F47F0)
#define CLASS_1_134F4A605D115C87_METHOD_1_DBBEC78154EDADF7_OFFSET UNITYSDK_OFFSET(0xB1F4460)
#define CLASS_1_134F4A605D115C87_REMOVE_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xB1F46E0)
#define CLASS_1_134F4A605D115C87_SET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB1F4750)
#define CLASS_1_134F4A605D115C87__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F4760)

inline static constexpr unsigned int Class_1_134F4A605D115C87_TypeDefinitionIndex = 79801;

class Class_1_134F4A605D115C87 : public ::System::Object
{
public:
	::Class_1_3CFD07DFD0180CDE* _Source_k__BackingField; // 0x10
	::Class_1_CDF5B114F6C8E3BB* ANPAHODBCOB; // 0x18
	::System::Action* OnFinished; // 0x20
	::System::Collections::Generic::List_1<::RPG::Client::MechCraft::MechCraftAttributeType>* HGCNLFIMDKL; // 0x28

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1, ::Class_0_16E4307DCC419505_121* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* Method_1_DBBEC78154EDADF7()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_METHOD_1_DBBEC78154EDADF7_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_121* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::Void add_OnFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_ADD_ONFINISHED_OFFSET))(this, a1);
	}

	::System::Void remove_OnFinished(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_REMOVE_ONFINISHED_OFFSET))(this, a1);
	}

	::Class_1_3CFD07DFD0180CDE* get_Source()
	{
		return ((::Class_1_3CFD07DFD0180CDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_GET_SOURCE_OFFSET))(this);
	}

	::System::Void set_Source(::Class_1_3CFD07DFD0180CDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3CFD07DFD0180CDE*))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_SET_SOURCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6753EE2589CADFA(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_METHOD_1_C6753EE2589CADFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E8F1DC95ECDC741(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_METHOD_1_5E8F1DC95ECDC741_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_134F4A605D115C87_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
