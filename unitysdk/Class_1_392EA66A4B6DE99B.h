#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameFormation; }

#define CLASS_1_392EA66A4B6DE99B_METHOD_1_23A1C55A5AA7F592_OFFSET UNITYSDK_OFFSET(0x1290CCB0)
#define CLASS_1_392EA66A4B6DE99B_METHOD_1_8AE4859AF08CAF64_OFFSET UNITYSDK_OFFSET(0x1290F2B0)
#define CLASS_1_392EA66A4B6DE99B__CTOR_OFFSET UNITYSDK_OFFSET(0x12910620)

inline static constexpr unsigned int Class_1_392EA66A4B6DE99B_TypeDefinitionIndex = 59474;

class Class_1_392EA66A4B6DE99B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xD; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_23A1C55A5AA7F592(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B_METHOD_1_23A1C55A5AA7F592_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AE4859AF08CAF64(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_392EA66A4B6DE99B_METHOD_1_8AE4859AF08CAF64_OFFSET))(this, a1, a2);
	}
};
