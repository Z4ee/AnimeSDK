#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AD727C737EC29C4A_METHOD_1_1C1BC85892C73CFD_OFFSET UNITYSDK_OFFSET(0xBBD44F0)
#define CLASS_1_AD727C737EC29C4A_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0xBBD4470)
#define CLASS_1_AD727C737EC29C4A__CTOR_OFFSET UNITYSDK_OFFSET(0xBBD44E0)

inline static constexpr unsigned int Class_1_AD727C737EC29C4A_TypeDefinitionIndex = 62557;

class Class_1_AD727C737EC29C4A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD727C737EC29C4A__CTOR_OFFSET))(this);
	}

	static ::Class_1_AD727C737EC29C4A* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_AD727C737EC29C4A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AD727C737EC29C4A_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}

	::System::Void Method_1_1C1BC85892C73CFD(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_AD727C737EC29C4A_METHOD_1_1C1BC85892C73CFD_OFFSET))(this, a1);
	}
};
