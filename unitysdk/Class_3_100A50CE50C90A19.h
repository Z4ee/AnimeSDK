#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_100A50CE50C90A19_METHOD_3_17D0AAA61173D944_OFFSET UNITYSDK_OFFSET(0x16C0EBC0)
#define CLASS_3_100A50CE50C90A19_METHOD_3_A68A36A6BFF9F2B4_OFFSET UNITYSDK_OFFSET(0x16C0EB40)
#define CLASS_3_100A50CE50C90A19__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0EB90)

inline static constexpr unsigned int Class_3_100A50CE50C90A19_TypeDefinitionIndex = 20287;

class Class_3_100A50CE50C90A19 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_100A50CE50C90A19__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A68A36A6BFF9F2B4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_100A50CE50C90A19*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_100A50CE50C90A19*&))((::PBYTE)hIl2Cpp + CLASS_3_100A50CE50C90A19_METHOD_3_A68A36A6BFF9F2B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_17D0AAA61173D944(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_100A50CE50C90A19* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_100A50CE50C90A19*))((::PBYTE)hIl2Cpp + CLASS_3_100A50CE50C90A19_METHOD_3_17D0AAA61173D944_OFFSET))(a1, a2);
	}
};
