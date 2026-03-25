#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_4F3C2014A60D7C5B_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x16BC6ED0)
#define CLASS_3_4F3C2014A60D7C5B_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x16BC6F50)
#define CLASS_3_4F3C2014A60D7C5B__CTOR_OFFSET UNITYSDK_OFFSET(0x16BC6F20)

inline static constexpr unsigned int Class_3_4F3C2014A60D7C5B_TypeDefinitionIndex = 18564;

class Class_3_4F3C2014A60D7C5B : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::System::String*>* Field_3_2; // 0x20
	::System::String* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F3C2014A60D7C5B__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4F3C2014A60D7C5B*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4F3C2014A60D7C5B*&))((::PBYTE)hIl2Cpp + CLASS_3_4F3C2014A60D7C5B_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_4F3C2014A60D7C5B* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_4F3C2014A60D7C5B*))((::PBYTE)hIl2Cpp + CLASS_3_4F3C2014A60D7C5B_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
