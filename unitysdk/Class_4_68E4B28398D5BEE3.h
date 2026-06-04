#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_68E4B28398D5BEE3_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18F9F2F0)
#define CLASS_4_68E4B28398D5BEE3_METHOD_4_8C07D9C793444934_OFFSET UNITYSDK_OFFSET(0x18F9EF00)
#define CLASS_4_68E4B28398D5BEE3_METHOD_4_F9001DC69711467A_OFFSET UNITYSDK_OFFSET(0x18F9F060)
#define CLASS_4_68E4B28398D5BEE3__CTOR_OFFSET UNITYSDK_OFFSET(0x18F9EFC0)

inline static constexpr unsigned int Class_4_68E4B28398D5BEE3_TypeDefinitionIndex = 21738;

class Class_4_68E4B28398D5BEE3 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::DynamicFloat* Field_4_0; // 0x18
	::System::String* Field_4_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_4_2; // 0x28
	::RPG::GameCore::HPDetailParamType Field_4_3; // 0x30
	::RPG::GameCore::DynamicValueContextScope Field_4_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_68E4B28398D5BEE3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_8C07D9C793444934(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_68E4B28398D5BEE3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_68E4B28398D5BEE3*&))((::PBYTE)hIl2Cpp + CLASS_4_68E4B28398D5BEE3_METHOD_4_8C07D9C793444934_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F9001DC69711467A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_68E4B28398D5BEE3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_68E4B28398D5BEE3*))((::PBYTE)hIl2Cpp + CLASS_4_68E4B28398D5BEE3_METHOD_4_F9001DC69711467A_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_68E4B28398D5BEE3_GETDYNAMICKEY_OFFSET))(this);
	}
};
