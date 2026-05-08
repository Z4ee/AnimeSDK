#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BD2BE7927F889C7B;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3F6C09E90314E9AB_CLASS_1_0D4518AD8D80DA9B_METHOD_1_260184F2360D1A1F_OFFSET UNITYSDK_OFFSET(0x1228F180)
#define CLASS_2_3F6C09E90314E9AB_CLASS_1_0D4518AD8D80DA9B__CTOR_OFFSET UNITYSDK_OFFSET(0x1228F170)

inline static constexpr unsigned int Class_2_3F6C09E90314E9AB_Class_1_0D4518AD8D80DA9B_TypeDefinitionIndex = 63742;

class Class_2_3F6C09E90314E9AB_Class_1_0D4518AD8D80DA9B : public ::System::Object
{
public:
	::System::Action_2<::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>*, ::System::Boolean>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3F6C09E90314E9AB_CLASS_1_0D4518AD8D80DA9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_260184F2360D1A1F(::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BD2BE7927F889C7B*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3F6C09E90314E9AB_CLASS_1_0D4518AD8D80DA9B_METHOD_1_260184F2360D1A1F_OFFSET))(this, a1, a2);
	}
};
