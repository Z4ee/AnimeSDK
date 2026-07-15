#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CFFBE92D294C889;
class Class_1_42D96751C1376DDB;
class Class_1_DAD235E7E82A1F67;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_84DA91D3CFCB2E68_GET_MASTER_OFFSET UNITYSDK_OFFSET(0x1561A0C0)
#define CLASS_1_84DA91D3CFCB2E68_GET_SERVANT_OFFSET UNITYSDK_OFFSET(0x1561A0D0)
#define CLASS_1_84DA91D3CFCB2E68_GET_TEAMHEALTH_OFFSET UNITYSDK_OFFSET(0x1561A0A0)
#define CLASS_1_84DA91D3CFCB2E68_GET_TEAMSTATUSES_OFFSET UNITYSDK_OFFSET(0x1561A0B0)
#define CLASS_1_84DA91D3CFCB2E68__CTOR_OFFSET UNITYSDK_OFFSET(0x1561A0E0)

inline static constexpr unsigned int Class_1_84DA91D3CFCB2E68_TypeDefinitionIndex = 75863;

class Class_1_84DA91D3CFCB2E68 : public ::System::Object
{
public:
	::Class_1_2CFFBE92D294C889* _Master_k__BackingField; // 0x10
	::Class_1_2CFFBE92D294C889* _Servant_k__BackingField; // 0x18
	::Class_1_DAD235E7E82A1F67* _TeamHealth_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* _TeamStatuses_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DA91D3CFCB2E68__CTOR_OFFSET))(this);
	}

	::Class_1_DAD235E7E82A1F67* get_TeamHealth()
	{
		return ((::Class_1_DAD235E7E82A1F67*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DA91D3CFCB2E68_GET_TEAMHEALTH_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>* get_TeamStatuses()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_42D96751C1376DDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DA91D3CFCB2E68_GET_TEAMSTATUSES_OFFSET))(this);
	}

	::Class_1_2CFFBE92D294C889* get_Master()
	{
		return ((::Class_1_2CFFBE92D294C889*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DA91D3CFCB2E68_GET_MASTER_OFFSET))(this);
	}

	::Class_1_2CFFBE92D294C889* get_Servant()
	{
		return ((::Class_1_2CFFBE92D294C889*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84DA91D3CFCB2E68_GET_SERVANT_OFFSET))(this);
	}
};
