#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_420B9A7615F4ACC2;
class Class_2_52F82E04F7FEE529;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9069DF7B1C601BBB_METHOD_1_0C88AB06D46E777A_OFFSET UNITYSDK_OFFSET(0x133B5440)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_163DC9A61F1D3AF0_OFFSET UNITYSDK_OFFSET(0x133CD5D0)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_1C08CB854956A856_OFFSET UNITYSDK_OFFSET(0x133CD650)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x133CDC80)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_805ED9316430A0DF_OFFSET UNITYSDK_OFFSET(0x133CDB60)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x133CD520)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x133CDB10)
#define CLASS_1_9069DF7B1C601BBB_METHOD_1_C4919AE7547B2FDE_OFFSET UNITYSDK_OFFSET(0x133CDBF0)
#define CLASS_1_9069DF7B1C601BBB__CTOR_OFFSET UNITYSDK_OFFSET(0x133B5250)

inline static constexpr unsigned int Class_1_9069DF7B1C601BBB_TypeDefinitionIndex = 74510;

class Class_1_9069DF7B1C601BBB : public ::System::Object
{
public:
	static ::Class_1_9069DF7B1C601BBB** StaticGet_Field_1_4()
	{
		return (::Class_1_9069DF7B1C601BBB**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9069DF7B1C601BBB_TypeDefinitionIndex)->GetStaticField(0x42960);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_1<::Class_2_52F82E04F7FEE529*>*>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_420B9A7615F4ACC2*>* Field_1_2; // 0x18
	::System::Action* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::Class_2_52F82E04F7FEE529*>* Field_1_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_3; // 0x30
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_163DC9A61F1D3AF0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_163DC9A61F1D3AF0_OFFSET))();
	}

	::System::Int32 Method_1_1C08CB854956A856(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_1C08CB854956A856_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::Class_1_420B9A7615F4ACC2* Method_1_805ED9316430A0DF(::System::Int32 a1)
	{
		return ((::Class_1_420B9A7615F4ACC2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_805ED9316430A0DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C88AB06D46E777A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_0C88AB06D46E777A_OFFSET))(this);
	}

	::Class_2_52F82E04F7FEE529* Method_1_C4919AE7547B2FDE(::System::Int32 a1)
	{
		return ((::Class_2_52F82E04F7FEE529*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_C4919AE7547B2FDE_OFFSET))(this, a1);
	}

	static ::Class_1_9069DF7B1C601BBB* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_9069DF7B1C601BBB*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9069DF7B1C601BBB_METHOD_1_47FCE72550F759BF_OFFSET))();
	}
};
