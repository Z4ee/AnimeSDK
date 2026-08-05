#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;

#define CLASS_1_DEC22C88D6FE3554_METHOD_1_18A1930420FDBF95_OFFSET UNITYSDK_OFFSET(0xECD1F30)
#define CLASS_1_DEC22C88D6FE3554_METHOD_1_A8D8337584A2267A_OFFSET UNITYSDK_OFFSET(0xECD1D70)
#define CLASS_1_DEC22C88D6FE3554__CCTOR_OFFSET UNITYSDK_OFFSET(0xECD1EF0)
#define CLASS_1_DEC22C88D6FE3554__CTOR_OFFSET UNITYSDK_OFFSET(0xECD1EE0)

inline static constexpr unsigned int Class_1_DEC22C88D6FE3554_TypeDefinitionIndex = 44326;

class Class_1_DEC22C88D6FE3554 : public ::System::Object
{
public:
	static ::Class_1_DEC22C88D6FE3554** StaticGet_Field_1_0()
	{
		return (::Class_1_DEC22C88D6FE3554**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEC22C88D6FE3554_TypeDefinitionIndex)->GetStaticField(0x4E250);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC22C88D6FE3554__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEC22C88D6FE3554__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_A8D8337584A2267A(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_DEC22C88D6FE3554_METHOD_1_A8D8337584A2267A_OFFSET))(this, a1);
	}

	::Class_3_C93CC3D2C2AC4067* Method_1_18A1930420FDBF95()
	{
		return ((::Class_3_C93CC3D2C2AC4067*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC22C88D6FE3554_METHOD_1_18A1930420FDBF95_OFFSET))(this);
	}
};
