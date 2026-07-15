#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D6DFF44C1DA5EF9F_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1B569E00)
#define CLASS_3_D6DFF44C1DA5EF9F_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1B569EB0)
#define CLASS_3_D6DFF44C1DA5EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1B569E70)

inline static constexpr unsigned int Class_3_D6DFF44C1DA5EF9F_TypeDefinitionIndex = 20279;

class Class_3_D6DFF44C1DA5EF9F : public ::RPG::GameCore::TaskConfig
{
public:
	::System::String* Field_3_0; // 0x18
	::Il2CppArray<::System::UInt32>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::System::Single Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D6DFF44C1DA5EF9F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D6DFF44C1DA5EF9F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D6DFF44C1DA5EF9F*&))((::PBYTE)hIl2Cpp + CLASS_3_D6DFF44C1DA5EF9F_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A6F54A9E721BB5D2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D6DFF44C1DA5EF9F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D6DFF44C1DA5EF9F*))((::PBYTE)hIl2Cpp + CLASS_3_D6DFF44C1DA5EF9F_METHOD_3_A6F54A9E721BB5D2_OFFSET))(a1, a2);
	}
};
