#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C8EC2537CFD0A41F;
namespace RPG::Client { class PamChatData; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_803E8F9F8C8CEA76_METHOD_1_28782449C6BE9A0F_OFFSET UNITYSDK_OFFSET(0x12B02B50)
#define CLASS_1_803E8F9F8C8CEA76_METHOD_1_569EEADD59E92921_OFFSET UNITYSDK_OFFSET(0x12B02D20)
#define CLASS_1_803E8F9F8C8CEA76_METHOD_1_90FDB6A873A69E1C_OFFSET UNITYSDK_OFFSET(0x12B02980)
#define CLASS_1_803E8F9F8C8CEA76__CTOR_OFFSET UNITYSDK_OFFSET(0x12B02970)

inline static constexpr unsigned int Class_1_803E8F9F8C8CEA76_TypeDefinitionIndex = 58291;

class Class_1_803E8F9F8C8CEA76 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_90FDB6A873A69E1C(::RPG::Client::PamChatData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatData*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76_METHOD_1_90FDB6A873A69E1C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_569EEADD59E92921(::RPG::Client::PamChatData* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76_METHOD_1_569EEADD59E92921_OFFSET))(this, a1, a2);
	}

	::Class_1_C8EC2537CFD0A41F* Method_1_28782449C6BE9A0F(::RPG::Client::PamChatData* a1, ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>* a2)
	{
		return ((::Class_1_C8EC2537CFD0A41F*(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::Predicate_1<::Class_1_C8EC2537CFD0A41F*>*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76_METHOD_1_28782449C6BE9A0F_OFFSET))(this, a1, a2);
	}
};
