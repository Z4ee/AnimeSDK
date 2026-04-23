#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_99337DDD16B17366_METHOD_1_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0x96D0540)
#define CLASS_1_99337DDD16B17366_METHOD_1_14BD16324470EC8B_OFFSET UNITYSDK_OFFSET(0x96D0610)
#define CLASS_1_99337DDD16B17366_METHOD_1_27A27A861E1223F2_OFFSET UNITYSDK_OFFSET(0x96D0AF0)
#define CLASS_1_99337DDD16B17366_METHOD_1_37684614E23359CD_OFFSET UNITYSDK_OFFSET(0x96D0F90)
#define CLASS_1_99337DDD16B17366_METHOD_1_59F3137268D05723_OFFSET UNITYSDK_OFFSET(0x96D0DC0)
#define CLASS_1_99337DDD16B17366_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x96D04F0)
#define CLASS_1_99337DDD16B17366_METHOD_1_C4362916F8FD7DDC_OFFSET UNITYSDK_OFFSET(0x96D0950)
#define CLASS_1_99337DDD16B17366_METHOD_1_D6812ED21FCF6F4E_OFFSET UNITYSDK_OFFSET(0x96D1680)
#define CLASS_1_99337DDD16B17366_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x96D0590)
#define CLASS_1_99337DDD16B17366_METHOD_1_FF8B11B2A54C41B9_OFFSET UNITYSDK_OFFSET(0x96D1360)
#define CLASS_1_99337DDD16B17366__CTOR_OFFSET UNITYSDK_OFFSET(0x96D0D00)

inline static constexpr unsigned int Class_1_99337DDD16B17366_TypeDefinitionIndex = 56514;

class Class_1_99337DDD16B17366 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::VideoBundleInfoItem*>* Field_1_1; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::VideoBundleInfoItem*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_111E3F406ABDDAA7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_111E3F406ABDDAA7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_14BD16324470EC8B(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_14BD16324470EC8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::VideoBundleInfoItem* Method_1_C4362916F8FD7DDC(::System::String* a1)
	{
		return ((::RPG::Client::VideoBundleInfoItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_C4362916F8FD7DDC_OFFSET))(this, a1);
	}

	static ::Class_1_99337DDD16B17366* Method_1_27A27A861E1223F2(::System::String* a1)
	{
		return ((::Class_1_99337DDD16B17366*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_27A27A861E1223F2_OFFSET))(a1);
	}

	::System::Void Method_1_59F3137268D05723(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_59F3137268D05723_OFFSET))(this, a1);
	}

	::System::Void Method_1_37684614E23359CD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_37684614E23359CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF8B11B2A54C41B9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_FF8B11B2A54C41B9_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_D6812ED21FCF6F4E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_D6812ED21FCF6F4E_OFFSET))(this, a1);
	}
};
