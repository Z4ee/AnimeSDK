#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_54D5CCE1D19D93EF;
class Class_1_D55DA8BFAC94B3A4_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4FA2A626297E07D_GET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x18F852E0)
#define CLASS_1_F4FA2A626297E07D_GET_PHASEDATALIST_OFFSET UNITYSDK_OFFSET(0x18F85320)
#define CLASS_1_F4FA2A626297E07D_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x18F85300)
#define CLASS_1_F4FA2A626297E07D_METHOD_1_13F906A2AB3CEFD3_OFFSET UNITYSDK_OFFSET(0x18F84D80)
#define CLASS_1_F4FA2A626297E07D_SET_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x18F852F0)
#define CLASS_1_F4FA2A626297E07D_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x18F85310)
#define CLASS_1_F4FA2A626297E07D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F85290)

inline static constexpr unsigned int Class_1_F4FA2A626297E07D_TypeDefinitionIndex = 58727;

class Class_1_F4FA2A626297E07D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* _PhaseDataList_k__BackingField; // 0x10
	::System::Boolean _IsSuccess_k__BackingField; // 0x18
	::System::UInt32 _TotalScore_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D__CTOR_OFFSET))(this);
	}

	static ::Class_1_F4FA2A626297E07D* Method_1_13F906A2AB3CEFD3(::Class_1_D55DA8BFAC94B3A4_2* a1)
	{
		return ((::Class_1_F4FA2A626297E07D*(*)(::Class_1_D55DA8BFAC94B3A4_2*))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D_METHOD_1_13F906A2AB3CEFD3_OFFSET))(a1);
	}

	::System::Boolean get_IsSuccess()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D_GET_ISSUCCESS_OFFSET))(this);
	}

	::System::Void set_IsSuccess(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D_SET_ISSUCCESS_OFFSET))(this, a1);
	}

	::System::UInt32 get_TotalScore()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D_GET_TOTALSCORE_OFFSET))(this);
	}

	::System::Void set_TotalScore(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D_SET_TOTALSCORE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>* get_PhaseDataList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_54D5CCE1D19D93EF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4FA2A626297E07D_GET_PHASEDATALIST_OFFSET))(this);
	}
};
