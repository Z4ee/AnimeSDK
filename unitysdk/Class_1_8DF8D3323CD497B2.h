#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Sample/SampleViewRule.h"
#include "unitysdk/Struct_2_5B01A4D9DE10D034.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8DF8D3323CD497B2_METHOD_1_565B84936AE8B354_OFFSET UNITYSDK_OFFSET(0x99A5070)
#define CLASS_1_8DF8D3323CD497B2_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x99A49D0)
#define CLASS_1_8DF8D3323CD497B2_METHOD_1_97DC0DC73F43C590_OFFSET UNITYSDK_OFFSET(0x99A4F40)
#define CLASS_1_8DF8D3323CD497B2_METHOD_1_A280290A8EB665CC_OFFSET UNITYSDK_OFFSET(0x99A4A20)
#define CLASS_1_8DF8D3323CD497B2_METHOD_1_A3BA87458D94FE12_OFFSET UNITYSDK_OFFSET(0x99A4D60)
#define CLASS_1_8DF8D3323CD497B2_METHOD_1_B57859F7EED5754D_OFFSET UNITYSDK_OFFSET(0x99A5120)
#define CLASS_1_8DF8D3323CD497B2_METHOD_1_F13134015493E97E_OFFSET UNITYSDK_OFFSET(0x99A4AD0)
#define CLASS_1_8DF8D3323CD497B2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x99A4BC0)
#define CLASS_1_8DF8D3323CD497B2__CTOR_OFFSET UNITYSDK_OFFSET(0x99A4BB0)

inline static constexpr unsigned int Class_1_8DF8D3323CD497B2_TypeDefinitionIndex = 68152;

class Class_1_8DF8D3323CD497B2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_5B01A4D9DE10D034>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::Struct_2_5B01A4D9DE10D034>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_5B01A4D9DE10D034>*))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2__CTOR_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Struct_2_5B01A4D9DE10D034 Method_1_A280290A8EB665CC(::System::Int32 a1)
	{
		return ((::Struct_2_5B01A4D9DE10D034(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_A280290A8EB665CC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F13134015493E97E(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_F13134015493E97E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3BA87458D94FE12(::RPG::Client::Sample::SampleViewRule a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Sample::SampleViewRule))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_A3BA87458D94FE12_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_97DC0DC73F43C590(::Struct_2_5B01A4D9DE10D034 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_5B01A4D9DE10D034))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_97DC0DC73F43C590_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* Method_1_565B84936AE8B354()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_565B84936AE8B354_OFFSET))(this);
	}

	::System::Void Method_1_B57859F7EED5754D(::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_FE9BD044832BC9C3>*))((::PBYTE)hIl2Cpp + CLASS_1_8DF8D3323CD497B2_METHOD_1_B57859F7EED5754D_OFFSET))(this, a1);
	}
};
