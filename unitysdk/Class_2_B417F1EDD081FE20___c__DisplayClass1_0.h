#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B417F1EDD081FE20___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17D0F2D0)
#define CLASS_2_B417F1EDD081FE20___C__DISPLAYCLASS1_0__ENTERIMPL_B__0_OFFSET UNITYSDK_OFFSET(0x17D0F790)

inline static constexpr unsigned int Class_2_B417F1EDD081FE20___c__DisplayClass1_0_TypeDefinitionIndex = 34737;

class Class_2_B417F1EDD081FE20___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::CakeRaceActionBase*>* actionConfigs; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B417F1EDD081FE20___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _EnterImpl_b__0(::Class_2_F3C45F1FC7349B6E* services)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_B417F1EDD081FE20___C__DISPLAYCLASS1_0__ENTERIMPL_B__0_OFFSET))(this, services);
	}
};
