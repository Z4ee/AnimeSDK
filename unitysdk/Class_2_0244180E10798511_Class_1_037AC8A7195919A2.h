#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511;
class Class_3_F3DCBA99CBDDC096;
namespace MoleMole { class UIUrbanMapTipsWidgetContext; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0244180E10798511_CLASS_1_037AC8A7195919A2_METHOD_1_0B3332F6394C01A8_OFFSET UNITYSDK_OFFSET(0xF518100)
#define CLASS_2_0244180E10798511_CLASS_1_037AC8A7195919A2_METHOD_1_29F0C501FEEE7583_OFFSET UNITYSDK_OFFSET(0xF518080)
#define CLASS_2_0244180E10798511_CLASS_1_037AC8A7195919A2__CTOR_OFFSET UNITYSDK_OFFSET(0xF518070)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_037AC8A7195919A2_TypeDefinitionIndex = 58093;

class Class_2_0244180E10798511_Class_1_037AC8A7195919A2 : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapTipsWidgetContext* Field_1_2; // 0x10
	::System::Action_1<::Class_3_F3DCBA99CBDDC096*>* Field_1_3; // 0x18
	::Class_2_0244180E10798511* Field_1_0; // 0x20
	::System::UInt32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_037AC8A7195919A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_29F0C501FEEE7583(::Class_3_F3DCBA99CBDDC096* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F3DCBA99CBDDC096*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_037AC8A7195919A2_METHOD_1_29F0C501FEEE7583_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B3332F6394C01A8(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_037AC8A7195919A2_METHOD_1_0B3332F6394C01A8_OFFSET))(this, a1, a2);
	}
};
