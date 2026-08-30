#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYoSDKJSON { class JSONObject; }
namespace System::Threading { class Thread; }

#define CLASS_1_3911DF0B553838C1_METHOD_1_56E076CBC69B0772_OFFSET UNITYSDK_OFFSET(0xBA55C30)
#define CLASS_1_3911DF0B553838C1_METHOD_1_93DA6293BFCF7821_OFFSET UNITYSDK_OFFSET(0xBA564A0)
#define CLASS_1_3911DF0B553838C1_METHOD_1_94063F96A3043A1A_OFFSET UNITYSDK_OFFSET(0xBA56510)
#define CLASS_1_3911DF0B553838C1_METHOD_1_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0xBA55E30)
#define CLASS_1_3911DF0B553838C1_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xBA55BE0)
#define CLASS_1_3911DF0B553838C1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA56550)

inline static constexpr unsigned int Class_1_3911DF0B553838C1_TypeDefinitionIndex = 69445;

class Class_1_3911DF0B553838C1 : public ::System::Object
{
public:
	static ::System::Threading::Thread** StaticGet_JMNAAFBIHOP()
	{
		return (::System::Threading::Thread**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3911DF0B553838C1_TypeDefinitionIndex)->GetStaticField(0x517E0);
	}
	static ::System::Int32* StaticGet_JEPIGKPBNLD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3911DF0B553838C1_TypeDefinitionIndex)->GetStaticField(0x11130);
	}
	static ::System::Boolean* StaticGet_GBKLKFDBLDH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3911DF0B553838C1_TypeDefinitionIndex)->GetStaticField(0x11134);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Boolean Method_1_56E076CBC69B0772()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_56E076CBC69B0772_OFFSET))();
	}

	static ::System::Void Method_1_D308836DB54415C3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_D308836DB54415C3_OFFSET))();
	}

	static ::System::Void Method_1_93DA6293BFCF7821(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_93DA6293BFCF7821_OFFSET))(a1);
	}

	static ::System::Void Method_1_94063F96A3043A1A(::MiHoYoSDKJSON::JSONObject*& a1)
	{
		return ((::System::Void(*)(::MiHoYoSDKJSON::JSONObject*&))((::PBYTE)hIl2Cpp + CLASS_1_3911DF0B553838C1_METHOD_1_94063F96A3043A1A_OFFSET))(a1);
	}
};
