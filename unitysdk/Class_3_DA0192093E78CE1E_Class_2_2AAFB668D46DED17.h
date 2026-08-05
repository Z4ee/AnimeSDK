#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0F5195356F0210F0_2.h"
#include "unitysdk/Enum_3_957863D6ACD43A5B.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"

class Class_3_DA0192093E78CE1E;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_1_OFFSET UNITYSDK_OFFSET(0x13B4EA90)
#define CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_OFFSET UNITYSDK_OFFSET(0x13B4E9F0)
#define CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_1_OFFSET UNITYSDK_OFFSET(0x13B4EC50)
#define CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_OFFSET UNITYSDK_OFFSET(0x13B4EB30)
#define CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17__CTOR_OFFSET UNITYSDK_OFFSET(0x13B4E8D0)

inline static constexpr unsigned int Class_3_DA0192093E78CE1E_Class_2_2AAFB668D46DED17_TypeDefinitionIndex = 89697;

class Class_3_DA0192093E78CE1E_Class_2_2AAFB668D46DED17 : public ::Class_1_0F5195356F0210F0_2
{
public:
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_12; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Field_2_11; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_17; // 0x28
	::MoleMole::EntityHandle Field_2_21; // 0x30
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Int64>* Field_2_4; // 0x40
	::MoleMole::EntityHandle Field_2_23; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_2_18; // 0x58
	::Struct_2_FA5F50563E60AFBA Field_2_1; // 0x60
	::MoleMole::EntityHandle Field_2_22; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Field_2_16; // 0x88
	::Foundation::DoubleKeyDictionary_3<::MoleMole::Config::DamageElementType, ::MoleMole::Config::EVariantElement, ::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_2_9; // 0x90
	::System::UInt32 Field_2_2; // 0x98
	::System::Single Field_2_15; // 0x9C
	::System::Int32 Field_2_0; // 0xA0
	::System::Boolean Field_2_19; // 0xA4
	::System::Boolean Field_2_20; // 0xA5
	::System::Boolean Field_2_6; // 0xA6
	::System::Boolean Field_2_13; // 0xA7
	::Enum_3_957863D6ACD43A5B Field_2_14; // 0xA8
	::System::Single Field_2_5; // 0xAC
	::System::UInt32 Field_2_8; // 0xB0
	::System::Single Field_2_7; // 0xB4
	::System::UInt32 Field_2_3; // 0xB8
	::System::Single Field_2_10; // 0xBC

	::System::Void _ctor(::Class_3_DA0192093E78CE1E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DA0192093E78CE1E*))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_AA525C794110774B()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Method_2_AA525C794110774B_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AA525C794110774B_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_AF8EFFE52148ADB6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>* Method_2_AF8EFFE52148ADB6_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA0192093E78CE1E_CLASS_2_2AAFB668D46DED17_METHOD_2_AF8EFFE52148ADB6_1_OFFSET))(this);
	}
};
