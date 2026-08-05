#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7.h"

class Class_3_806C38C50E9F30A7;
class Class_3_806C38C50E9F30A7_Class_1_00B30B1EEF9C315B;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6C4C205B8355D94A_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13E07BB0)
#define CLASS_3_6C4C205B8355D94A_METHOD_3_3A1D89FD6D47652D_OFFSET UNITYSDK_OFFSET(0x13E07EF0)
#define CLASS_3_6C4C205B8355D94A_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x13E08670)
#define CLASS_3_6C4C205B8355D94A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E085E0)
#define CLASS_3_6C4C205B8355D94A_METHOD_3_DEACBA650B32F397_OFFSET UNITYSDK_OFFSET(0x13E08700)
#define CLASS_3_6C4C205B8355D94A_METHOD_3_EE57DE112AE571C5_OFFSET UNITYSDK_OFFSET(0x13E080F0)
#define CLASS_3_6C4C205B8355D94A_UPDATE_OFFSET UNITYSDK_OFFSET(0x13E07D40)
#define CLASS_3_6C4C205B8355D94A__CTOR_OFFSET UNITYSDK_OFFSET(0x13E07EA0)

inline static constexpr unsigned int Class_3_6C4C205B8355D94A_TypeDefinitionIndex = 48245;

class Class_3_6C4C205B8355D94A : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_3A1D89FD6D47652D(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::Class_3_806C38C50E9F30A7* a2, ::Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7 a3, ::Class_3_806C38C50E9F30A7_Class_1_00B30B1EEF9C315B* a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::Class_3_806C38C50E9F30A7*, ::Class_3_806C38C50E9F30A7_Struct_2_5C38A7F746EDFAA7, ::Class_3_806C38C50E9F30A7_Class_1_00B30B1EEF9C315B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_METHOD_3_3A1D89FD6D47652D_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_3_EE57DE112AE571C5(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::Class_3_806C38C50E9F30A7* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::Class_3_806C38C50E9F30A7*))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_METHOD_3_EE57DE112AE571C5_OFFSET))(a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_DEACBA650B32F397(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_6C4C205B8355D94A_METHOD_3_DEACBA650B32F397_OFFSET))(a1);
	}
};
