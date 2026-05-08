#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_2_0244180E10798511;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0244180E10798511_CLASS_1_8D53DCC5F15D8C35_METHOD_1_B42F34291DF3DBD0_OFFSET UNITYSDK_OFFSET(0xF099EC0)
#define CLASS_2_0244180E10798511_CLASS_1_8D53DCC5F15D8C35__CTOR_OFFSET UNITYSDK_OFFSET(0xF099EB0)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_8D53DCC5F15D8C35_TypeDefinitionIndex = 58104;

class Class_2_0244180E10798511_Class_1_8D53DCC5F15D8C35 : public ::System::Object
{
public:
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_1_2; // 0x10
	::Class_2_0244180E10798511* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_8D53DCC5F15D8C35__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B42F34291DF3DBD0(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_8D53DCC5F15D8C35_METHOD_1_B42F34291DF3DBD0_OFFSET))(this, a1);
	}
};
