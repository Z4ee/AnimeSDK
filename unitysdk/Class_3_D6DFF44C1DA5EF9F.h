#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D6DFF44C1DA5EF9F_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x1CE9D1C0)
#define CLASS_3_D6DFF44C1DA5EF9F_METHOD_3_A6F54A9E721BB5D2_OFFSET UNITYSDK_OFFSET(0x1CE9D270)
#define CLASS_3_D6DFF44C1DA5EF9F__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9D230)

inline static constexpr unsigned int Class_3_D6DFF44C1DA5EF9F_TypeDefinitionIndex = 20829;

class Class_3_D6DFF44C1DA5EF9F : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* EGGCADJJJOD; // 0x18
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
	::System::String* PODFJDMHFMK; // 0x28
	::System::String* GFNAPNFFGPJ; // 0x30
	::System::Single LAONGKHOAPH; // 0x38

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
