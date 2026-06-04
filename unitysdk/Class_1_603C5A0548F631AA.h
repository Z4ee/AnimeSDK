#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDAA649477B6803;
class Class_1_AAE3CF8472BB8C9A;
namespace RPG::Client { template <typename T> class AtomicObject_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_603C5A0548F631AA_METHOD_1_09240C49BD2B3C4B_OFFSET UNITYSDK_OFFSET(0xACAF830)
#define CLASS_1_603C5A0548F631AA_METHOD_1_270DF59DB725F7EA_OFFSET UNITYSDK_OFFSET(0xACAF900)
#define CLASS_1_603C5A0548F631AA_METHOD_1_480A9644B5367A58_OFFSET UNITYSDK_OFFSET(0xACAF6C0)
#define CLASS_1_603C5A0548F631AA_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xACAF070)
#define CLASS_1_603C5A0548F631AA_METHOD_1_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0xACAF480)
#define CLASS_1_603C5A0548F631AA_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xACAF0C0)
#define CLASS_1_603C5A0548F631AA_METHOD_1_D2843274B6A07E3E_OFFSET UNITYSDK_OFFSET(0xACAF210)
#define CLASS_1_603C5A0548F631AA_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0xACAF160)
#define CLASS_1_603C5A0548F631AA__CTOR_OFFSET UNITYSDK_OFFSET(0xACAEEC0)

inline static constexpr unsigned int Class_1_603C5A0548F631AA_TypeDefinitionIndex = 55722;

class Class_1_603C5A0548F631AA : public ::System::Object
{
public:
	::Il2CppArray<::System::Byte>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2CDAA649477B6803*>* Field_1_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::System::Collections::Generic::List_1<::System::Net::IPEndPoint*>* Field_1_6; // 0x40
	::RPG::Client::AtomicObject_1<::System::Net::IPEndPoint*>* Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x50
	::System::Int32 Field_1_9; // 0x54

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

	::Class_1_2CDAA649477B6803* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_2CDAA649477B6803*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::Class_1_2CDAA649477B6803* Method_1_D2843274B6A07E3E(::System::Net::HttpWebResponse* a1, ::System::String* a2)
	{
		return ((::Class_1_2CDAA649477B6803*(*)(::PVOID, ::System::Net::HttpWebResponse*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_D2843274B6A07E3E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_979F687A22CC9A41(::Class_1_AAE3CF8472BB8C9A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AAE3CF8472BB8C9A*))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_1_480A9644B5367A58(::Class_1_AAE3CF8472BB8C9A* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AAE3CF8472BB8C9A*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_603C5A0548F631AA_METHOD_1_480A9644B5367A58_OFFSET))(this, a1, a2);
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
