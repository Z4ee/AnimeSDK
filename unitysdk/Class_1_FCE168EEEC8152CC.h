#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6A49D2459F37DC4F;
class Class_1_E40337C55D87F197;
namespace RPG::Client { template <typename T> class AtomicObject_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class IPEndPoint; }

#define CLASS_1_FCE168EEEC8152CC_METHOD_1_09240C49BD2B3C4B_OFFSET UNITYSDK_OFFSET(0x1687AA90)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_270DF59DB725F7EA_OFFSET UNITYSDK_OFFSET(0x1687AB60)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_3F7A5CB67EB7A185_OFFSET UNITYSDK_OFFSET(0x1687A440)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_480A9644B5367A58_OFFSET UNITYSDK_OFFSET(0x1687A920)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1687A2A0)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_979F687A22CC9A41_OFFSET UNITYSDK_OFFSET(0x1687A6E0)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1687A2F0)
#define CLASS_1_FCE168EEEC8152CC_METHOD_1_E681B6D41E5607D0_OFFSET UNITYSDK_OFFSET(0x1687A390)
#define CLASS_1_FCE168EEEC8152CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1687A0C0)

inline static constexpr unsigned int Class_1_FCE168EEEC8152CC_TypeDefinitionIndex = 59747;

class Class_1_FCE168EEEC8152CC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_6A49D2459F37DC4F*>* FOBNPFOCGBO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* GFIHMIOGHDH; // 0x18
	::System::String* FNOBOEPLIHH; // 0x20
	::System::String* CLGGLFHIFCK; // 0x28
	::Il2CppArray<::System::Byte>* DCHOFPFDBNJ; // 0x30
	::System::String* NHDJIMLEECM; // 0x38
	::RPG::Client::AtomicObject_1<::System::Net::IPEndPoint*>* FPFAKJBEDAD; // 0x40
	::System::Collections::Generic::List_1<::System::Net::IPEndPoint*>* EDALBPFJFLH; // 0x48
	::System::UInt32 GNDFOKOGPJC; // 0x50
	::System::Int32 GMDBHJKEAEI; // 0x54

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::Class_1_6A49D2459F37DC4F* Method_1_E681B6D41E5607D0()
	{
		return ((::Class_1_6A49D2459F37DC4F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_E681B6D41E5607D0_OFFSET))(this);
	}

	::Class_1_6A49D2459F37DC4F* Method_1_3F7A5CB67EB7A185(::System::Net::HttpWebResponse* a1, ::System::String* a2)
	{
		return ((::Class_1_6A49D2459F37DC4F*(*)(::PVOID, ::System::Net::HttpWebResponse*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_3F7A5CB67EB7A185_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_979F687A22CC9A41(::Class_1_E40337C55D87F197* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E40337C55D87F197*))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_979F687A22CC9A41_OFFSET))(this, a1);
	}

	::System::Void Method_1_480A9644B5367A58(::Class_1_E40337C55D87F197* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E40337C55D87F197*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_480A9644B5367A58_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_09240C49BD2B3C4B(::System::Net::IPEndPoint* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_09240C49BD2B3C4B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_270DF59DB725F7EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FCE168EEEC8152CC_METHOD_1_270DF59DB725F7EA_OFFSET))(this, a1);
	}
};
