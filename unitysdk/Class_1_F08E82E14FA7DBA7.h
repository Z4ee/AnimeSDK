#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_F08E82E14FA7DBA7_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16131CC0)
#define CLASS_1_F08E82E14FA7DBA7_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16131660)
#define CLASS_1_F08E82E14FA7DBA7_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x161316E0)
#define CLASS_1_F08E82E14FA7DBA7_METHOD_1_8FF96CDDF39B2A01_OFFSET UNITYSDK_OFFSET(0x16131D20)
#define CLASS_1_F08E82E14FA7DBA7__CTOR_OFFSET UNITYSDK_OFFSET(0x16132030)

inline static constexpr unsigned int Class_1_F08E82E14FA7DBA7_TypeDefinitionIndex = 58205;

class Class_1_F08E82E14FA7DBA7 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::MoleMole::Config::AnimatorHitEffect Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Single Field_1_3; // 0x20

	::System::Void _ctor(::System::Single a1, ::System::String* a2, ::MoleMole::Config::AnimatorHitEffect a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::MoleMole::Config::AnimatorHitEffect, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F08E82E14FA7DBA7__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F08E82E14FA7DBA7_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F08E82E14FA7DBA7_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8FF96CDDF39B2A01(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F08E82E14FA7DBA7_METHOD_1_8FF96CDDF39B2A01_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F08E82E14FA7DBA7_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}
};
