#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define CLASS_3_DAB936A54D575657_METHOD_3_55F575C0E5D8F0DB_OFFSET UNITYSDK_OFFSET(0x1CFABE20)
#define CLASS_3_DAB936A54D575657_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x1CFABDE0)
#define CLASS_3_DAB936A54D575657__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFABE10)

inline static constexpr unsigned int Class_3_DAB936A54D575657_TypeDefinitionIndex = 21270;

class Class_3_DAB936A54D575657 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* MAONBNHOPBJ; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* KAKEMNLIPIH; // 0x20
	::RPG::GameCore::ChenLingFesTargetConfig* PNMNKFNNKEI; // 0x28
	::System::Boolean ALJKBHGDOEK; // 0x30
	::System::Boolean IMMHPCNFCCG; // 0x31

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
