#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_3_3FBBAD1B1995BBB6_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1CA73D70)
#define CLASS_3_3FBBAD1B1995BBB6_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1CA73DB0)
#define CLASS_3_3FBBAD1B1995BBB6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73DA0)

inline static constexpr unsigned int Class_3_3FBBAD1B1995BBB6_TypeDefinitionIndex = 23947;

class Class_3_3FBBAD1B1995BBB6 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* KGIDDABCHON; // 0x18
	::Il2CppArray<::RPG::GameCore::SkillType>* OOOPJAECBIN; // 0x20
	::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FBBAD1B1995BBB6__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3FBBAD1B1995BBB6*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3FBBAD1B1995BBB6*&))((::PBYTE)hIl2Cpp + CLASS_3_3FBBAD1B1995BBB6_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3FBBAD1B1995BBB6* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3FBBAD1B1995BBB6*))((::PBYTE)hIl2Cpp + CLASS_3_3FBBAD1B1995BBB6_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
