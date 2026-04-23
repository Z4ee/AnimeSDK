#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE00FC2B4A6D6E8C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA45CE0)
#define CLASS_1_AE00FC2B4A6D6E8C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA45D20)
#define CLASS_1_AE00FC2B4A6D6E8C___C__UPDATEASSOCIATEFINISHCONDITIONMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0xAA45D30)

inline static constexpr unsigned int Class_1_AE00FC2B4A6D6E8C___c_TypeDefinitionIndex = 52076;

class Class_1_AE00FC2B4A6D6E8C___c : public ::System::Object
{
public:
	static ::Class_1_AE00FC2B4A6D6E8C___c** StaticGet___9()
	{
		return (::Class_1_AE00FC2B4A6D6E8C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE00FC2B4A6D6E8C___c_TypeDefinitionIndex)->GetStaticField(0x63680);
	}
	static ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*>** StaticGet___9__0_0()
	{
		return (::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE00FC2B4A6D6E8C___c_TypeDefinitionIndex)->GetStaticField(0x63688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE00FC2B4A6D6E8C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE00FC2B4A6D6E8C___C__CTOR_OFFSET))(this);
	}

	::System::Void _UpdateAssociateFinishConditionMission_b__0_0(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* datas)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + CLASS_1_AE00FC2B4A6D6E8C___C__UPDATEASSOCIATEFINISHCONDITIONMISSION_B__0_0_OFFSET))(this, datas);
	}
};
