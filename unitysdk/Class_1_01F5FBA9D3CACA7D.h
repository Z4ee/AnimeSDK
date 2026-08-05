#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_01F5FBA9D3CACA7D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x157632F0)
#define CLASS_1_01F5FBA9D3CACA7D_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x15763300)
#define CLASS_1_01F5FBA9D3CACA7D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x15763200)
#define CLASS_1_01F5FBA9D3CACA7D_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15763210)
#define CLASS_1_01F5FBA9D3CACA7D_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x15763250)
#define CLASS_1_01F5FBA9D3CACA7D__CTOR_OFFSET UNITYSDK_OFFSET(0x15763170)

inline static constexpr unsigned int Class_1_01F5FBA9D3CACA7D_TypeDefinitionIndex = 82271;

class Class_1_01F5FBA9D3CACA7D : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_01F5FBA9D3CACA7D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01F5FBA9D3CACA7D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F5FBA9D3CACA7D_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_01F5FBA9D3CACA7D_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01F5FBA9D3CACA7D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_01F5FBA9D3CACA7D_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}
};
