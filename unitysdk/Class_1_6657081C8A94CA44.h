#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_7.h"
#include "unitysdk/Enum_3_EB457EC35BBF1AAD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_03F2053FCA365751;
class Class_1_236FD73ABC492E3F;
class Class_1_5FA9CCDDD9957726;
class Class_1_A0EE873EACD64B72;
class Class_1_F6BCB7EE8BA34BC6;
namespace MoleMole::Config { class ConfigGroupMetaData; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6657081C8A94CA44_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14E1F330)
#define CLASS_1_6657081C8A94CA44_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14E1E240)
#define CLASS_1_6657081C8A94CA44_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x14E1E2C0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_3A0F730492880ECA_OFFSET UNITYSDK_OFFSET(0x14E206D0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_7DB601338350FF7F_OFFSET UNITYSDK_OFFSET(0x14E1F390)
#define CLASS_1_6657081C8A94CA44_METHOD_1_8741776EA0C8E8A8_1_OFFSET UNITYSDK_OFFSET(0x14E1FFC0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_8741776EA0C8E8A8_2_OFFSET UNITYSDK_OFFSET(0x14E203E0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_8741776EA0C8E8A8_OFFSET UNITYSDK_OFFSET(0x14E1FCD0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x14E202C0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_9A96F507F40EC6A7_OFFSET UNITYSDK_OFFSET(0x14E1F9B0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x14E207D0)
#define CLASS_1_6657081C8A94CA44__CTOR_OFFSET UNITYSDK_OFFSET(0x14E1F9A0)

inline static constexpr unsigned int Class_1_6657081C8A94CA44_TypeDefinitionIndex = 71711;

class Class_1_6657081C8A94CA44 : public ::System::Object
{
public:
	::Class_1_03F2053FCA365751* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A0EE873EACD64B72*>* Field_1_10; // 0x18
	::System::Collections::Generic::List_1<::Class_1_A0EE873EACD64B72*>* Field_1_1; // 0x20
	::MoleMole::Config::ConfigGroupMetaData* Field_1_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F6BCB7EE8BA34BC6*>* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* Field_1_3; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5FA9CCDDD9957726*>* Field_1_11; // 0x48
	::System::Collections::Generic::List_1<::Class_1_F6BCB7EE8BA34BC6*>* Field_1_8; // 0x50
	::System::Collections::Generic::List_1<::Class_1_5FA9CCDDD9957726*>* Field_1_4; // 0x58
	::System::Int32 Field_1_0; // 0x60
	::Enum_3_EB457EC35BBF1AAD Field_1_7; // 0x64
	::Enum_3_121CF606CB7E9CD1_7 Field_1_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9A96F507F40EC6A7(::Foundation::ViewObject::SuiteInfo a1, ::Class_1_F6BCB7EE8BA34BC6*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::Class_1_F6BCB7EE8BA34BC6*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_9A96F507F40EC6A7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7DB601338350FF7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_7DB601338350FF7F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741776EA0C8E8A8(::System::Int32 a1, ::Class_1_5FA9CCDDD9957726*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_5FA9CCDDD9957726*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_8741776EA0C8E8A8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8741776EA0C8E8A8_1(::System::Int32 a1, ::Class_1_F6BCB7EE8BA34BC6*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_F6BCB7EE8BA34BC6*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_8741776EA0C8E8A8_1_OFFSET))(this, a1, a2);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_3A0F730492880ECA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_3A0F730492880ECA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_1_8741776EA0C8E8A8_2(::System::Int32 a1, ::Class_1_A0EE873EACD64B72*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_A0EE873EACD64B72*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_8741776EA0C8E8A8_2_OFFSET))(this, a1, a2);
	}
};
