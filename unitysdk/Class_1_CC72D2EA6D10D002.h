#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_68;
class Class_1_74F732AB6D78C9D0;
namespace System { class String; }

#define CLASS_1_CC72D2EA6D10D002_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1890F440)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_10F7353C06A07A9E_OFFSET UNITYSDK_OFFSET(0x1890F680)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_756C8A92A12F087D_OFFSET UNITYSDK_OFFSET(0x1890F7C0)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_878556FC6F1696FA_OFFSET UNITYSDK_OFFSET(0x1890FA20)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1890F490)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_D4247158591FA721_OFFSET UNITYSDK_OFFSET(0x1890F550)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_E0649D9261FACA8C_OFFSET UNITYSDK_OFFSET(0x1890F4E0)
#define CLASS_1_CC72D2EA6D10D002_METHOD_1_FAE13D415283F1B0_OFFSET UNITYSDK_OFFSET(0x1890F9A0)
#define CLASS_1_CC72D2EA6D10D002__CTOR_OFFSET UNITYSDK_OFFSET(0x18901380)

inline static constexpr unsigned int Class_1_CC72D2EA6D10D002_TypeDefinitionIndex = 38548;

class Class_1_CC72D2EA6D10D002 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_74F732AB6D78C9D0*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_68* Method_1_E0649D9261FACA8C(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_E0649D9261FACA8C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D4247158591FA721(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_D4247158591FA721_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_68* Method_1_10F7353C06A07A9E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_68*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_10F7353C06A07A9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_756C8A92A12F087D(::System::String* a1, ::RPG::Client::ByteHash16 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_756C8A92A12F087D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FAE13D415283F1B0(::System::String* a1, ::RPG::Client::ByteHash16 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_FAE13D415283F1B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_878556FC6F1696FA(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC72D2EA6D10D002_METHOD_1_878556FC6F1696FA_OFFSET))(this, a1, a2, a3, a4);
	}
};
