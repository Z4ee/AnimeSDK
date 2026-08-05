#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4B3401D95328DA92;
class Class_3_472679C84451629A_31;
class Class_3_87492AF8E794E45E_15;
namespace MoleMole { class UIUrbanMapPageContext; }
namespace MoleMole { class UIUrbanMapPageController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A_METHOD_1_0B3332F6394C01A8_OFFSET UNITYSDK_OFFSET(0x15861720)
#define CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A_METHOD_1_BFB61687508FFF36_OFFSET UNITYSDK_OFFSET(0x15861AC0)
#define CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A_METHOD_1_FBAF30DDB1F77EE3_OFFSET UNITYSDK_OFFSET(0x15861400)
#define CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A__CTOR_OFFSET UNITYSDK_OFFSET(0x158613F0)

inline static constexpr unsigned int Class_2_4B3401D95328DA92_Class_1_F0232C6DC313428A_TypeDefinitionIndex = 68324;

class Class_2_4B3401D95328DA92_Class_1_F0232C6DC313428A : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapPageController* Field_1_6; // 0x10
	::Class_2_4B3401D95328DA92* Field_1_2; // 0x18
	::MoleMole::UIUrbanMapPageContext* Field_1_5; // 0x20
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_1_11; // 0x28
	::System::Action_1<::Class_3_472679C84451629A_31*>* Field_1_4; // 0x30
	::System::Action* Field_1_7; // 0x38
	::System::UInt32 Field_1_1; // 0x40
	::System::Boolean Field_1_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FBAF30DDB1F77EE3(::Class_3_472679C84451629A_31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_31*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A_METHOD_1_FBAF30DDB1F77EE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B3332F6394C01A8(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A_METHOD_1_0B3332F6394C01A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BFB61687508FFF36(::Class_3_87492AF8E794E45E_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_87492AF8E794E45E_15*))((::PBYTE)hIl2Cpp + CLASS_2_4B3401D95328DA92_CLASS_1_F0232C6DC313428A_METHOD_1_BFB61687508FFF36_OFFSET))(this, a1);
	}
};
