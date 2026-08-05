#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_10.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_AA32EAE205D9293B___C_METHOD_1_4C706B6019B13D4A_OFFSET UNITYSDK_OFFSET(0x1ACD1210)
#define CLASS_3_AA32EAE205D9293B___C_METHOD_1_7439D2F0DCA77B50_OFFSET UNITYSDK_OFFSET(0x1ACD1200)
#define CLASS_3_AA32EAE205D9293B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACD11B0)
#define CLASS_3_AA32EAE205D9293B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACD11F0)

inline static constexpr unsigned int Class_3_AA32EAE205D9293B___c_TypeDefinitionIndex = 23685;

class Class_3_AA32EAE205D9293B___c : public ::System::Object
{
public:
	static ::Class_3_AA32EAE205D9293B___c** StaticGet___9()
	{
		return (::Class_3_AA32EAE205D9293B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AA32EAE205D9293B___c_TypeDefinitionIndex)->GetStaticField(0x17EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AA32EAE205D9293B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AA32EAE205D9293B___C__CTOR_OFFSET))(this);
	}

	::Enum_3_96F6662CA3713095_10 Method_1_7439D2F0DCA77B50(::System::Int32 a1)
	{
		return ((::Enum_3_96F6662CA3713095_10(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AA32EAE205D9293B___C_METHOD_1_7439D2F0DCA77B50_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_4C706B6019B13D4A(::Enum_3_96F6662CA3713095_10 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_96F6662CA3713095_10))((::PBYTE)hIl2Cpp + CLASS_3_AA32EAE205D9293B___C_METHOD_1_4C706B6019B13D4A_OFFSET))(this, a1);
	}
};
