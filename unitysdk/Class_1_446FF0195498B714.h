#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1E70A5510E64CEBF.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/Struct_2_2656809D0E9B3F8B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_26;
namespace Foundation { class IEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_446FF0195498B714_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBAF960)
#define CLASS_1_446FF0195498B714_METHOD_1_072920DEDE44E8DE_OFFSET UNITYSDK_OFFSET(0x1EBB0060)
#define CLASS_1_446FF0195498B714_METHOD_1_0CCC2EEE6471B774_1_OFFSET UNITYSDK_OFFSET(0x1EBB03C0)
#define CLASS_1_446FF0195498B714_METHOD_1_0CCC2EEE6471B774_OFFSET UNITYSDK_OFFSET(0x1EBB0150)
#define CLASS_1_446FF0195498B714_METHOD_1_1713BCFF8FF87F15_OFFSET UNITYSDK_OFFSET(0x1EBB0080)
#define CLASS_1_446FF0195498B714_METHOD_1_2040CE485462B987_1_OFFSET UNITYSDK_OFFSET(0x1EBB05A0)
#define CLASS_1_446FF0195498B714_METHOD_1_2040CE485462B987_OFFSET UNITYSDK_OFFSET(0x1EBB0040)
#define CLASS_1_446FF0195498B714_METHOD_1_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1EBAFBF0)
#define CLASS_1_446FF0195498B714_METHOD_1_285FFBD14A19CCB7_OFFSET UNITYSDK_OFFSET(0x1EBAFBD0)
#define CLASS_1_446FF0195498B714_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1EBAFBE0)
#define CLASS_1_446FF0195498B714_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1EBB0520)
#define CLASS_1_446FF0195498B714_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1EBB03F0)
#define CLASS_1_446FF0195498B714_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x1EBB0580)
#define CLASS_1_446FF0195498B714_METHOD_1_674F46C0A422ABA7_1_OFFSET UNITYSDK_OFFSET(0x1EBB05B0)
#define CLASS_1_446FF0195498B714_METHOD_1_674F46C0A422ABA7_OFFSET UNITYSDK_OFFSET(0x1EBB0590)
#define CLASS_1_446FF0195498B714_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x1EBB03E0)
#define CLASS_1_446FF0195498B714_METHOD_1_9803499C0EA05DDC_1_OFFSET UNITYSDK_OFFSET(0x1EBB0570)
#define CLASS_1_446FF0195498B714_METHOD_1_9803499C0EA05DDC_OFFSET UNITYSDK_OFFSET(0x1EBB0160)
#define CLASS_1_446FF0195498B714_METHOD_1_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0x1EBB0450)
#define CLASS_1_446FF0195498B714_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1EBB0170)
#define CLASS_1_446FF0195498B714_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x1EBB02F0)
#define CLASS_1_446FF0195498B714_METHOD_1_BF3F9D1D01C18E69_OFFSET UNITYSDK_OFFSET(0x1EBB0180)
#define CLASS_1_446FF0195498B714_METHOD_1_BF9C25E762BD53B3_OFFSET UNITYSDK_OFFSET(0x1EBB0100)
#define CLASS_1_446FF0195498B714_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1EBB0440)
#define CLASS_1_446FF0195498B714_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1EBB0070)
#define CLASS_1_446FF0195498B714_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1EBB0050)
#define CLASS_1_446FF0195498B714_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1EBB03D0)
#define CLASS_1_446FF0195498B714__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAF950)

inline static constexpr unsigned int Class_1_446FF0195498B714_TypeDefinitionIndex = 19586;

class Class_1_446FF0195498B714 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* Field_1_4; // 0x10
	::Class_0_16E4307DCC419505_26* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* Field_1_11; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_1; // 0x30
	::Foundation::IEntity* Field_1_0; // 0x38
	::Foundation::IEntity* Field_1_7; // 0x40
	::System::Int32 Field_1_9; // 0x48
	::Enum_3_1E70A5510E64CEBF Field_1_8; // 0x4C
	::System::Boolean Field_1_10; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_285FFBD14A19CCB7(::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_285FFBD14A19CCB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_1E70A5510E64CEBF a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_1E70A5510E64CEBF))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_229CEF33F0AF9039()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_229CEF33F0AF9039_OFFSET))(this);
	}

	::System::Void Method_1_2040CE485462B987(::Foundation::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_2040CE485462B987_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* Method_1_072920DEDE44E8DE()
	{
		return ((::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_072920DEDE44E8DE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_1713BCFF8FF87F15(::Foundation::IEntity* a1, ::Foundation::IEntity* a2, ::Class_0_16E4307DCC419505_26* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Foundation::IEntity*, ::Class_0_16E4307DCC419505_26*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_1713BCFF8FF87F15_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BF9C25E762BD53B3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_BF9C25E762BD53B3_OFFSET))(this);
	}

	::Foundation::IEntity* Method_1_0CCC2EEE6471B774()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_0CCC2EEE6471B774_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* Method_1_9803499C0EA05DDC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_9803499C0EA05DDC_OFFSET))(this);
	}

	::Enum_3_1E70A5510E64CEBF Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_1E70A5510E64CEBF(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::Class_1_446FF0195498B714* Method_1_BF3F9D1D01C18E69(::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* a1)
	{
		return ((::Class_1_446FF0195498B714*(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_BF3F9D1D01C18E69_OFFSET))(this, a1);
	}

	static ::Class_1_446FF0195498B714* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_446FF0195498B714*(*)())((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_B64C60973842FE45_OFFSET))();
	}

	::Foundation::IEntity* Method_1_0CCC2EEE6471B774_1()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_0CCC2EEE6471B774_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_26*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* Method_1_9803499C0EA05DDC_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_9803499C0EA05DDC_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_26* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_26*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_674F46C0A422ABA7(::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_674F46C0A422ABA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_2040CE485462B987_1(::Foundation::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_2040CE485462B987_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_674F46C0A422ABA7_1(::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_446FF0195498B714_METHOD_1_674F46C0A422ABA7_1_OFFSET))(this, a1);
	}
};
