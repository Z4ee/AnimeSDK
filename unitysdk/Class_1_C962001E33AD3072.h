#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C962001E33AD3072_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x164B5AB0)
#define CLASS_1_C962001E33AD3072_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x164B5A90)
#define CLASS_1_C962001E33AD3072_METHOD_1_71ADAF7977890E7C_OFFSET UNITYSDK_OFFSET(0x164B5AD0)
#define CLASS_1_C962001E33AD3072_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x164B5AC0)
#define CLASS_1_C962001E33AD3072_METHOD_1_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x164B5AA0)
#define CLASS_1_C962001E33AD3072_METHOD_1_9118FDD76BB41A83_OFFSET UNITYSDK_OFFSET(0x164B5AE0)
#define CLASS_1_C962001E33AD3072__CTOR_1_OFFSET UNITYSDK_OFFSET(0x164B5A80)
#define CLASS_1_C962001E33AD3072__CTOR_OFFSET UNITYSDK_OFFSET(0x164B5A70)

inline static constexpr unsigned int Class_1_C962001E33AD3072_TypeDefinitionIndex = 31968;

class Class_1_C962001E33AD3072 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::Client::AssetState Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::UInt32 a2, ::RPG::Client::AssetState a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072_METHOD_1_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::RPG::Client::AssetState Method_1_71ADAF7977890E7C()
	{
		return ((::RPG::Client::AssetState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072_METHOD_1_71ADAF7977890E7C_OFFSET))(this);
	}

	::System::Void Method_1_9118FDD76BB41A83(::RPG::Client::AssetState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AssetState))((::PBYTE)hIl2Cpp + CLASS_1_C962001E33AD3072_METHOD_1_9118FDD76BB41A83_OFFSET))(this, a1);
	}
};
