#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F949FB82A9B0DFD;
class Class_2_4EEAD21E873B5A41;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF190A0)
#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_B__1_OFFSET UNITYSDK_OFFSET(0xBF1B010)
#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_B__2_OFFSET UNITYSDK_OFFSET(0xBF1AD50)
#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_B__3_OFFSET UNITYSDK_OFFSET(0xBF1ADE0)
#define CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_G__GETHIERARCHYDEPTH_0_OFFSET UNITYSDK_OFFSET(0xBF1AE10)

inline static constexpr unsigned int Class_2_4EEAD21E873B5A41___c__DisplayClass55_0_TypeDefinitionIndex = 60516;

class Class_2_4EEAD21E873B5A41___c__DisplayClass55_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* hierarchyDepthCache; // 0x10
	::Class_1_5F949FB82A9B0DFD* entityLoadingContextData; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* configByEntityID; // 0x20
	::System::Action_1<::RPG::GameCore::LittleGameEntityConfig*>* __9__2; // 0x28
	::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean>* __9__3; // 0x30
	::Class_2_4EEAD21E873B5A41* __4__this; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Void __BuildEntities_b__2(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_B__2_OFFSET))(this, a1);
	}

	::System::Boolean __BuildEntities_b__3(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_B__3_OFFSET))(this, a1);
	}

	::System::Int32 __BuildEntities_g__GetHierarchyDepth_0(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_G__GETHIERARCHYDEPTH_0_OFFSET))(this, a1);
	}

	::System::Int32 __BuildEntities_b__1(::RPG::GameCore::LittleGameEntityConfig* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4EEAD21E873B5A41___C__DISPLAYCLASS55_0___BUILDENTITIES_B__1_OFFSET))(this, a1, a2);
	}
};
