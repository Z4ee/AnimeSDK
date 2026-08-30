#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE097CDA27AD83B1_Class_1_81FFAD80CEAD109D;
class SerializedWarmupPSO;
namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class WebException; }

#define CLASS_1_BE097CDA27AD83B1_METHOD_1_01F5D88CDD21CD7D_OFFSET UNITYSDK_OFFSET(0x152166E0)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_1981C2CE7A328A58_1_OFFSET UNITYSDK_OFFSET(0x15215BE0)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_1981C2CE7A328A58_OFFSET UNITYSDK_OFFSET(0x15215B50)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_604D77CEDB1D6C73_OFFSET UNITYSDK_OFFSET(0x152162A0)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_91F00D5E4D9D6B45_OFFSET UNITYSDK_OFFSET(0x15215C70)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_C801DF1C310101E9_OFFSET UNITYSDK_OFFSET(0x15215D80)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_C9723FB552523FC8_OFFSET UNITYSDK_OFFSET(0x152168A0)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_CE99EE77B329EEFB_OFFSET UNITYSDK_OFFSET(0x152169B0)
#define CLASS_1_BE097CDA27AD83B1_METHOD_1_EA0037B20EE06591_OFFSET UNITYSDK_OFFSET(0x15216B00)
#define CLASS_1_BE097CDA27AD83B1__CCTOR_OFFSET UNITYSDK_OFFSET(0x152171A0)
#define CLASS_1_BE097CDA27AD83B1__CTOR_OFFSET UNITYSDK_OFFSET(0x15217190)

inline static constexpr unsigned int Class_1_BE097CDA27AD83B1_TypeDefinitionIndex = 47865;

class Class_1_BE097CDA27AD83B1 : public ::System::Object
{
public:
	static ::System::String** StaticGet_IPGDLIEPIJA()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE097CDA27AD83B1_TypeDefinitionIndex)->GetStaticField(0x5E700);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_1981C2CE7A328A58()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_1981C2CE7A328A58_OFFSET))();
	}

	static ::System::String* Method_1_1981C2CE7A328A58_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_1981C2CE7A328A58_1_OFFSET))();
	}

	::System::Net::HttpWebResponse* Method_1_91F00D5E4D9D6B45(::System::Net::HttpWebRequest* a1)
	{
		return ((::System::Net::HttpWebResponse*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_91F00D5E4D9D6B45_OFFSET))(this, a1);
	}

	::System::Void Method_1_C801DF1C310101E9(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_C801DF1C310101E9_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::SerializedWarmupPSO*>* Method_1_CE99EE77B329EEFB(::System::String* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_CE99EE77B329EEFB_OFFSET))(this, a1, a2);
	}

	::System::Net::HttpWebRequest* Method_1_EA0037B20EE06591(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_EA0037B20EE06591_OFFSET))(this, a1, a2, a3);
	}

	::System::Net::HttpWebRequest* Method_1_604D77CEDB1D6C73(::System::String* a1, ::Class_1_BE097CDA27AD83B1_Class_1_81FFAD80CEAD109D* a2)
	{
		return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::Class_1_BE097CDA27AD83B1_Class_1_81FFAD80CEAD109D*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_604D77CEDB1D6C73_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_01F5D88CDD21CD7D(::System::Net::HttpWebResponse* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Net::HttpWebResponse*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_01F5D88CDD21CD7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9723FB552523FC8(::System::String* a1, ::System::Net::WebException* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebException*))((::PBYTE)hIl2Cpp + CLASS_1_BE097CDA27AD83B1_METHOD_1_C9723FB552523FC8_OFFSET))(this, a1, a2);
	}
};
