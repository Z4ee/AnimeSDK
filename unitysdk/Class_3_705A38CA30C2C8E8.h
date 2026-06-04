#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_705A38CA30C2C8E8_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x193848E0)
#define CLASS_3_705A38CA30C2C8E8_METHOD_3_C4B16F32CD808E01_OFFSET UNITYSDK_OFFSET(0x19384980)
#define CLASS_3_705A38CA30C2C8E8__CTOR_OFFSET UNITYSDK_OFFSET(0x19384940)

inline static constexpr unsigned int Class_3_705A38CA30C2C8E8_TypeDefinitionIndex = 21159;

class Class_3_705A38CA30C2C8E8 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x20
	::System::Boolean Field_3_2; // 0x21
	::RPG::MVector3 Field_3_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_705A38CA30C2C8E8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_705A38CA30C2C8E8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_705A38CA30C2C8E8*&))((::PBYTE)hIl2Cpp + CLASS_3_705A38CA30C2C8E8_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C4B16F32CD808E01(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_705A38CA30C2C8E8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_705A38CA30C2C8E8*))((::PBYTE)hIl2Cpp + CLASS_3_705A38CA30C2C8E8_METHOD_3_C4B16F32CD808E01_OFFSET))(a1, a2);
	}
};
