#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/ModifierValueType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_4_47CC8AE2D161D071_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1CEE6D40)
#define CLASS_4_47CC8AE2D161D071_METHOD_4_09B2AA2E3E18F31B_OFFSET UNITYSDK_OFFSET(0x1CEE6A60)
#define CLASS_4_47CC8AE2D161D071_METHOD_4_0C2DE072D09B1F26_OFFSET UNITYSDK_OFFSET(0x1CEE6AC0)
#define CLASS_4_47CC8AE2D161D071__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE6AB0)

inline static constexpr unsigned int Class_4_47CC8AE2D161D071_TypeDefinitionIndex = 22680;

class Class_4_47CC8AE2D161D071 : public ::RPG::GameCore::SetDynamicValueBase
{
public:
	::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x18
	::RPG::GameCore::DynamicString* IFNAGLOMHBK; // 0x20
	::System::String* FHLJGDGMMHK; // 0x28
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x30
	::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x38
	::RPG::GameCore::ModifierValueType ACBKMOPHPLE; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47CC8AE2D161D071__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_09B2AA2E3E18F31B(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_47CC8AE2D161D071*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_47CC8AE2D161D071*&))((::PBYTE)hIl2Cpp + CLASS_4_47CC8AE2D161D071_METHOD_4_09B2AA2E3E18F31B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_0C2DE072D09B1F26(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_47CC8AE2D161D071* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_47CC8AE2D161D071*))((::PBYTE)hIl2Cpp + CLASS_4_47CC8AE2D161D071_METHOD_4_0C2DE072D09B1F26_OFFSET))(a1, a2);
	}

	::System::Object* GetDynamicKey()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_47CC8AE2D161D071_GETDYNAMICKEY_OFFSET))(this);
	}
};
