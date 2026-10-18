#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
namespace RPG::Client { class RawItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_BF84C282A637A074_METHOD_1_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x1C408470)
#define CLASS_1_BF84C282A637A074_METHOD_1_137D149EBA045357_OFFSET UNITYSDK_OFFSET(0x1C408970)
#define CLASS_1_BF84C282A637A074_METHOD_1_26C7FF565EB3FF7B_OFFSET UNITYSDK_OFFSET(0x1C408AE0)
#define CLASS_1_BF84C282A637A074_METHOD_1_2CBA6A2346720E85_OFFSET UNITYSDK_OFFSET(0x1C408F90)
#define CLASS_1_BF84C282A637A074_METHOD_1_3884C140DFBE4A9B_OFFSET UNITYSDK_OFFSET(0x1C408820)
#define CLASS_1_BF84C282A637A074_METHOD_1_3B55F842F785A083_OFFSET UNITYSDK_OFFSET(0x1C408550)
#define CLASS_1_BF84C282A637A074_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1C408420)
#define CLASS_1_BF84C282A637A074_METHOD_1_A913AABBB5B75EFA_OFFSET UNITYSDK_OFFSET(0x1C4084C0)
#define CLASS_1_BF84C282A637A074_METHOD_1_D7C3DF2CE9DAA4D7_OFFSET UNITYSDK_OFFSET(0x1C4092F0)
#define CLASS_1_BF84C282A637A074_METHOD_1_F03304D01ECD1989_OFFSET UNITYSDK_OFFSET(0x1C408D10)
#define CLASS_1_BF84C282A637A074__CTOR_OFFSET UNITYSDK_OFFSET(0x1C408C70)

inline static constexpr unsigned int Class_1_BF84C282A637A074_TypeDefinitionIndex = 41545;

class Class_1_BF84C282A637A074 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::RawItem*>* JIHHCIHPODN; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::RawItem*>* KJPFENPNFBP; // 0x18

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

	::Class_0_16E4307DCC419505_87* Method_1_A913AABBB5B75EFA(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_87*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_A913AABBB5B75EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3B55F842F785A083(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_3B55F842F785A083_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3884C140DFBE4A9B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_3884C140DFBE4A9B_OFFSET))(this, a1);
	}

	::RPG::Client::RawItem* Method_1_137D149EBA045357(::System::String* a1)
	{
		return ((::RPG::Client::RawItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_137D149EBA045357_OFFSET))(this, a1);
	}

	static ::Class_1_BF84C282A637A074* Method_1_26C7FF565EB3FF7B(::System::String* a1)
	{
		return ((::Class_1_BF84C282A637A074*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_26C7FF565EB3FF7B_OFFSET))(a1);
	}

	::System::Void Method_1_F03304D01ECD1989(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_F03304D01ECD1989_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBA6A2346720E85(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_2CBA6A2346720E85_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_87* Method_1_D7C3DF2CE9DAA4D7(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_87*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF84C282A637A074_METHOD_1_D7C3DF2CE9DAA4D7_OFFSET))(this, a1);
	}
};
