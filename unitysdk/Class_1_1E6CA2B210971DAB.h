#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_68;
class Class_1_4BC7F3E0EBEF5C7F;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_1E6CA2B210971DAB_METHOD_1_04F45CEE61D0A50D_OFFSET UNITYSDK_OFFSET(0x145B1FB0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_07B2511D163B1890_OFFSET UNITYSDK_OFFSET(0x145B35B0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_21FD752D3ADE4FBF_OFFSET UNITYSDK_OFFSET(0x145B26F0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_44F8A21779603BA7_OFFSET UNITYSDK_OFFSET(0x145B22B0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_467001C52F55061A_OFFSET UNITYSDK_OFFSET(0x145B1500)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_71647ABED9BE43CC_OFFSET UNITYSDK_OFFSET(0x145B2E30)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0x145B1330)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x145B1760)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_9527268E6DE66BD3_OFFSET UNITYSDK_OFFSET(0x145B1DE0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x145B1250)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_9817EAC964C453E7_OFFSET UNITYSDK_OFFSET(0x145B1A70)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_98B889ACC475B8C7_OFFSET UNITYSDK_OFFSET(0x145B2A80)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_A913AABBB5B75EFA_OFFSET UNITYSDK_OFFSET(0x145B12A0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_C4D5882589768213_OFFSET UNITYSDK_OFFSET(0x145B3490)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_D19B9D3CFC946396_OFFSET UNITYSDK_OFFSET(0x145B3100)
#define CLASS_1_1E6CA2B210971DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x145B21F0)

inline static constexpr unsigned int Class_1_1E6CA2B210971DAB_TypeDefinitionIndex = 57222;

class Class_1_1E6CA2B210971DAB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AudioBundleInfoItem*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_68* Method_1_A913AABBB5B75EFA(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_A913AABBB5B75EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_7411494DA7276605_OFFSET))(this, a1);
	}

	::System::Void Method_1_467001C52F55061A(::RPG::Client::AudioBundleInfoItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_467001C52F55061A_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_9527268E6DE66BD3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_9527268E6DE66BD3_OFFSET))(this, a1);
	}

	static ::Class_1_1E6CA2B210971DAB* Method_1_04F45CEE61D0A50D(::System::String* a1)
	{
		return ((::Class_1_1E6CA2B210971DAB*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_04F45CEE61D0A50D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_44F8A21779603BA7(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_44F8A21779603BA7_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_21FD752D3ADE4FBF(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_21FD752D3ADE4FBF_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>* Method_1_98B889ACC475B8C7(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83*& a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4BC7F3E0EBEF5C7F*>*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*&))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_98B889ACC475B8C7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9817EAC964C453E7(::System::IO::StreamReader* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamReader*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_9817EAC964C453E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_71647ABED9BE43CC(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_71647ABED9BE43CC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_D19B9D3CFC946396(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_D19B9D3CFC946396_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_C4D5882589768213(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_C4D5882589768213_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_68* Method_1_07B2511D163B1890(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_07B2511D163B1890_OFFSET))(this, a1);
	}
};
