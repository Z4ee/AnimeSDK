#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_D4941C631421346F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x73D970)
#define STRUCT_2_D4941C631421346F_EQUALS_OFFSET UNITYSDK_OFFSET(0x73D8B0)
#define STRUCT_2_D4941C631421346F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x73D980)
#define STRUCT_2_D4941C631421346F_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x11DDED20)
#define STRUCT_2_D4941C631421346F_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x11DDEAF0)
#define STRUCT_2_D4941C631421346F_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x73D990)
#define STRUCT_2_D4941C631421346F_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x73DA00)
#define STRUCT_2_D4941C631421346F_METHOD_2_DDB10665A2EAC088_OFFSET UNITYSDK_OFFSET(0x11DDEBA0)
#define STRUCT_2_D4941C631421346F__CTOR_OFFSET UNITYSDK_OFFSET(0x3E9BB0)

inline static constexpr unsigned int Struct_2_D4941C631421346F_TypeDefinitionIndex = 57407;

struct alignas(8) Struct_2_D4941C631421346F
{
	::MoleMole::Config::InlevelCameraState Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20

	::System::Void _ctor(::MoleMole::Config::InlevelCameraState a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InlevelCameraState, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Equals(::Struct_2_D4941C631421346F a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_D4941C631421346F))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_D4941C631421346F a1, ::Struct_2_D4941C631421346F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D4941C631421346F, ::Struct_2_D4941C631421346F))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_DDB10665A2EAC088(::Struct_2_D4941C631421346F a1, ::Struct_2_D4941C631421346F a2)
	{
		return ((::System::Boolean(*)(::Struct_2_D4941C631421346F, ::Struct_2_D4941C631421346F))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_METHOD_2_DDB10665A2EAC088_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	static ::Struct_2_D4941C631421346F Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_D4941C631421346F(*)())((::PBYTE)hIl2Cpp + STRUCT_2_D4941C631421346F_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}
};
