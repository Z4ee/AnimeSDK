#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AKUTILITIES_SHORTIDGENERATOR_COMPUTE_OFFSET UNITYSDK_OFFSET(0x18C30920)
#define AKUTILITIES_SHORTIDGENERATOR_GET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x18C32F90)
#define AKUTILITIES_SHORTIDGENERATOR_SET_HASHSIZE_OFFSET UNITYSDK_OFFSET(0x18C32F20)
#define AKUTILITIES_SHORTIDGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C32E10)
#define AKUTILITIES_SHORTIDGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18C33110)

inline static constexpr unsigned int AkUtilities_ShortIDGenerator_TypeDefinitionIndex = 34589;

class AkUtilities_ShortIDGenerator : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_s_mask()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AkUtilities_ShortIDGenerator_TypeDefinitionIndex)->GetStaticField(0x10400);
	}
	static ::System::Byte* StaticGet_s_hashSize()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AkUtilities_ShortIDGenerator_TypeDefinitionIndex)->GetStaticField(0x10404);
	}
	// static const ::System::UInt32 s_prime32 = 0x1000193; // 0x0
	// static const ::System::UInt32 s_offsetBasis32 = 0x811C9DC5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR__CTOR_OFFSET))(this);
	}

	static ::System::Byte get_HashSize()
	{
		return ((::System::Byte(*)())((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_GET_HASHSIZE_OFFSET))();
	}

	static ::System::Void set_HashSize(::System::Byte value)
	{
		return ((::System::Void(*)(::System::Byte))((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_SET_HASHSIZE_OFFSET))(value);
	}

	static ::System::UInt32 Compute(::System::String* in_name)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + AKUTILITIES_SHORTIDGENERATOR_COMPUTE_OFFSET))(in_name);
	}
};
