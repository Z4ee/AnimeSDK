#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define CLASS_3_DAB936A54D575657_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x1B5A7EF0)
#define CLASS_3_DAB936A54D575657_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1B5A7EB0)
#define CLASS_3_DAB936A54D575657__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5A7EE0)

inline static constexpr unsigned int Class_3_DAB936A54D575657_TypeDefinitionIndex = 20714;

class Class_3_DAB936A54D575657 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::System::Boolean Field_3_3; // 0x30
	::System::Boolean Field_3_4; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DAB936A54D575657__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DAB936A54D575657*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DAB936A54D575657*&))((::PBYTE)hIl2Cpp + CLASS_3_DAB936A54D575657_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_55F575C0E5D8F0DB(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_DAB936A54D575657* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_DAB936A54D575657*))((::PBYTE)hIl2Cpp + CLASS_3_DAB936A54D575657_METHOD_3_55F575C0E5D8F0DB_OFFSET))(a1, a2);
	}
};
