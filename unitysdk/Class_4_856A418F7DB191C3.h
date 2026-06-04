#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ElationPointReadType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_856A418F7DB191C3_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x19791290)
#define CLASS_4_856A418F7DB191C3_METHOD_4_B7FA72CFA6BF5CE4_OFFSET UNITYSDK_OFFSET(0x197910E0)
#define CLASS_4_856A418F7DB191C3_METHOD_4_CB465EAED8BA1FD8_OFFSET UNITYSDK_OFFSET(0x19791010)
#define CLASS_4_856A418F7DB191C3__CTOR_OFFSET UNITYSDK_OFFSET(0x19791090)

inline static constexpr unsigned int Class_4_856A418F7DB191C3_TypeDefinitionIndex = 21542;

class Class_4_856A418F7DB191C3 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::System::String* Field_4_0; // 0x18
	::RPG::GameCore::DynamicValueContextScope Field_4_1; // 0x20
	::RPG::GameCore::ElationPointReadType Field_4_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_856A418F7DB191C3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_CB465EAED8BA1FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_856A418F7DB191C3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_856A418F7DB191C3*&))((::PBYTE)hIl2Cpp + CLASS_4_856A418F7DB191C3_METHOD_4_CB465EAED8BA1FD8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B7FA72CFA6BF5CE4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_856A418F7DB191C3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_856A418F7DB191C3*))((::PBYTE)hIl2Cpp + CLASS_4_856A418F7DB191C3_METHOD_4_B7FA72CFA6BF5CE4_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_856A418F7DB191C3_GETDYNAMICKEY_OFFSET))(this);
	}
};
