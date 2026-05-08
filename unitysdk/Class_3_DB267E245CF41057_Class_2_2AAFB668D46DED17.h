#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F5195356F0210F0_2.h"
#include "unitysdk/Enum_3_957863D6ACD43A5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_3_DB267E245CF41057;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_1_OFFSET UNITYSDK_OFFSET(0x18192390)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_OFFSET UNITYSDK_OFFSET(0x181920B0)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_1_OFFSET UNITYSDK_OFFSET(0x18192270)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_OFFSET UNITYSDK_OFFSET(0x18192150)
#define CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17__CTOR_OFFSET UNITYSDK_OFFSET(0x18191F90)

inline static constexpr unsigned int Class_3_DB267E245CF41057_Class_2_2AAFB668D46DED17_TypeDefinitionIndex = 81719;

class Class_3_DB267E245CF41057_Class_2_2AAFB668D46DED17 : public ::Class_1_0F5195356F0210F0_2
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_18; // 0x18
	::MoleMole::EntityHandle Field_2_22; // 0x20
	::MoleMole::EntityHandle Field_2_21; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_15; // 0x40
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_2_10; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_17; // 0x50
	::Struct_2_FA5F50563E60AFBA Field_2_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_19; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_2_8; // 0x78
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Int64>* Field_2_7; // 0x80
	::MoleMole::EntityHandle Field_2_20; // 0x88
	::Enum_3_957863D6ACD43A5B Field_2_13; // 0x98
	::System::Single Field_2_4; // 0x9C
	::System::UInt32 Field_2_11; // 0xA0
	::System::Single Field_2_12; // 0xA4
	::System::Single Field_2_9; // 0xA8
	::System::UInt32 Field_2_0; // 0xAC
	::System::Boolean Field_2_16; // 0xB0
	::System::Boolean Field_2_5; // 0xB1
	::System::Boolean Field_2_14; // 0xB2
	::System::Boolean Field_2_23; // 0xB3
	::System::UInt32 Field_2_1; // 0xB4
	::System::Int32 Field_2_3; // 0xB8
	::System::Single Field_2_6; // 0xBC

	::System::Void _ctor(::Class_3_DB267E245CF41057* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DB267E245CF41057*))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_AA525C794110774B()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_AF8EFFE52148ADB6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_AF8EFFE52148ADB6_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_AA525C794110774B_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB267E245CF41057_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_1_OFFSET))(this);
	}
};
