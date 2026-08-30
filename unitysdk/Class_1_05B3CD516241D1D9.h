#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B2CFEFA156739B5;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_05B3CD516241D1D9_METHOD_1_22226C1394152659_OFFSET UNITYSDK_OFFSET(0x17B03F40)
#define CLASS_1_05B3CD516241D1D9_METHOD_1_3F28F69901B69031_OFFSET UNITYSDK_OFFSET(0x17B042D0)
#define CLASS_1_05B3CD516241D1D9_METHOD_1_46DA83116A1D3411_OFFSET UNITYSDK_OFFSET(0x17B04BC0)
#define CLASS_1_05B3CD516241D1D9_METHOD_1_AA55ED8BF849DA71_OFFSET UNITYSDK_OFFSET(0x17B04930)
#define CLASS_1_05B3CD516241D1D9_METHOD_1_C777A0C6D2893F6B_OFFSET UNITYSDK_OFFSET(0x17B03C70)
#define CLASS_1_05B3CD516241D1D9_METHOD_1_E1AA72CD77EB42E0_OFFSET UNITYSDK_OFFSET(0x17B046C0)
#define CLASS_1_05B3CD516241D1D9_METHOD_1_F8E8B2376DA3551C_OFFSET UNITYSDK_OFFSET(0x17B04440)
#define CLASS_1_05B3CD516241D1D9__CTOR_OFFSET UNITYSDK_OFFSET(0x17B04E70)

inline static constexpr unsigned int Class_1_05B3CD516241D1D9_TypeDefinitionIndex = 52334;

class Class_1_05B3CD516241D1D9 : public ::System::Object
{
public:
	::Class_1_9B2CFEFA156739B5* GKNBCPMJHMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C777A0C6D2893F6B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_C777A0C6D2893F6B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_22226C1394152659(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_22226C1394152659_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_3F28F69901B69031(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_3F28F69901B69031_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_F8E8B2376DA3551C(::Class_1_9B2CFEFA156739B5* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::Class_1_9B2CFEFA156739B5*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_F8E8B2376DA3551C_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_1_E1AA72CD77EB42E0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_E1AA72CD77EB42E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AA55ED8BF849DA71(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_AA55ED8BF849DA71_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_46DA83116A1D3411(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_05B3CD516241D1D9_METHOD_1_46DA83116A1D3411_OFFSET))(this, a1);
	}
};
