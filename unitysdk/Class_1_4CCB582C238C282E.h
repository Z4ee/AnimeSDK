#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_54D5CCE1D19D93EF;
class Class_1_5623C129675A2671;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CCB582C238C282E_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x10C9ECE0)
#define CLASS_1_4CCB582C238C282E_GET_PHASEDATALIST_OFFSET UNITYSDK_OFFSET(0x10C9ED20)
#define CLASS_1_4CCB582C238C282E_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x10C9ED00)
#define CLASS_1_4CCB582C238C282E_METHOD_1_B1F32BE9E2AA5162_OFFSET UNITYSDK_OFFSET(0x10C9E8D0)
#define CLASS_1_4CCB582C238C282E_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x10C9ECF0)
#define CLASS_1_4CCB582C238C282E_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x10C9ED10)
#define CLASS_1_4CCB582C238C282E__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9EC90)

inline static constexpr unsigned int Class_1_4CCB582C238C282E_TypeDefinitionIndex = 57465;

class Class_1_4CCB582C238C282E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* _PhaseDataList_k__BackingField; // 0x10
	::System::UInt32 _TotalScore_k__BackingField; // 0x18
	::System::Boolean _IsSuccess_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E__CTOR_OFFSET))(this);
	}

	static ::Class_1_4CCB582C238C282E* Method_1_B1F32BE9E2AA5162(::Class_1_5623C129675A2671* a1)
	{
		return ((::Class_1_4CCB582C238C282E*(*)(::Class_1_5623C129675A2671*))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E_METHOD_1_B1F32BE9E2AA5162_OFFSET))(a1);
	}

	::System::Boolean get_IsSuccess()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E_GET_ISSUCCESS_OFFSET))(this);
	}

	::System::Void set_IsSuccess(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E_SET_ISSUCCESS_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E_GET_TOTALSCORE_OFFSET))(this);
	}

	::System::Void set_TotalScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E_SET_TOTALSCORE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* get_PhaseDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CCB582C238C282E_GET_PHASEDATALIST_OFFSET))(this);
	}
};
