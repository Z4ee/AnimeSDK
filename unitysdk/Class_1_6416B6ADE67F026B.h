#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_804;
namespace RPG::GameCore { class GridFightGetGridEmptySlotParam; }
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace System { class String; }

#define CLASS_1_6416B6ADE67F026B_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16072080)
#define CLASS_1_6416B6ADE67F026B_METHOD_1_38D0D0EC35C420EE_OFFSET UNITYSDK_OFFSET(0x16072C00)
#define CLASS_1_6416B6ADE67F026B_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x16071FB0)
#define CLASS_1_6416B6ADE67F026B_METHOD_1_681F53CF30AFA5CE_OFFSET UNITYSDK_OFFSET(0x16072150)
#define CLASS_1_6416B6ADE67F026B_METHOD_1_6F593D31FED033C6_OFFSET UNITYSDK_OFFSET(0x160723B0)
#define CLASS_1_6416B6ADE67F026B_METHOD_1_BC0EE4A8BF209F9A_OFFSET UNITYSDK_OFFSET(0x16072270)
#define CLASS_1_6416B6ADE67F026B__CTOR_OFFSET UNITYSDK_OFFSET(0x16072EC0)

inline static constexpr unsigned int Class_1_6416B6ADE67F026B_TypeDefinitionIndex = 62580;

class Class_1_6416B6ADE67F026B : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0xF423F; // 0x0
	::Class_0_16E4307DCC419505_804* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_804* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::String* Method_1_681F53CF30AFA5CE(::RPG::GameCore::TutorialDynamicParamBase* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B_METHOD_1_681F53CF30AFA5CE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_BC0EE4A8BF209F9A(::RPG::GameCore::GridFightGetGridEmptySlotParam* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightGetGridEmptySlotParam*))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B_METHOD_1_BC0EE4A8BF209F9A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_38D0D0EC35C420EE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B_METHOD_1_38D0D0EC35C420EE_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_6F593D31FED033C6(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::GridFightRegion>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::GridFightRegion>*))((::PBYTE)hIl2Cpp + CLASS_1_6416B6ADE67F026B_METHOD_1_6F593D31FED033C6_OFFSET))(this, a1, a2);
	}
};
