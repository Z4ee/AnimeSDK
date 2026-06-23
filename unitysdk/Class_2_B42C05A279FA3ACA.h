#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F087C81F248BFF51.h"
#include "unitysdk/Class_2_B42C05A279FA3ACA_Struct_2_BC9E8EC7B8958435.h"
#include "unitysdk/Enum_3_512A118E897BF755.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"

class Class_1_43BD383C98B4C0C5_60;
class Class_2_6A8124E2B9571E07;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B42C05A279FA3ACA_METHOD_2_1B584E41D9999934_OFFSET UNITYSDK_OFFSET(0x131BBF20)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_34B2A8EABFCFC9C9_OFFSET UNITYSDK_OFFSET(0x131BD0D0)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_76B563863C8D0AC1_OFFSET UNITYSDK_OFFSET(0x131BC480)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_8750B235DD41FE4A_OFFSET UNITYSDK_OFFSET(0x131BD380)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x131BCD80)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x131BD410)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_CCF12FAD1A1C467D_OFFSET UNITYSDK_OFFSET(0x131BBF30)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_DBD4B7B0FA0050B1_OFFSET UNITYSDK_OFFSET(0x131BC300)
#define CLASS_2_B42C05A279FA3ACA_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x131BD300)
#define CLASS_2_B42C05A279FA3ACA__CTOR_OFFSET UNITYSDK_OFFSET(0x131BD030)

inline static constexpr unsigned int Class_2_B42C05A279FA3ACA_TypeDefinitionIndex = 48639;

class Class_2_B42C05A279FA3ACA : public ::Class_1_F087C81F248BFF51
{
public:
	::System::Collections::Generic::List_1<::Class_2_B42C05A279FA3ACA_Struct_2_BC9E8EC7B8958435>* Field_2_1; // 0x10
	::Class_2_6A8124E2B9571E07* Field_2_0; // 0x18
	::Il2CppArray<::Enum_3_512A118E897BF755>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::Enum_3_512A118E897BF755>* Method_2_1B584E41D9999934()
	{
		return ((::Il2CppArray<::Enum_3_512A118E897BF755>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_1B584E41D9999934_OFFSET))(this);
	}

	::System::Void Method_2_CCF12FAD1A1C467D(::Il2CppArray<::Class_1_43BD383C98B4C0C5_60*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_43BD383C98B4C0C5_60*>*))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_CCF12FAD1A1C467D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Void Method_2_34B2A8EABFCFC9C9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_34B2A8EABFCFC9C9_OFFSET))(this, a1);
	}

	static ::Class_2_B42C05A279FA3ACA* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_B42C05A279FA3ACA*(*)())((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_E5630A859AA24FB3_OFFSET))();
	}

	::System::Void Method_2_DBD4B7B0FA0050B1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::Foundation::Unreal::FGameplayTagContainer& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_DBD4B7B0FA0050B1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_76B563863C8D0AC1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::Foundation::Unreal::FGameplayTagContainer a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_76B563863C8D0AC1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8750B235DD41FE4A(::Il2CppArray<::Class_1_43BD383C98B4C0C5_60*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_43BD383C98B4C0C5_60*>*))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_8750B235DD41FE4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B42C05A279FA3ACA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
