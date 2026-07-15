#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"

class Class_1_C962001E33AD3072;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7E288ED7136445D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x18C21AA0)
#define CLASS_1_B7E288ED7136445D_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x18C21AB0)
#define CLASS_1_B7E288ED7136445D_METHOD_1_4B067C42D3268BA2_OFFSET UNITYSDK_OFFSET(0x18C08290)
#define CLASS_1_B7E288ED7136445D_METHOD_1_587D9A36DC5A865C_OFFSET UNITYSDK_OFFSET(0x18C08200)
#define CLASS_1_B7E288ED7136445D__CTOR_OFFSET UNITYSDK_OFFSET(0x18C21AC0)

inline static constexpr unsigned int Class_1_B7E288ED7136445D_TypeDefinitionIndex = 39229;

class Class_1_B7E288ED7136445D : public ::System::Object
{
public:
	::Class_1_C962001E33AD3072* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C962001E33AD3072*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7E288ED7136445D__CTOR_OFFSET))(this);
	}

	::Class_1_C962001E33AD3072* Method_1_24748FC20F375725()
	{
		return ((::Class_1_C962001E33AD3072*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7E288ED7136445D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_C962001E33AD3072*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_C962001E33AD3072*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7E288ED7136445D_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_587D9A36DC5A865C(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::AssetState a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + CLASS_1_B7E288ED7136445D_METHOD_1_587D9A36DC5A865C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4B067C42D3268BA2(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::AssetState a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + CLASS_1_B7E288ED7136445D_METHOD_1_4B067C42D3268BA2_OFFSET))(this, a1, a2, a3);
	}
};
