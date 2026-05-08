#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0244180E10798511;
class Class_3_32CD58E95ADFF8F5_12;
class Class_3_F3DCBA99CBDDC096;
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPageController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A_METHOD_1_0B3332F6394C01A8_OFFSET UNITYSDK_OFFSET(0x11DBD020)
#define CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A_METHOD_1_6F6513564E6748E7_OFFSET UNITYSDK_OFFSET(0x11DBDA40)
#define CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A_METHOD_1_75F44C212D6D8352_OFFSET UNITYSDK_OFFSET(0x11DBD3D0)
#define CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A__CTOR_OFFSET UNITYSDK_OFFSET(0x11DBD010)

inline static constexpr unsigned int Class_2_0244180E10798511_Class_1_F0232C6DC313428A_TypeDefinitionIndex = 58080;

class Class_2_0244180E10798511_Class_1_F0232C6DC313428A : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapPageContext* Field_1_5; // 0x10
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_1_7; // 0x18
	::Class_2_0244180E10798511* Field_1_0; // 0x20
	::System::Action* Field_1_3; // 0x28
	::MoleMole::UIUrbanMapPageController* Field_1_4; // 0x30
	::System::Action_1<::Class_3_F3DCBA99CBDDC096*>* Field_1_6; // 0x38
	::System::UInt32 Field_1_1; // 0x40
	::System::Boolean Field_1_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B3332F6394C01A8(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A_METHOD_1_0B3332F6394C01A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_75F44C212D6D8352(::Class_3_32CD58E95ADFF8F5_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_12*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A_METHOD_1_75F44C212D6D8352_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F6513564E6748E7(::Class_3_F3DCBA99CBDDC096* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F3DCBA99CBDDC096*))((::PBYTE)hIl2Cpp + CLASS_2_0244180E10798511_CLASS_1_F0232C6DC313428A_METHOD_1_6F6513564E6748E7_OFFSET))(this, a1);
	}
};
