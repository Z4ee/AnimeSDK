#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
class Class_1_4BC7F3E0EBEF5C7F;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_F077E55B6446752D_METHOD_1_079094008F95F9BA_OFFSET UNITYSDK_OFFSET(0xA206320)
#define CLASS_1_F077E55B6446752D_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0xA205170)
#define CLASS_1_F077E55B6446752D_METHOD_1_14BD16324470EC8B_OFFSET UNITYSDK_OFFSET(0xA206720)
#define CLASS_1_F077E55B6446752D_METHOD_1_27A27A861E1223F2_OFFSET UNITYSDK_OFFSET(0xA2058F0)
#define CLASS_1_F077E55B6446752D_METHOD_1_4D43507EE64F8B25_OFFSET UNITYSDK_OFFSET(0xA206E30)
#define CLASS_1_F077E55B6446752D_METHOD_1_928CB4D70C21FDF4_OFFSET UNITYSDK_OFFSET(0xA205770)
#define CLASS_1_F077E55B6446752D_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA204D30)
#define CLASS_1_F077E55B6446752D_METHOD_1_9817EAC964C453E7_OFFSET UNITYSDK_OFFSET(0xA205450)
#define CLASS_1_F077E55B6446752D_METHOD_1_988EE78A892C77F3_OFFSET UNITYSDK_OFFSET(0xA204E00)
#define CLASS_1_F077E55B6446752D_METHOD_1_A07BA60A89C4B3F2_OFFSET UNITYSDK_OFFSET(0xA205F50)
#define CLASS_1_F077E55B6446752D_METHOD_1_D19B9D3CFC946396_OFFSET UNITYSDK_OFFSET(0xA206A50)
#define CLASS_1_F077E55B6446752D_METHOD_1_D6812ED21FCF6F4E_OFFSET UNITYSDK_OFFSET(0xA206FB0)
#define CLASS_1_F077E55B6446752D_METHOD_1_DF8C894D984131D3_OFFSET UNITYSDK_OFFSET(0xA204FA0)
#define CLASS_1_F077E55B6446752D_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0xA204D80)
#define CLASS_1_F077E55B6446752D_METHOD_1_FF1FC0B9BC5A6660_OFFSET UNITYSDK_OFFSET(0xA205BC0)
#define CLASS_1_F077E55B6446752D__CTOR_OFFSET UNITYSDK_OFFSET(0xA205B00)

inline static constexpr unsigned int Class_1_F077E55B6446752D_TypeDefinitionIndex = 49638;

class Class_1_F077E55B6446752D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AudioBundleInfoItem*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_69* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_988EE78A892C77F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_988EE78A892C77F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF8C894D984131D3(::RPG::Client::AudioBundleInfoItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_DF8C894D984131D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}

	::System::Void Method_1_928CB4D70C21FDF4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_928CB4D70C21FDF4_OFFSET))(this, a1);
	}

	static ::Class_1_F077E55B6446752D* Method_1_27A27A861E1223F2(::System::String* a1)
	{
		return ((::Class_1_F077E55B6446752D*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_27A27A861E1223F2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_FF1FC0B9BC5A6660(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_FF1FC0B9BC5A6660_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_A07BA60A89C4B3F2(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_A07BA60A89C4B3F2_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_079094008F95F9BA(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83*& a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*&))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_079094008F95F9BA_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9817EAC964C453E7(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_9817EAC964C453E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_14BD16324470EC8B(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_14BD16324470EC8B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D19B9D3CFC946396(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_D19B9D3CFC946396_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_4D43507EE64F8B25(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_4D43507EE64F8B25_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_69* Method_1_D6812ED21FCF6F4E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F077E55B6446752D_METHOD_1_D6812ED21FCF6F4E_OFFSET))(this, a1);
	}
};
