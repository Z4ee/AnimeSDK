#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_FF91F13C35D7A80D_METHOD_3_2D474E626FF7B9A2_OFFSET UNITYSDK_OFFSET(0x19B7CF90)
#define CLASS_3_FF91F13C35D7A80D_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x19B7D010)
#define CLASS_3_FF91F13C35D7A80D__CTOR_OFFSET UNITYSDK_OFFSET(0x19B7CFE0)

inline static constexpr unsigned int Class_3_FF91F13C35D7A80D_TypeDefinitionIndex = 21098;

class Class_3_FF91F13C35D7A80D : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_3; // 0x30
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF91F13C35D7A80D__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2D474E626FF7B9A2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FF91F13C35D7A80D*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FF91F13C35D7A80D*&))((::PBYTE)hIl2Cpp + CLASS_3_FF91F13C35D7A80D_METHOD_3_2D474E626FF7B9A2_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FF91F13C35D7A80D* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FF91F13C35D7A80D*))((::PBYTE)hIl2Cpp + CLASS_3_FF91F13C35D7A80D_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
