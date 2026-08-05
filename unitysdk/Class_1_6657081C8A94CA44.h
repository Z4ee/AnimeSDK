#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_6.h"
#include "unitysdk/Enum_3_EB457EC35BBF1AAD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/System/Object.h"

class Class_1_03F2053FCA365751;
class Class_1_236FD73ABC492E3F;
class Class_1_B6B0D4D95C980CCC;
class Class_1_B85817849BC6CF88;
class Class_1_F6BCB7EE8BA34BC6;
namespace MoleMole::Config { class ConfigGroupMetaData; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6657081C8A94CA44_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14625010)
#define CLASS_1_6657081C8A94CA44_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14623D80)
#define CLASS_1_6657081C8A94CA44_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x14623E00)
#define CLASS_1_6657081C8A94CA44_METHOD_1_3A0F730492880ECA_OFFSET UNITYSDK_OFFSET(0x146261B0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_6A2E3D222A03B7CA_OFFSET UNITYSDK_OFFSET(0x14625EC0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_8EB27D281ACA7277_OFFSET UNITYSDK_OFFSET(0x14625AA0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_E09A2B4FBD0492EB_OFFSET UNITYSDK_OFFSET(0x14625070)
#define CLASS_1_6657081C8A94CA44_METHOD_1_E59C51CA135CFED3_1_OFFSET UNITYSDK_OFFSET(0x146262B0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_E59C51CA135CFED3_OFFSET UNITYSDK_OFFSET(0x14625BC0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x14625EA0)
#define CLASS_1_6657081C8A94CA44_METHOD_1_FA6BBFB8EFBEE108_OFFSET UNITYSDK_OFFSET(0x146257A0)
#define CLASS_1_6657081C8A94CA44__CTOR_OFFSET UNITYSDK_OFFSET(0x14625790)

inline static constexpr unsigned int Class_1_6657081C8A94CA44_TypeDefinitionIndex = 73193;

class Class_1_6657081C8A94CA44 : public ::System::Object
{
public:
	::Class_1_03F2053FCA365751* Field_1_11; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B6B0D4D95C980CCC*>* Field_1_14; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_B85817849BC6CF88*>* Field_1_4; // 0x28
	::MoleMole::Config::ConfigGroupMetaData* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B85817849BC6CF88*>* Field_1_13; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F6BCB7EE8BA34BC6*>* Field_1_12; // 0x48
	::System::Collections::Generic::List_1<::Class_1_F6BCB7EE8BA34BC6*>* Field_1_8; // 0x50
	::System::Collections::Generic::List_1<::Class_1_B6B0D4D95C980CCC*>* Field_1_7; // 0x58
	::System::Int32 Field_1_1; // 0x60
	::System::Int32 Field_1_0; // 0x64
	::Enum_3_121CF606CB7E9CD1_6 Field_1_10; // 0x68
	::Enum_3_EB457EC35BBF1AAD Field_1_9; // 0x6C

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

	::System::Boolean Method_1_FA6BBFB8EFBEE108(::Foundation::ViewObject::SuiteInfo a1, ::Class_1_F6BCB7EE8BA34BC6*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::SuiteInfo, ::Class_1_F6BCB7EE8BA34BC6*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_FA6BBFB8EFBEE108_OFFSET))(this, a1, a2);
	}

	::Class_1_B85817849BC6CF88* Method_1_8EB27D281ACA7277(::System::Int32 a1)
	{
		return ((::Class_1_B85817849BC6CF88*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_8EB27D281ACA7277_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_1_6A2E3D222A03B7CA(::System::Int32 a1, ::Class_1_F6BCB7EE8BA34BC6*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_F6BCB7EE8BA34BC6*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_6A2E3D222A03B7CA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E59C51CA135CFED3(::System::Int32 a1, ::Class_1_B6B0D4D95C980CCC*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_B6B0D4D95C980CCC*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_E59C51CA135CFED3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E09A2B4FBD0492EB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_E09A2B4FBD0492EB_OFFSET))(this, a1, a2);
	}

	::Class_1_B85817849BC6CF88* Method_1_3A0F730492880ECA(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_B85817849BC6CF88*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_3A0F730492880ECA_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E59C51CA135CFED3_1(::System::Int32 a1, ::Class_1_B85817849BC6CF88*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Class_1_B85817849BC6CF88*&))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_E59C51CA135CFED3_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6657081C8A94CA44_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
