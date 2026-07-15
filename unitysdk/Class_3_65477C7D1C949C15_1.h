#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenFarmRelic; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65477C7D1C949C15_1_METHOD_3_3337B4DA0CB80D20_OFFSET UNITYSDK_OFFSET(0x16ECBFC0)
#define CLASS_3_65477C7D1C949C15_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16ECBE40)
#define CLASS_3_65477C7D1C949C15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECBD30)

inline static constexpr unsigned int Class_3_65477C7D1C949C15_1_TypeDefinitionIndex = 55659;

class Class_3_65477C7D1C949C15_1 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenFarmRelic*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFarmRelic* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_3337B4DA0CB80D20(::RPG::GameCore::PropComponent* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15_1_METHOD_3_3337B4DA0CB80D20_OFFSET))(this, a1, a2);
	}
};
