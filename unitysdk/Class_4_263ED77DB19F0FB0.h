#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_C7DB129893133198;
class Class_1_E4DCFD174698F990;
namespace MoleMole::Config { class ConfigDynamicValueString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_263ED77DB19F0FB0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1430D110)
#define CLASS_4_263ED77DB19F0FB0_METHOD_4_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x1430BAA0)
#define CLASS_4_263ED77DB19F0FB0_METHOD_4_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1430B710)
#define CLASS_4_263ED77DB19F0FB0_METHOD_4_7CE84B542DEBABD8_OFFSET UNITYSDK_OFFSET(0x1430CC20)
#define CLASS_4_263ED77DB19F0FB0_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1430D080)
#define CLASS_4_263ED77DB19F0FB0_METHOD_4_FE029AAEA4FE132C_OFFSET UNITYSDK_OFFSET(0x1430B440)
#define CLASS_4_263ED77DB19F0FB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1430CCB0)

inline static constexpr unsigned int Class_4_263ED77DB19F0FB0_TypeDefinitionIndex = 88401;

class Class_4_263ED77DB19F0FB0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_9; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Collections::Generic::List_1<::System::String*>*>* Field_4_7; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_6; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_5; // 0x40
	::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* Field_4_14; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_4; // 0x50
	::Class_1_C7DB129893133198* Field_4_8; // 0x58
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_4_0; // 0x60
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_1; // 0x68
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_11; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_4_13; // 0x78
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_4_10; // 0x80
	::MoleMole::Config::ConfigDynamicValueString* Field_4_15; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_FE029AAEA4FE132C(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_METHOD_4_FE029AAEA4FE132C_OFFSET))(this, a1);
	}

	::System::Void Method_4_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_METHOD_4_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_4_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_METHOD_4_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_E4DCFD174698F990* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E4DCFD174698F990*))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Int32 Method_4_7CE84B542DEBABD8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_METHOD_4_7CE84B542DEBABD8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_263ED77DB19F0FB0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
