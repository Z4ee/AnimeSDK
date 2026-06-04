#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D;
class SerializedWarmupPSO;
namespace System { class String; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class WebException; }

#define CLASS_1_247F37B7AF671735_METHOD_1_0A0F4A90F1F3DF41_OFFSET UNITYSDK_OFFSET(0x134C9420)
#define CLASS_1_247F37B7AF671735_METHOD_1_112DC10C9A0048FC_OFFSET UNITYSDK_OFFSET(0x134C8750)
#define CLASS_1_247F37B7AF671735_METHOD_1_1981C2CE7A328A58_1_OFFSET UNITYSDK_OFFSET(0x134C86C0)
#define CLASS_1_247F37B7AF671735_METHOD_1_1981C2CE7A328A58_OFFSET UNITYSDK_OFFSET(0x134C8630)
#define CLASS_1_247F37B7AF671735_METHOD_1_2F452FB11383B174_OFFSET UNITYSDK_OFFSET(0x134C9030)
#define CLASS_1_247F37B7AF671735_METHOD_1_353A07F442FA233B_OFFSET UNITYSDK_OFFSET(0x134C8D50)
#define CLASS_1_247F37B7AF671735_METHOD_1_C801DF1C310101E9_OFFSET UNITYSDK_OFFSET(0x134C8830)
#define CLASS_1_247F37B7AF671735_METHOD_1_C9723FB552523FC8_OFFSET UNITYSDK_OFFSET(0x134C91C0)
#define CLASS_1_247F37B7AF671735_METHOD_1_CE99EE77B329EEFB_OFFSET UNITYSDK_OFFSET(0x134C92D0)
#define CLASS_1_247F37B7AF671735__CCTOR_OFFSET UNITYSDK_OFFSET(0x134C9990)
#define CLASS_1_247F37B7AF671735__CTOR_OFFSET UNITYSDK_OFFSET(0x134C9980)

inline static constexpr unsigned int Class_1_247F37B7AF671735_TypeDefinitionIndex = 44699;

class Class_1_247F37B7AF671735 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_247F37B7AF671735_TypeDefinitionIndex)->GetStaticField(0x35C10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_1981C2CE7A328A58()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_1981C2CE7A328A58_OFFSET))();
	}

	static ::System::String* Method_1_1981C2CE7A328A58_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_1981C2CE7A328A58_1_OFFSET))();
	}

	::System::Net::HttpWebResponse* Method_1_112DC10C9A0048FC(::System::Net::HttpWebRequest* a1)
	{
		return ((::System::Net::HttpWebResponse*(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_112DC10C9A0048FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_C801DF1C310101E9(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_C801DF1C310101E9_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::SerializedWarmupPSO*>* Method_1_CE99EE77B329EEFB(::System::String* a1, ::System::String* a2)
	{
		return ((::Il2CppArray<::SerializedWarmupPSO*>*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_CE99EE77B329EEFB_OFFSET))(this, a1, a2);
	}

	::System::Net::HttpWebRequest* Method_1_0A0F4A90F1F3DF41(::System::String* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_0A0F4A90F1F3DF41_OFFSET))(this, a1, a2, a3);
	}

	::System::Net::HttpWebRequest* Method_1_353A07F442FA233B(::System::String* a1, ::Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D* a2)
	{
		return ((::System::Net::HttpWebRequest*(*)(::PVOID, ::System::String*, ::Class_1_247F37B7AF671735_Class_1_81FFAD80CEAD109D*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_353A07F442FA233B_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_2F452FB11383B174(::System::Net::HttpWebResponse* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Net::HttpWebResponse*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_2F452FB11383B174_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9723FB552523FC8(::System::String* a1, ::System::Net::WebException* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Net::WebException*))((::PBYTE)hIl2Cpp + CLASS_1_247F37B7AF671735_METHOD_1_C9723FB552523FC8_OFFSET))(this, a1, a2);
	}
};
