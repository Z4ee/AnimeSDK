#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }
namespace System { class String; }

#define CLASS_1_5249F0902D388234_GET_ISQUIZ_OFFSET UNITYSDK_OFFSET(0x10605CF0)
#define CLASS_1_5249F0902D388234_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10605AF0)
#define CLASS_1_5249F0902D388234_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x10605CA0)
#define CLASS_1_5249F0902D388234_METHOD_1_9169E2330ACFD482_OFFSET UNITYSDK_OFFSET(0x10605A50)
#define CLASS_1_5249F0902D388234_SET_ISQUIZ_OFFSET UNITYSDK_OFFSET(0x10605D00)
#define CLASS_1_5249F0902D388234_TRIGGER_OFFSET UNITYSDK_OFFSET(0x10605B30)
#define CLASS_1_5249F0902D388234__CTOR_OFFSET UNITYSDK_OFFSET(0x10605930)

inline static constexpr unsigned int Class_1_5249F0902D388234_TypeDefinitionIndex = 53838;

class Class_1_5249F0902D388234 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_5; // 0x0
	::RPG::Client::MonopolyEffectShowType Field_1_3; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::Boolean Field_1_4; // 0x18
	::System::Boolean _IsQuiz_k__BackingField; // 0x19
	::System::UInt32 Field_1_0; // 0x1C
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_9169E2330ACFD482(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234_METHOD_1_9169E2330ACFD482_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234_TRIGGER_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Boolean get_IsQuiz()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234_GET_ISQUIZ_OFFSET))(this);
	}

	::System::Void set_IsQuiz(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5249F0902D388234_SET_ISQUIZ_OFFSET))(this, value);
	}
};
