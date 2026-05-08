#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_17084610E266B2F1;
class Class_1_CCC17A1447C28688;
class Class_1_D366ED82D8A1F916;
class Class_2_52E46C711C8C873D;
class Class_2_BA2B2B0A0E98E063;
class Class_2_C162E620AE258C19;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_46E613428B30FCCD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14382870)
#define CLASS_3_46E613428B30FCCD_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14382BF0)
#define CLASS_3_46E613428B30FCCD_METHOD_3_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x14382C70)
#define CLASS_3_46E613428B30FCCD_METHOD_3_318BF202AC451298_OFFSET UNITYSDK_OFFSET(0x14382C60)
#define CLASS_3_46E613428B30FCCD_METHOD_3_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x14382C50)
#define CLASS_3_46E613428B30FCCD_METHOD_3_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x14382C30)
#define CLASS_3_46E613428B30FCCD_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14382B50)
#define CLASS_3_46E613428B30FCCD_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x14382AD0)
#define CLASS_3_46E613428B30FCCD_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14382C40)
#define CLASS_3_46E613428B30FCCD_METHOD_3_FB0FF2E2CC82CC6B_OFFSET UNITYSDK_OFFSET(0x14382BE0)
#define CLASS_3_46E613428B30FCCD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14382480)
#define CLASS_3_46E613428B30FCCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14382600)
#define CLASS_3_46E613428B30FCCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x143828C0)
#define CLASS_3_46E613428B30FCCD__CTOR_OFFSET UNITYSDK_OFFSET(0x14382940)

inline static constexpr unsigned int Class_3_46E613428B30FCCD_TypeDefinitionIndex = 52812;

class Class_3_46E613428B30FCCD : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_12 = 0xB0; // 0x0
	::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* Field_3_2; // 0x48
	::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* Field_3_3; // 0x50
	::System::Func_2<::Class_2_BA2B2B0A0E98E063*, ::Class_2_BA2B2B0A0E98E063*>* Field_3_5; // 0x58
	::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* Field_3_1; // 0x60
	::System::Action_1<::Class_2_BA2B2B0A0E98E063*>* Field_3_4; // 0x68
	::Class_2_C162E620AE258C19* Field_3_0; // 0x70
	::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>* Field_3_7; // 0x78
	::System::Action* Field_3_10; // 0x80
	::System::Func_3<::Class_1_D366ED82D8A1F916*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*, ::System::Collections::Generic::List_1<::Class_2_52E46C711C8C873D*>*>* Field_3_6; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_8; // 0x90
	::System::Collections::Generic::List_1<::Class_1_CCC17A1447C28688*>* Field_3_11; // 0x98
	::System::Boolean Field_3_9; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_46E613428B30FCCD* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_46E613428B30FCCD*(*)())((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_3_FB0FF2E2CC82CC6B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_FB0FF2E2CC82CC6B_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_3_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>*))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>* Method_3_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_17084610E266B2F1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_3_318BF202AC451298(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_318BF202AC451298_OFFSET))(this, a1);
	}

	::System::Void Method_3_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_46E613428B30FCCD_METHOD_3_19CCC07C980409E4_OFFSET))(this, a1);
	}
};
