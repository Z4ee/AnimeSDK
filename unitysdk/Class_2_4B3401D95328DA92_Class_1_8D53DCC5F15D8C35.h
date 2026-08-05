#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_2_4B3401D95328DA92;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_8D53DCC5F15D8C35_METHOD_1_B42F34291DF3DBD0_OFFSET UNITYSDK_OFFSET(0x13E70E00)
#define CLASS_2_4B3401D95328DA92_CLASS_1_8D53DCC5F15D8C35__CTOR_OFFSET UNITYSDK_OFFSET(0x13E70DF0)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_8D53DCC5F15D8C35_TypeDefinitionIndex = 68322;

class Class_2_4B3401D95328DA92_Class_1_8D53DCC5F15D8C35 : public ::System::Object
{
public:
	::Class_2_4B3401D95328DA92* Field_1_0; // 0x10
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_1_6; // 0x18
	::System::UInt32 Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_8D53DCC5F15D8C35__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B42F34291DF3DBD0(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_8D53DCC5F15D8C35_METHOD_1_B42F34291DF3DBD0_OFFSET))(this, a1);
	}
};
