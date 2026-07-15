#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A1068D5E97305DB4_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x173B6A10)
#define CLASS_1_A1068D5E97305DB4_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x173B69F0)
#define CLASS_1_A1068D5E97305DB4_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x173B6620)
#define CLASS_1_A1068D5E97305DB4_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x173B68A0)
#define CLASS_1_A1068D5E97305DB4_METHOD_1_A0D4CED7A224ED2C_OFFSET UNITYSDK_OFFSET(0x173B6300)
#define CLASS_1_A1068D5E97305DB4_METHOD_1_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x173B6740)
#define CLASS_1_A1068D5E97305DB4_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x173B66C0)
#define CLASS_1_A1068D5E97305DB4_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x173B67C0)
#define CLASS_1_A1068D5E97305DB4_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x173B6A20)
#define CLASS_1_A1068D5E97305DB4_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x173B6A00)
#define CLASS_1_A1068D5E97305DB4__CTOR_OFFSET UNITYSDK_OFFSET(0x173B6590)

inline static constexpr unsigned int Class_1_A1068D5E97305DB4_TypeDefinitionIndex = 58632;

class Class_1_A1068D5E97305DB4 : public ::System::Object
{
public:
	::System::Action_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x18
	::System::UInt32 _AchievementID_k__BackingField; // 0x20
	::System::Boolean _Disposed_k__BackingField; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4__CTOR_OFFSET))(this);
	}

	static ::Class_1_A1068D5E97305DB4* Method_1_A0D4CED7A224ED2C(::Il2CppArray<::System::String*>* a1, ::System::UInt32 a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::Class_1_A1068D5E97305DB4*(*)(::Il2CppArray<::System::String*>*, ::System::UInt32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_METHOD_1_A0D4CED7A224ED2C_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_METHOD_1_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_METHOD_1_D2809205008ACF99_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Boolean get_Disposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_GET_DISPOSED_OFFSET))(this);
	}

	::System::Void set_Disposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_SET_DISPOSED_OFFSET))(this, a1);
	}

	::System::UInt32 get_AchievementID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_GET_ACHIEVEMENTID_OFFSET))(this);
	}

	::System::Void set_AchievementID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1068D5E97305DB4_SET_ACHIEVEMENTID_OFFSET))(this, a1);
	}
};
