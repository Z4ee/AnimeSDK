#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_55CC0EE55645EF46_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x1CD12850)
#define CLASS_3_55CC0EE55645EF46_METHOD_3_825AC3CA23639A85_OFFSET UNITYSDK_OFFSET(0x1CD12890)
#define CLASS_3_55CC0EE55645EF46__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD12880)

inline static constexpr unsigned int Class_3_55CC0EE55645EF46_TypeDefinitionIndex = 10191;

class Class_3_55CC0EE55645EF46 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LCGICBCPMLO; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* PAHHNMLMNLN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_55CC0EE55645EF46__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55CC0EE55645EF46*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55CC0EE55645EF46*&))((::PBYTE)hIl2Cpp + CLASS_3_55CC0EE55645EF46_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_825AC3CA23639A85(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_55CC0EE55645EF46* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_55CC0EE55645EF46*))((::PBYTE)hIl2Cpp + CLASS_3_55CC0EE55645EF46_METHOD_3_825AC3CA23639A85_OFFSET))(a1, a2);
	}
};
