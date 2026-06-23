#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B1CD45EAC8D61C61.h"

namespace System { class String; }

#define CLASS_3_586D5E5900BE715B_METHOD_3_1BB2478DBA0E0D85_OFFSET UNITYSDK_OFFSET(0x14E4F9C0)
#define CLASS_3_586D5E5900BE715B_METHOD_3_284A00008B880FD6_OFFSET UNITYSDK_OFFSET(0x14E4F970)
#define CLASS_3_586D5E5900BE715B_METHOD_3_A5181852B7719567_OFFSET UNITYSDK_OFFSET(0x14E4FBD0)
#define CLASS_3_586D5E5900BE715B_METHOD_3_DE8D974FFB2F8E0B_OFFSET UNITYSDK_OFFSET(0x14E4FAE0)
#define CLASS_3_586D5E5900BE715B__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E4FA30)
#define CLASS_3_586D5E5900BE715B__CTOR_OFFSET UNITYSDK_OFFSET(0x14E4F8F0)

inline static constexpr unsigned int Class_3_586D5E5900BE715B_TypeDefinitionIndex = 63335;

class Class_3_586D5E5900BE715B : public ::Class_2_B1CD45EAC8D61C61
{
public:
	static ::Class_3_586D5E5900BE715B** StaticGet_Field_3_0()
	{
		return (::Class_3_586D5E5900BE715B**)Il2CppClass::FromTypeDefinitionIndex(Class_3_586D5E5900BE715B_TypeDefinitionIndex)->GetStaticField(0x45980);
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

	::System::Double Method_3_DE8D974FFB2F8E0B()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_DE8D974FFB2F8E0B_OFFSET))(this);
	}

	::System::String* Method_3_A5181852B7719567()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_586D5E5900BE715B_METHOD_3_A5181852B7719567_OFFSET))(this);
	}
};
