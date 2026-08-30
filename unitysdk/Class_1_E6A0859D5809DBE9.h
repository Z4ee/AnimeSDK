#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E6A0859D5809DBE9_Class_1_E8F8E39EA76485CD;
class Class_1_F8E6AA28A352CA0E;
class Class_2_15E5EFF5F7DD9F31;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyleConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E6A0859D5809DBE9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FEEE70)
#define CLASS_1_E6A0859D5809DBE9_METHOD_1_C195920B6A311D4C_OFFSET UNITYSDK_OFFSET(0x18FEEF40)
#define CLASS_1_E6A0859D5809DBE9__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEED20)

inline static constexpr unsigned int Class_1_E6A0859D5809DBE9_TypeDefinitionIndex = 69242;

class Class_1_E6A0859D5809DBE9 : public ::System::Object
{
public:
	::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig* IGHAHBNLIJA; // 0x10
	::Class_1_F8E6AA28A352CA0E* FLMODBLFAGD; // 0x18
	::Il2CppArray<::Class_1_E6A0859D5809DBE9_Class_1_E8F8E39EA76485CD*>* AFDJNPHEGPP; // 0x20
	::System::Collections::Generic::List_1<::Class_1_E6A0859D5809DBE9_Class_1_E8F8E39EA76485CD*>* HEEOMILPFJK; // 0x28

	::System::Void _ctor(::Class_1_F8E6AA28A352CA0E* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F8E6AA28A352CA0E*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C195920B6A311D4C(::Class_2_15E5EFF5F7DD9F31* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_15E5EFF5F7DD9F31*))((::PBYTE)hIl2Cpp + CLASS_1_E6A0859D5809DBE9_METHOD_1_C195920B6A311D4C_OFFSET))(this, a1);
	}
};
