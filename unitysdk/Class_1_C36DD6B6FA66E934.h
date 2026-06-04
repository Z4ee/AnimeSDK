#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C36DD6B6FA66E934_EQUALS_OFFSET UNITYSDK_OFFSET(0x1911E790)
#define CLASS_1_C36DD6B6FA66E934_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1911E7A0)
#define CLASS_1_C36DD6B6FA66E934__CCTOR_OFFSET UNITYSDK_OFFSET(0x1911E7C0)
#define CLASS_1_C36DD6B6FA66E934__CTOR_OFFSET UNITYSDK_OFFSET(0x1911E7B0)

inline static constexpr unsigned int Class_1_C36DD6B6FA66E934_TypeDefinitionIndex = 10422;

class Class_1_C36DD6B6FA66E934 : public ::System::Object
{
public:
	static ::Class_1_C36DD6B6FA66E934** StaticGet_Field_1_0()
	{
		return (::Class_1_C36DD6B6FA66E934**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C36DD6B6FA66E934_TypeDefinitionIndex)->GetStaticField(0x1530);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C36DD6B6FA66E934__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C36DD6B6FA66E934__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::RPG::GameCore::CommonIndexKey a1, ::RPG::GameCore::CommonIndexKey a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + CLASS_1_C36DD6B6FA66E934_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::RPG::GameCore::CommonIndexKey a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + CLASS_1_C36DD6B6FA66E934_GETHASHCODE_OFFSET))(this, a1);
	}
};
