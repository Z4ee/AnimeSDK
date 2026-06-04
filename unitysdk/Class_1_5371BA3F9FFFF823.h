#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
namespace RPG::GameCore { class ChimeraDuelAreSelectionsEqualPredicate; }
namespace RPG::GameCore { class ChimeraDuelAttributeComparePredicate; }
namespace RPG::GameCore { class ChimeraDuelPredicateBase; }
namespace RPG::GameCore { class ChimeraDuelValueComparePredicate; }

#define CLASS_1_5371BA3F9FFFF823_METHOD_1_0785C16674E9B873_OFFSET UNITYSDK_OFFSET(0x136E52B0)
#define CLASS_1_5371BA3F9FFFF823_METHOD_1_7E57E768FCCBDD62_OFFSET UNITYSDK_OFFSET(0x136E4A90)
#define CLASS_1_5371BA3F9FFFF823_METHOD_1_A7088C98B83C4065_OFFSET UNITYSDK_OFFSET(0x136E4BF0)
#define CLASS_1_5371BA3F9FFFF823_METHOD_1_F95E2A8DD939BDCC_OFFSET UNITYSDK_OFFSET(0x136E4D50)
#define CLASS_1_5371BA3F9FFFF823__CTOR_OFFSET UNITYSDK_OFFSET(0x136E4A80)

inline static constexpr unsigned int Class_1_5371BA3F9FFFF823_TypeDefinitionIndex = 72094;

class Class_1_5371BA3F9FFFF823 : public ::System::Object
{
public:
	::Class_1_A92BC063ED2379EB* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_A92BC063ED2379EB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A92BC063ED2379EB*))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7E57E768FCCBDD62(::RPG::GameCore::ChimeraDuelPredicateBase* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelPredicateBase*))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823_METHOD_1_7E57E768FCCBDD62_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A7088C98B83C4065(::RPG::GameCore::ChimeraDuelValueComparePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelValueComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823_METHOD_1_A7088C98B83C4065_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F95E2A8DD939BDCC(::RPG::GameCore::ChimeraDuelAttributeComparePredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAttributeComparePredicate*))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823_METHOD_1_F95E2A8DD939BDCC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0785C16674E9B873(::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelAreSelectionsEqualPredicate*))((::PBYTE)hIl2Cpp + CLASS_1_5371BA3F9FFFF823_METHOD_1_0785C16674E9B873_OFFSET))(this, a1);
	}
};
