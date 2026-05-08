#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B1CD45EAC8D61C61.h"

namespace System { class String; }

#define CLASS_3_586D5E5900BE715B_METHOD_3_1BB2478DBA0E0D85_OFFSET UNITYSDK_OFFSET(0xF2928B0)
#define CLASS_3_586D5E5900BE715B_METHOD_3_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0xF292860)
#define CLASS_3_586D5E5900BE715B_METHOD_3_D0C27DAEEA53EF0D_OFFSET UNITYSDK_OFFSET(0xF2929D0)
#define CLASS_3_586D5E5900BE715B_METHOD_3_DE8D974FFB2F8E0B_OFFSET UNITYSDK_OFFSET(0xF2929E0)
#define CLASS_3_586D5E5900BE715B__CCTOR_OFFSET UNITYSDK_OFFSET(0xF292920)
#define CLASS_3_586D5E5900BE715B__CTOR_OFFSET UNITYSDK_OFFSET(0xF2927E0)

inline static constexpr unsigned int Class_3_586D5E5900BE715B_TypeDefinitionIndex = 64767;

class Class_3_586D5E5900BE715B : public ::Class_2_B1CD45EAC8D61C61
{
public:
	static ::Class_3_586D5E5900BE715B** StaticGet_Field_3_0()
	{
		return (::Class_3_586D5E5900BE715B**)Il2CppClass::FromTypeDefinitionIndex(Class_3_586D5E5900BE715B_TypeDefinitionIndex)->GetStaticField(0x46E20);
	}
	::System::Double Field_3_1; // 0xA0

	::System::Void _ctor(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B__CCTOR_OFFSET))();
	}

	::System::Double Method_3_284A00008B880FD6()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_284A00008B880FD6_OFFSET))(this);
	}

	::System::String* Method_3_1BB2478DBA0E0D85()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_1BB2478DBA0E0D85_OFFSET))(this);
	}

	::System::String* Method_3_D0C27DAEEA53EF0D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_D0C27DAEEA53EF0D_OFFSET))(this);
	}

	::System::Double Method_3_DE8D974FFB2F8E0B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_DE8D974FFB2F8E0B_OFFSET))(this);
	}
};
