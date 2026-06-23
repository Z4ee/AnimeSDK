#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"
#include "unitysdk/MoleMole/HollowEntityConfig_TeamRelationship.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class HollowCampTypeConfig; }
namespace MoleMole::Config { class HollowCampTypeConfig_CampTypeItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B5D702A260F9C39_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x1267FB40)
#define CLASS_1_3B5D702A260F9C39_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x1267F930)
#define CLASS_1_3B5D702A260F9C39_METHOD_1_3E372E1A00FA0CCA_OFFSET UNITYSDK_OFFSET(0x12680630)
#define CLASS_1_3B5D702A260F9C39_METHOD_1_71C8C5D2F468D3AA_OFFSET UNITYSDK_OFFSET(0x1267FCE0)
#define CLASS_1_3B5D702A260F9C39_METHOD_1_DB52F3621E27A663_OFFSET UNITYSDK_OFFSET(0x126802F0)
#define CLASS_1_3B5D702A260F9C39_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x1267F820)
#define CLASS_1_3B5D702A260F9C39__CCTOR_OFFSET UNITYSDK_OFFSET(0x1267F7E0)

inline static constexpr unsigned int Class_1_3B5D702A260F9C39_TypeDefinitionIndex = 42055;

class Class_1_3B5D702A260F9C39 : public ::System::Object
{
public:
	static ::MoleMole::Config::HollowCampTypeConfig_CampTypeItem** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::HollowCampTypeConfig_CampTypeItem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B5D702A260F9C39_TypeDefinitionIndex)->GetStaticField(0x42230);
	}
	static ::MoleMole::Config::HollowCampTypeConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::HollowCampTypeConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3B5D702A260F9C39_TypeDefinitionIndex)->GetStaticField(0x42238);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_METHOD_1_0868EF727040C390_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::HollowEntityConfig_CampType>* Method_1_71C8C5D2F468D3AA(::MoleMole::HollowEntityConfig_CampType a1, ::MoleMole::HollowEntityConfig_TeamRelationship a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowEntityConfig_CampType>*(*)(::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_TeamRelationship))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_METHOD_1_71C8C5D2F468D3AA_OFFSET))(a1, a2);
	}

	static ::MoleMole::Config::HollowCampTypeConfig* Method_1_3E372E1A00FA0CCA()
	{
		return ((::MoleMole::Config::HollowCampTypeConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_METHOD_1_3E372E1A00FA0CCA_OFFSET))();
	}

	static ::MoleMole::HollowEntityConfig_TeamRelationship Method_1_DB52F3621E27A663(::MoleMole::HollowEntityConfig_CampType a1, ::MoleMole::HollowEntityConfig_CampType a2)
	{
		return ((::MoleMole::HollowEntityConfig_TeamRelationship(*)(::MoleMole::HollowEntityConfig_CampType, ::MoleMole::HollowEntityConfig_CampType))((::PBYTE)hIl2Cpp + CLASS_1_3B5D702A260F9C39_METHOD_1_DB52F3621E27A663_OFFSET))(a1, a2);
	}
};
