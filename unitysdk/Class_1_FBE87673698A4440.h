#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_77D02A7DE467F6F0.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
namespace System { class String; }

#define CLASS_1_FBE87673698A4440_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x167ADF70)
#define CLASS_1_FBE87673698A4440_EQUALS_OFFSET UNITYSDK_OFFSET(0x167ADEF0)
#define CLASS_1_FBE87673698A4440_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x167AE3C0)
#define CLASS_1_FBE87673698A4440_FROMFLX_OFFSET UNITYSDK_OFFSET(0x167AE170)
#define CLASS_1_FBE87673698A4440_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x167AE0A0)
#define CLASS_1_FBE87673698A4440_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x167AE420)
#define CLASS_1_FBE87673698A4440_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x167AE1F0)
#define CLASS_1_FBE87673698A4440_METHOD_1_8E1C7DD346842298_OFFSET UNITYSDK_OFFSET(0x167AE5C0)
#define CLASS_1_FBE87673698A4440_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x167AE6E0)
#define CLASS_1_FBE87673698A4440_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x167AE6F0)
#define CLASS_1_FBE87673698A4440__CTOR_OFFSET UNITYSDK_OFFSET(0x167AE5B0)

inline static constexpr unsigned int Class_1_FBE87673698A4440_TypeDefinitionIndex = 76991;

class Class_1_FBE87673698A4440 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_FBE87673698A4440* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FBE87673698A4440*))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::Struct_2_77D02A7DE467F6F0 Method_1_8E1C7DD346842298(::MoleMole::EntityHandle a1, ::Class_2_14986121AA61AD99* a2)
	{
		return ((::Struct_2_77D02A7DE467F6F0(*)(::PVOID, ::MoleMole::EntityHandle, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_METHOD_1_8E1C7DD346842298_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_FBE87673698A4440_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}
};
