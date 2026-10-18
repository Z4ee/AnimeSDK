#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Toast { class ToastWindowQueueRequest; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }

#define CLASS_1_C240B9CE948A0D8C_METHOD_1_2A8D0F3828218E1E_1_OFFSET UNITYSDK_OFFSET(0xB53CE30)
#define CLASS_1_C240B9CE948A0D8C_METHOD_1_2A8D0F3828218E1E_OFFSET UNITYSDK_OFFSET(0xB53CD50)
#define CLASS_1_C240B9CE948A0D8C_METHOD_1_34D495A5C41624F8_OFFSET UNITYSDK_OFFSET(0xB53D130)
#define CLASS_1_C240B9CE948A0D8C_METHOD_1_9ACDEAD3EE47A820_OFFSET UNITYSDK_OFFSET(0xB53CEB0)
#define CLASS_1_C240B9CE948A0D8C_METHOD_1_C9B1A5C2559C8ED0_1_OFFSET UNITYSDK_OFFSET(0xB53CDD0)
#define CLASS_1_C240B9CE948A0D8C_METHOD_1_C9B1A5C2559C8ED0_OFFSET UNITYSDK_OFFSET(0xB53CCF0)
#define CLASS_1_C240B9CE948A0D8C_METHOD_1_EACF710F6ADE4D40_OFFSET UNITYSDK_OFFSET(0xB53D090)
#define CLASS_1_C240B9CE948A0D8C__CTOR_OFFSET UNITYSDK_OFFSET(0xB53D190)

inline static constexpr unsigned int Class_1_C240B9CE948A0D8C_TypeDefinitionIndex = 79006;

class Class_1_C240B9CE948A0D8C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C9B1A5C2559C8ED0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_C9B1A5C2559C8ED0_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A8D0F3828218E1E(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_2A8D0F3828218E1E_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9B1A5C2559C8ED0_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_C9B1A5C2559C8ED0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2A8D0F3828218E1E_1(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_2A8D0F3828218E1E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9ACDEAD3EE47A820(::Sofa::BaseSofaWindow* a1, ::System::String* a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_9ACDEAD3EE47A820_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_34D495A5C41624F8(::RPG::Client::Toast::ToastWindowQueueRequest* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Toast::ToastWindowQueueRequest*))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_34D495A5C41624F8_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_EACF710F6ADE4D40(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C240B9CE948A0D8C_METHOD_1_EACF710F6ADE4D40_OFFSET))(a1);
	}
};
