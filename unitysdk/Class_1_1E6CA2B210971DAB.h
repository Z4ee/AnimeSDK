#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_87;
class Class_1_714EC10B569D81C0;
class Class_1_F0F5FC8CD22F7E83;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class StreamReader; }

#define CLASS_1_1E6CA2B210971DAB_METHOD_1_21FD752D3ADE4FBF_OFFSET UNITYSDK_OFFSET(0x11617090)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_26C7FF565EB3FF7B_OFFSET UNITYSDK_OFFSET(0x11616A10)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_44F8A21779603BA7_OFFSET UNITYSDK_OFFSET(0x11616C80)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_467001C52F55061A_OFFSET UNITYSDK_OFFSET(0x11615E30)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_71647ABED9BE43CC_OFFSET UNITYSDK_OFFSET(0x116177D0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x11616090)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_7411494DA7276605_OFFSET UNITYSDK_OFFSET(0x11615C60)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_9527268E6DE66BD3_OFFSET UNITYSDK_OFFSET(0x11616870)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x11615B80)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_9817EAC964C453E7_OFFSET UNITYSDK_OFFSET(0x11616430)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_98B889ACC475B8C7_OFFSET UNITYSDK_OFFSET(0x11617420)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_A913AABBB5B75EFA_OFFSET UNITYSDK_OFFSET(0x11615BD0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_D19B9D3CFC946396_OFFSET UNITYSDK_OFFSET(0x11617AC0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_D7C3DF2CE9DAA4D7_OFFSET UNITYSDK_OFFSET(0x11617FD0)
#define CLASS_1_1E6CA2B210971DAB_METHOD_1_ED8E7BD8BDD8770A_OFFSET UNITYSDK_OFFSET(0x11617E90)
#define CLASS_1_1E6CA2B210971DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x11616BC0)

inline static constexpr unsigned int Class_1_1E6CA2B210971DAB_TypeDefinitionIndex = 58480;

class Class_1_1E6CA2B210971DAB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::AudioBundleInfoItem*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::AudioBundleInfoItem*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_87* Method_1_A913AABBB5B75EFA(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_87*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_A913AABBB5B75EFA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7411494DA7276605(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_7411494DA7276605_OFFSET))(this, a1);
	}

	::System::Void Method_1_467001C52F55061A(::RPG::Client::AudioBundleInfoItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_467001C52F55061A_OFFSET))(this, a1);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_1_9527268E6DE66BD3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_9527268E6DE66BD3_OFFSET))(this, a1);
	}

	static ::Class_1_1E6CA2B210971DAB* Method_1_26C7FF565EB3FF7B(::System::String* a1)
	{
		return ((::Class_1_1E6CA2B210971DAB*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_26C7FF565EB3FF7B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>* Method_1_44F8A21779603BA7(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_44F8A21779603BA7_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>* Method_1_21FD752D3ADE4FBF(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_21FD752D3ADE4FBF_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>* Method_1_98B889ACC475B8C7(::System::String* a1, ::Class_1_F0F5FC8CD22F7E83*& a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_714EC10B569D81C0*>*(*)(::System::String*, ::Class_1_F0F5FC8CD22F7E83*&))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_98B889ACC475B8C7_OFFSET))(a1, a2);
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

	::System::Boolean Method_1_ED8E7BD8BDD8770A(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_ED8E7BD8BDD8770A_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_0_16E4307DCC419505_87* Method_1_D7C3DF2CE9DAA4D7(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_87*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E6CA2B210971DAB_METHOD_1_D7C3DF2CE9DAA4D7_OFFSET))(this, a1);
	}
};
