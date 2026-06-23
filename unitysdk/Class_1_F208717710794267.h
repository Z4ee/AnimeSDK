#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_0BCE4BE98C879308;
class Class_1_236FD73ABC492E3F;
class Class_1_FBA1B2B89FDBDF31;
namespace System { class String; }

#define CLASS_1_F208717710794267_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14FF2F20)
#define CLASS_1_F208717710794267_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14FF2900)
#define CLASS_1_F208717710794267_METHOD_1_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x14FF29D0)
#define CLASS_1_F208717710794267_METHOD_1_A4F18DC7833F5448_OFFSET UNITYSDK_OFFSET(0x14FF2FD0)
#define CLASS_1_F208717710794267__CTOR_OFFSET UNITYSDK_OFFSET(0x14FF32B0)

inline static constexpr unsigned int Class_1_F208717710794267_TypeDefinitionIndex = 56600;

class Class_1_F208717710794267 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_0BCE4BE98C879308*>* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::Il2CppArray<::Class_1_FBA1B2B89FDBDF31*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F208717710794267__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F208717710794267_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F208717710794267_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A4F18DC7833F5448(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F208717710794267_METHOD_1_A4F18DC7833F5448_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F208717710794267_METHOD_1_00531776927FE5B6_OFFSET))(this, a1);
	}
};
