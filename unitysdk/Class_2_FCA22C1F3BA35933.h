#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_93.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Threading/SpinLock.h"

class Class_1_2978C3AFB9C9E5D0;
class Class_1_783B750F97F4D71D;
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class IPEndPoint; }

#define CLASS_2_FCA22C1F3BA35933_METHOD_2_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x1923C900)
#define CLASS_2_FCA22C1F3BA35933_METHOD_2_737961BD25442F05_OFFSET UNITYSDK_OFFSET(0x19241BF0)
#define CLASS_2_FCA22C1F3BA35933_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1923CE30)
#define CLASS_2_FCA22C1F3BA35933_METHOD_2_90F2B78916ECF9A0_OFFSET UNITYSDK_OFFSET(0x1923CE40)
#define CLASS_2_FCA22C1F3BA35933_METHOD_2_AE25F2D1EECA0407_OFFSET UNITYSDK_OFFSET(0x19241D20)
#define CLASS_2_FCA22C1F3BA35933_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19241BE0)
#define CLASS_2_FCA22C1F3BA35933__CTOR_OFFSET UNITYSDK_OFFSET(0x19234CB0)
#define CLASS_2_FCA22C1F3BA35933___COMPAREBYPING_B__12_0_OFFSET UNITYSDK_OFFSET(0x19241DE0)

inline static constexpr unsigned int Class_2_FCA22C1F3BA35933_TypeDefinitionIndex = 39650;

class Class_2_FCA22C1F3BA35933 : public ::Class_1_43BD383C98B4C0C5_93
{
public:
	::System::UInt64 Field_2_2; // 0x10
	::RPG::Client::IPVersion Field_2_5; // 0x18
	::System::Threading::SpinLock Field_2_4; // 0x1C
	::System::Boolean Field_2_3; // 0x20
	::System::Boolean Field_2_0; // 0x21
	::System::UInt64 Field_2_1; // 0x28

	::System::Void _ctor(::Class_1_783B750F97F4D71D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_783B750F97F4D71D*))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_62D75ADFFEE4BD8B(::Class_1_2978C3AFB9C9E5D0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2978C3AFB9C9E5D0*))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933_METHOD_2_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Method_2_90F2B78916ECF9A0(::RPG::Client::IPVersion& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IPVersion&))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933_METHOD_2_90F2B78916ECF9A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE25F2D1EECA0407(::System::Net::IPEndPoint* a1, ::System::Net::IPEndPoint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933_METHOD_2_AE25F2D1EECA0407_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737961BD25442F05(::RPG::Client::IPVersion a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933_METHOD_2_737961BD25442F05_OFFSET))(this, a1);
	}

	::System::Void __CompareByPing_b__12_0(::System::Collections::Generic::IList_1<::System::UInt64>* results)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_FCA22C1F3BA35933___COMPAREBYPING_B__12_0_OFFSET))(this, results);
	}
};
