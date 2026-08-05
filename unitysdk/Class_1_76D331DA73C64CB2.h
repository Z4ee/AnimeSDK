#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_76D331DA73C64CB2_METHOD_1_C4533278489E08D3_OFFSET UNITYSDK_OFFSET(0x1252EC70)
#define CLASS_1_76D331DA73C64CB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1252EE60)
#define CLASS_1_76D331DA73C64CB2__CTOR_OFFSET UNITYSDK_OFFSET(0x1252EE50)

inline static constexpr unsigned int Class_1_76D331DA73C64CB2_TypeDefinitionIndex = 72215;

class Class_1_76D331DA73C64CB2 : public ::System::Object
{
public:
	static ::Class_1_76D331DA73C64CB2** StaticGet_Field_1_0()
	{
		return (::Class_1_76D331DA73C64CB2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_76D331DA73C64CB2_TypeDefinitionIndex)->GetStaticField(0x446B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76D331DA73C64CB2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_76D331DA73C64CB2__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_C4533278489E08D3(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_76D331DA73C64CB2_METHOD_1_C4533278489E08D3_OFFSET))(this, a1);
	}
};
