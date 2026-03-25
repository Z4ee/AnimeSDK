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

#define CLASS_1_99337DDD16B17366_METHOD_1_05C0CF12CBCF1F6A_OFFSET UNITYSDK_OFFSET(0xA4283E0)
#define CLASS_1_99337DDD16B17366_METHOD_1_111E3F406ABDDAA7_OFFSET UNITYSDK_OFFSET(0xA2294C0)
#define CLASS_1_99337DDD16B17366_METHOD_1_14BD16324470EC8B_OFFSET UNITYSDK_OFFSET(0xA229590)
#define CLASS_1_99337DDD16B17366_METHOD_1_518C6F1B8C5A6FFD_OFFSET UNITYSDK_OFFSET(0xA4280D0)
#define CLASS_1_99337DDD16B17366_METHOD_1_59F3137268D05723_OFFSET UNITYSDK_OFFSET(0xA427F00)
#define CLASS_1_99337DDD16B17366_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA229470)
#define CLASS_1_99337DDD16B17366_METHOD_1_AEDE5BA7410E68B5_OFFSET UNITYSDK_OFFSET(0xA229A70)
#define CLASS_1_99337DDD16B17366_METHOD_1_C4362916F8FD7DDC_OFFSET UNITYSDK_OFFSET(0xA2298D0)
#define CLASS_1_99337DDD16B17366_METHOD_1_D6812ED21FCF6F4E_OFFSET UNITYSDK_OFFSET(0xA428660)
#define CLASS_1_99337DDD16B17366_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0xA229510)
#define CLASS_1_99337DDD16B17366__CTOR_OFFSET UNITYSDK_OFFSET(0xA4287F0)

inline static constexpr unsigned int Class_1_99337DDD16B17366_TypeDefinitionIndex = 49693;

class Class_1_99337DDD16B17366 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::VideoBundleInfoItem*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::VideoBundleInfoItem*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x20

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

	static ::Class_1_99337DDD16B17366* Method_1_AEDE5BA7410E68B5(::System::String* a1)
	{
		return ((::Class_1_99337DDD16B17366*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_AEDE5BA7410E68B5_OFFSET))(a1);
	}

	::System::Void Method_1_59F3137268D05723(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_59F3137268D05723_OFFSET))(this, a1);
	}

	::System::Void Method_1_518C6F1B8C5A6FFD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_518C6F1B8C5A6FFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_05C0CF12CBCF1F6A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_05C0CF12CBCF1F6A_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_D6812ED21FCF6F4E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99337DDD16B17366_METHOD_1_D6812ED21FCF6F4E_OFFSET))(this, a1);
	}
};
