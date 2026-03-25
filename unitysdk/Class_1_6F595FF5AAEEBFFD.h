#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
namespace RPG::Client { class RawItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x16532280)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_14BD16324470EC8B_OFFSET UNITYSDK_OFFSET(0x16532350)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_27A27A861E1223F2_OFFSET UNITYSDK_OFFSET(0x16532980)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_37684614E23359CD_OFFSET UNITYSDK_OFFSET(0x16532DB0)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_3DBBB84585AEE192_OFFSET UNITYSDK_OFFSET(0x16532690)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_8FF77C86FC74D5EC_OFFSET UNITYSDK_OFFSET(0x16532C10)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x16532230)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_D6812ED21FCF6F4E_OFFSET UNITYSDK_OFFSET(0x165330B0)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x165322D0)
#define CLASS_1_6F595FF5AAEEBFFD_METHOD_1_FB2900E723732C70_OFFSET UNITYSDK_OFFSET(0x16532810)
#define CLASS_1_6F595FF5AAEEBFFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16532B70)

inline static constexpr unsigned int Class_1_6F595FF5AAEEBFFD_TypeDefinitionIndex = 32110;

class Class_1_6F595FF5AAEEBFFD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::RawItem*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::RawItem*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_14BD16324470EC8B(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_14BD16324470EC8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_3DBBB84585AEE192(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_3DBBB84585AEE192_OFFSET))(this, a1);
	}

	::RPG::Client::RawItem* Method_1_FB2900E723732C70(::System::String* a1)
	{
		return ((::RPG::Client::RawItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_FB2900E723732C70_OFFSET))(this, a1);
	}

	static ::Class_1_6F595FF5AAEEBFFD* Method_1_27A27A861E1223F2(::System::String* a1)
	{
		return ((::Class_1_6F595FF5AAEEBFFD*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_27A27A861E1223F2_OFFSET))(a1);
	}

	::System::Void Method_1_8FF77C86FC74D5EC(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_8FF77C86FC74D5EC_OFFSET))(this, a1);
	}

	::System::Void Method_1_37684614E23359CD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_37684614E23359CD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_D6812ED21FCF6F4E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F595FF5AAEEBFFD_METHOD_1_D6812ED21FCF6F4E_OFFSET))(this, a1);
	}
};
