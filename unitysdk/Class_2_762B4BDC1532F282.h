#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD893FD36F6A3A6D_2.h"

class Class_0_16E4307DCC419505_163;
class Class_1_5E2D533DC7C7E714;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_762B4BDC1532F282_METHOD_2_0823A740E30EB1AD_OFFSET UNITYSDK_OFFSET(0x1C53B5A0)
#define CLASS_2_762B4BDC1532F282_METHOD_2_4447438564DE5164_OFFSET UNITYSDK_OFFSET(0x1C53BAE0)
#define CLASS_2_762B4BDC1532F282_METHOD_2_961365C8D392E332_OFFSET UNITYSDK_OFFSET(0x1C53BC10)
#define CLASS_2_762B4BDC1532F282_METHOD_2_9A2406609E2F83BE_OFFSET UNITYSDK_OFFSET(0x1C53B140)
#define CLASS_2_762B4BDC1532F282_METHOD_2_F64E20730F7C818E_OFFSET UNITYSDK_OFFSET(0x1C53AD30)
#define CLASS_2_762B4BDC1532F282__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53AD10)

inline static constexpr unsigned int Class_2_762B4BDC1532F282_TypeDefinitionIndex = 41786;

class Class_2_762B4BDC1532F282 : public ::Class_1_FD893FD36F6A3A6D_2
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* COEKHGCEFMG; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_762B4BDC1532F282__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F64E20730F7C818E(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_762B4BDC1532F282_METHOD_2_F64E20730F7C818E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A2406609E2F83BE(::Class_0_16E4307DCC419505_163* a1, ::Class_1_5E2D533DC7C7E714* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>*& a3, ::System::Collections::Generic::HashSet_1<::System::Int32>*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_163*, ::Class_1_5E2D533DC7C7E714*, ::System::Collections::Generic::HashSet_1<::System::Int32>*&, ::System::Collections::Generic::HashSet_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_762B4BDC1532F282_METHOD_2_9A2406609E2F83BE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0823A740E30EB1AD(::Class_1_5E2D533DC7C7E714* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>*& a2, ::System::Collections::Generic::HashSet_1<::System::Int32>*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E2D533DC7C7E714*, ::System::Collections::Generic::HashSet_1<::System::Int32>*&, ::System::Collections::Generic::HashSet_1<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_2_762B4BDC1532F282_METHOD_2_0823A740E30EB1AD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4447438564DE5164(::Class_0_16E4307DCC419505_163* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_163*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_762B4BDC1532F282_METHOD_2_4447438564DE5164_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_961365C8D392E332(::Class_0_16E4307DCC419505_163* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_163*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_762B4BDC1532F282_METHOD_2_961365C8D392E332_OFFSET))(this, a1, a2);
	}
};
