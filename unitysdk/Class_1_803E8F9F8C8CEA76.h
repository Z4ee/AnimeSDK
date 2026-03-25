#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F75F8CAAFB46C9E;
namespace RPG::Client { class PamChatData; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_803E8F9F8C8CEA76_METHOD_1_28782449C6BE9A0F_OFFSET UNITYSDK_OFFSET(0xE4672E0)
#define CLASS_1_803E8F9F8C8CEA76_METHOD_1_90FDB6A873A69E1C_OFFSET UNITYSDK_OFFSET(0xE467110)
#define CLASS_1_803E8F9F8C8CEA76_METHOD_1_C23D23E5EB113604_OFFSET UNITYSDK_OFFSET(0xE4674B0)
#define CLASS_1_803E8F9F8C8CEA76__CTOR_OFFSET UNITYSDK_OFFSET(0xE467100)

inline static constexpr unsigned int Class_1_803E8F9F8C8CEA76_TypeDefinitionIndex = 51356;

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

	::System::Boolean Method_1_C23D23E5EB113604(::RPG::Client::PamChatData* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76_METHOD_1_C23D23E5EB113604_OFFSET))(this, a1, a2);
	}

	::Class_1_3F75F8CAAFB46C9E* Method_1_28782449C6BE9A0F(::RPG::Client::PamChatData* a1, ::System::Predicate_1<::Class_1_3F75F8CAAFB46C9E*>* a2)
	{
		return ((::Class_1_3F75F8CAAFB46C9E*(*)(::PVOID, ::RPG::Client::PamChatData*, ::System::Predicate_1<::Class_1_3F75F8CAAFB46C9E*>*))((::PBYTE)hIl2Cpp + CLASS_1_803E8F9F8C8CEA76_METHOD_1_28782449C6BE9A0F_OFFSET))(this, a1, a2);
	}
};
