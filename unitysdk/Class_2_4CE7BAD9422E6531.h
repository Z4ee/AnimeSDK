#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3DE0CB1AE310543B.h"
#include "unitysdk/RPG/Client/CompilerFramework/LocationKind.h"

namespace System { class Object; }

#define CLASS_2_4CE7BAD9422E6531_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D2453D0)
#define CLASS_2_4CE7BAD9422E6531_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D245420)
#define CLASS_2_4CE7BAD9422E6531_METHOD_2_CACC9BD5AF29E635_OFFSET UNITYSDK_OFFSET(0x1D2453C0)
#define CLASS_2_4CE7BAD9422E6531__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D245470)
#define CLASS_2_4CE7BAD9422E6531__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2453B0)

inline static constexpr unsigned int Class_2_4CE7BAD9422E6531_TypeDefinitionIndex = 39445;

class Class_2_4CE7BAD9422E6531 : public ::Class_1_3DE0CB1AE310543B
{
public:
	static ::Class_1_3DE0CB1AE310543B** StaticGet_Field_2_0()
	{
		return (::Class_1_3DE0CB1AE310543B**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4CE7BAD9422E6531_TypeDefinitionIndex)->GetStaticField(0xFC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531__CCTOR_OFFSET))();
	}

	::RPG::Client::CompilerFramework::LocationKind Method_2_CACC9BD5AF29E635()
	{
		return ((::RPG::Client::CompilerFramework::LocationKind(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531_METHOD_2_CACC9BD5AF29E635_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531_GETHASHCODE_OFFSET))(this);
	}
};
