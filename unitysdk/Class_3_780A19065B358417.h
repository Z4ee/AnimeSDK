#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_049053A9DCD26B56;
class Class_2_4CDC13220E4CDFEE;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_780A19065B358417_METHOD_3_2D640F07944A24EB_OFFSET UNITYSDK_OFFSET(0x18F75FC0)
#define CLASS_3_780A19065B358417_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x18F76090)
#define CLASS_3_780A19065B358417__CTOR_OFFSET UNITYSDK_OFFSET(0x18F76040)

inline static constexpr unsigned int Class_3_780A19065B358417_TypeDefinitionIndex = 19912;

class Class_3_780A19065B358417 : public ::RPG::GameCore::TaskConfig
{
public:
	::Class_2_4CDC13220E4CDFEE* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::Il2CppArray<::Class_2_049053A9DCD26B56*>* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::System::Single Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_780A19065B358417__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D640F07944A24EB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_780A19065B358417*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_780A19065B358417*&))((::PBYTE)hIl2Cpp + CLASS_3_780A19065B358417_METHOD_3_2D640F07944A24EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_780A19065B358417* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_780A19065B358417*))((::PBYTE)hIl2Cpp + CLASS_3_780A19065B358417_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
