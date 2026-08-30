#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class LocalizedText; }
namespace System { class String; }

#define CLASS_2_A0AA84147B3C1996_METHOD_2_01ED1C1F22416698_OFFSET UNITYSDK_OFFSET(0xC31D940)
#define CLASS_2_A0AA84147B3C1996__CTOR_OFFSET UNITYSDK_OFFSET(0xC31D9A0)
#define CLASS_2_A0AA84147B3C1996__ONBIND_OFFSET UNITYSDK_OFFSET(0xC31D8E0)

inline static constexpr unsigned int Class_2_A0AA84147B3C1996_TypeDefinitionIndex = 72219;

class Class_2_A0AA84147B3C1996 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* GJBENKGMEKA; // 0x0
	// static const ::System::String* INLJCPEEBJB; // 0x0
	::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0AA84147B3C1996__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0AA84147B3C1996__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_01ED1C1F22416698(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A0AA84147B3C1996_METHOD_2_01ED1C1F22416698_OFFSET))(this, a1);
	}
};
