#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_313BCD43C940284F;
class Class_1_5464C2ADC0821D7E;
class Class_1_CC72D2EA6D10D002;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_EBB6432234A39934_METHOD_1_77D0D0A1E9F36A34_OFFSET UNITYSDK_OFFSET(0x1C4AA460)
#define CLASS_1_EBB6432234A39934_METHOD_1_FA1FD849F68CAF57_OFFSET UNITYSDK_OFFSET(0x1C4AAB60)
#define CLASS_1_EBB6432234A39934__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ABDF0)

inline static constexpr unsigned int Class_1_EBB6432234A39934_TypeDefinitionIndex = 41524;

class Class_1_EBB6432234A39934 : public ::System::Object
{
public:
	// static const ::System::UInt16 ABNPHONMCEP = 0x1; // 0x0
	// static const ::System::String* GJPNNCFPMGK; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB6432234A39934__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_77D0D0A1E9F36A34(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_313BCD43C940284F*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_313BCD43C940284F*>*))((::PBYTE)hIl2Cpp + CLASS_1_EBB6432234A39934_METHOD_1_77D0D0A1E9F36A34_OFFSET))(a1, a2);
	}

	static ::Class_1_CC72D2EA6D10D002* Method_1_FA1FD849F68CAF57(::Class_1_5464C2ADC0821D7E* a1, ::Class_1_1B9BBF1B9A8CC806* a2)
	{
		return ((::Class_1_CC72D2EA6D10D002*(*)(::Class_1_5464C2ADC0821D7E*, ::Class_1_1B9BBF1B9A8CC806*))((::PBYTE)hIl2Cpp + CLASS_1_EBB6432234A39934_METHOD_1_FA1FD849F68CAF57_OFFSET))(a1, a2);
	}
};
