#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFD1B99A3262983F;
namespace MoleMole { class ServerListInfo; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EFD1B99A3262983F_CLASS_1_F7F8578473D219FC_METHOD_1_B573ADB90E61D41E_OFFSET UNITYSDK_OFFSET(0x14454040)
#define CLASS_1_EFD1B99A3262983F_CLASS_1_F7F8578473D219FC__CTOR_OFFSET UNITYSDK_OFFSET(0x14454030)

inline static constexpr unsigned int Class_1_EFD1B99A3262983F_Class_1_F7F8578473D219FC_TypeDefinitionIndex = 72178;

class Class_1_EFD1B99A3262983F_Class_1_F7F8578473D219FC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ServerListInfo*>* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::ServerListInfo*>* Field_1_2; // 0x18
	::Class_1_EFD1B99A3262983F* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_F7F8578473D219FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B573ADB90E61D41E(::MoleMole::ServerListInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ServerListInfo*))((::PBYTE)hIl2Cpp + CLASS_1_EFD1B99A3262983F_CLASS_1_F7F8578473D219FC_METHOD_1_B573ADB90E61D41E_OFFSET))(this, a1);
	}
};
