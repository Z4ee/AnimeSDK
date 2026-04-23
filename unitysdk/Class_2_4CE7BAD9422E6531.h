#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AE2EBF12D2D8D8EB.h"
#include "unitysdk/RPG/Client/CompilerFramework/LocationKind.h"

namespace System { class Object; }

#define CLASS_2_4CE7BAD9422E6531_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BD2DF0)
#define CLASS_2_4CE7BAD9422E6531_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BD2E40)
#define CLASS_2_4CE7BAD9422E6531_METHOD_2_CACC9BD5AF29E635_OFFSET UNITYSDK_OFFSET(0x17BD2DE0)
#define CLASS_2_4CE7BAD9422E6531__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BD2E90)
#define CLASS_2_4CE7BAD9422E6531__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD2DD0)
#define CLASS_2_4CE7BAD9422E6531___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x17BD2ED0)
#define CLASS_2_4CE7BAD9422E6531___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17BD2EE0)

inline static constexpr unsigned int Class_2_4CE7BAD9422E6531_TypeDefinitionIndex = 37900;

class Class_2_4CE7BAD9422E6531 : public ::Class_1_AE2EBF12D2D8D8EB
{
public:
	static ::Class_1_AE2EBF12D2D8D8EB** StaticGet_Field_2_0()
	{
		return (::Class_1_AE2EBF12D2D8D8EB**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4CE7BAD9422E6531_TypeDefinitionIndex)->GetStaticField(0x10650);
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

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4CE7BAD9422E6531___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
