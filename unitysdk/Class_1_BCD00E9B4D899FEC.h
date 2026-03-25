#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BCD00E9B4D899FEC_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x114C4330)
#define CLASS_1_BCD00E9B4D899FEC_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x114C4310)
#define CLASS_1_BCD00E9B4D899FEC_METHOD_1_12C08677E41D9EF9_OFFSET UNITYSDK_OFFSET(0x114C3C70)
#define CLASS_1_BCD00E9B4D899FEC_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x114C3F80)
#define CLASS_1_BCD00E9B4D899FEC_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x114C4210)
#define CLASS_1_BCD00E9B4D899FEC_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x114C40B0)
#define CLASS_1_BCD00E9B4D899FEC_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x114C4030)
#define CLASS_1_BCD00E9B4D899FEC_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x114C4130)
#define CLASS_1_BCD00E9B4D899FEC_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x114C4340)
#define CLASS_1_BCD00E9B4D899FEC_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x114C4320)
#define CLASS_1_BCD00E9B4D899FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x114C3F00)

inline static constexpr unsigned int Class_1_BCD00E9B4D899FEC_TypeDefinitionIndex = 49771;

class Class_1_BCD00E9B4D899FEC : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x18
	::System::Boolean _Disposed_k__BackingField; // 0x20
	::System::UInt32 _AchievementID_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC__CTOR_OFFSET))(this);
	}

	static ::Class_1_BCD00E9B4D899FEC* Method_1_12C08677E41D9EF9(::Il2CppArray<::System::String*>* a1, ::System::UInt32 a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::Class_1_BCD00E9B4D899FEC*(*)(::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_METHOD_1_12C08677E41D9EF9_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Boolean get_Disposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_GET_DISPOSED_OFFSET))(this);
	}

	::System::Void set_Disposed(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_SET_DISPOSED_OFFSET))(this, value);
	}

	::System::UInt32 get_AchievementID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_GET_ACHIEVEMENTID_OFFSET))(this);
	}

	::System::Void set_AchievementID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BCD00E9B4D899FEC_SET_ACHIEVEMENTID_OFFSET))(this, value);
	}
};
