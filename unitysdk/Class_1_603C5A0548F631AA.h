#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0B11561D9E13149E;
class Class_1_6A49D2459F37DC4F;
namespace RPG::Client { template <typename T> class AtomicObject_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_603C5A0548F631AA_METHOD_1_09240C49BD2B3C4B_OFFSET UNITYSDK_OFFSET(0xBF62D80)
#define CLASS_1_603C5A0548F631AA_METHOD_1_270DF59DB725F7EA_OFFSET UNITYSDK_OFFSET(0xBF62E50)
#define CLASS_1_603C5A0548F631AA_METHOD_1_480A9644B5367A58_OFFSET UNITYSDK_OFFSET(0xBF62C10)
#define CLASS_1_603C5A0548F631AA_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xBF625C0)
#define CLASS_1_603C5A0548F631AA_METHOD_1_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0xBF629D0)
#define CLASS_1_603C5A0548F631AA_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBF62610)
#define CLASS_1_603C5A0548F631AA_METHOD_1_D2843274B6A07E3E_OFFSET UNITYSDK_OFFSET(0xBF62760)
#define CLASS_1_603C5A0548F631AA_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0xBF626B0)
#define CLASS_1_603C5A0548F631AA__CTOR_OFFSET UNITYSDK_OFFSET(0xBF623E0)

inline static constexpr unsigned int Class_1_603C5A0548F631AA_TypeDefinitionIndex = 59602;

class Class_1_603C5A0548F631AA : public ::System::Object
{
public:
	::System::String* FNOBOEPLIHH; // 0x10
	::System::Collections::Generic::List_1<::System::Net::IPEndPoint*>* EDALBPFJFLH; // 0x18
	::System::String* NHDJIMLEECM; // 0x20
	::System::String* CLGGLFHIFCK; // 0x28
	::Il2CppArray<::System::Byte>* DCHOFPFDBNJ; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6A49D2459F37DC4F*>* FOBNPFOCGBO; // 0x38
	::RPG::Client::AtomicObject_1<::System::Net::IPEndPoint*>* FPFAKJBEDAD; // 0x40
	::System::Collections::Generic::HashSet_1<::System::String*>* GFIHMIOGHDH; // 0x48
	::System::Int32 GMDBHJKEAEI; // 0x50
	::System::UInt32 GNDFOKOGPJC; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_6A49D2459F37DC4F* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_6A49D2459F37DC4F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::Class_1_6A49D2459F37DC4F* Method_1_D2843274B6A07E3E(::System::Net::HttpWebResponse* a1, ::System::String* a2)
	{
		return ((::Class_1_6A49D2459F37DC4F*(*)(::PVOID, ::System::Net::HttpWebResponse*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_D2843274B6A07E3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_979F687A22CC9A41(::Class_1_0B11561D9E13149E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B11561D9E13149E*))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_1_480A9644B5367A58(::Class_1_0B11561D9E13149E* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0B11561D9E13149E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_480A9644B5367A58_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_09240C49BD2B3C4B(::System::Net::IPEndPoint* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_09240C49BD2B3C4B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_270DF59DB725F7EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_270DF59DB725F7EA_OFFSET))(this, a1);
	}
};
