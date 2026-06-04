#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_68;
namespace RPG::Client { class RawItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_BF84C282A637A074_METHOD_1_07B2511D163B1890_OFFSET UNITYSDK_OFFSET(0x18895B20)
#define CLASS_1_BF84C282A637A074_METHOD_1_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x18894CE0)
#define CLASS_1_BF84C282A637A074_METHOD_1_137D149EBA045357_OFFSET UNITYSDK_OFFSET(0x188951B0)
#define CLASS_1_BF84C282A637A074_METHOD_1_27A27A861E1223F2_OFFSET UNITYSDK_OFFSET(0x18895320)
#define CLASS_1_BF84C282A637A074_METHOD_1_3B55F842F785A083_OFFSET UNITYSDK_OFFSET(0x18894DC0)
#define CLASS_1_BF84C282A637A074_METHOD_1_43E9E87293B305B2_OFFSET UNITYSDK_OFFSET(0x188955D0)
#define CLASS_1_BF84C282A637A074_METHOD_1_6FB9009C6D1700A4_OFFSET UNITYSDK_OFFSET(0x18895090)
#define CLASS_1_BF84C282A637A074_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x18894C90)
#define CLASS_1_BF84C282A637A074_METHOD_1_A913AABBB5B75EFA_OFFSET UNITYSDK_OFFSET(0x18894D30)
#define CLASS_1_BF84C282A637A074_METHOD_1_E153CCD05DDC6530_OFFSET UNITYSDK_OFFSET(0x188957C0)
#define CLASS_1_BF84C282A637A074__CTOR_OFFSET UNITYSDK_OFFSET(0x18895530)

inline static constexpr unsigned int Class_1_BF84C282A637A074_TypeDefinitionIndex = 38567;

class Class_1_BF84C282A637A074 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::RawItem*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RawItem*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_68* Method_1_A913AABBB5B75EFA(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_A913AABBB5B75EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B55F842F785A083(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_3B55F842F785A083_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_6FB9009C6D1700A4(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_6FB9009C6D1700A4_OFFSET))(this, a1);
	}

	::RPG::Client::RawItem* Method_1_137D149EBA045357(::System::String* a1)
	{
		return ((::RPG::Client::RawItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_137D149EBA045357_OFFSET))(this, a1);
	}

	static ::Class_1_BF84C282A637A074* Method_1_27A27A861E1223F2(::System::String* a1)
	{
		return ((::Class_1_BF84C282A637A074*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_27A27A861E1223F2_OFFSET))(a1);
	}

	::System::Void Method_1_43E9E87293B305B2(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_43E9E87293B305B2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E153CCD05DDC6530(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_E153CCD05DDC6530_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_68* Method_1_07B2511D163B1890(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_07B2511D163B1890_OFFSET))(this, a1);
	}
};
