#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_373;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7BE0B64AF0A0B070_GET_AVATARFACTORY_OFFSET UNITYSDK_OFFSET(0x9ED55C0)
#define CLASS_1_7BE0B64AF0A0B070_METHOD_1_91C312F33E6F42AE_OFFSET UNITYSDK_OFFSET(0x9ED56A0)
#define CLASS_1_7BE0B64AF0A0B070_METHOD_1_C89B6059ED10F9AF_OFFSET UNITYSDK_OFFSET(0x9ED55E0)
#define CLASS_1_7BE0B64AF0A0B070_METHOD_1_FC33C70AF826AA44_OFFSET UNITYSDK_OFFSET(0x9ED5760)
#define CLASS_1_7BE0B64AF0A0B070_SET_AVATARFACTORY_OFFSET UNITYSDK_OFFSET(0x9ED55D0)
#define CLASS_1_7BE0B64AF0A0B070__CTOR_OFFSET UNITYSDK_OFFSET(0x9ED5920)

inline static constexpr unsigned int Class_1_7BE0B64AF0A0B070_TypeDefinitionIndex = 50840;

class Class_1_7BE0B64AF0A0B070 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_373* _AvatarFactory_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_373* get_AvatarFactory()
	{
		return ((::Class_0_16E4307DCC419505_373*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_GET_AVATARFACTORY_OFFSET))(this);
	}

	::System::Void set_AvatarFactory(::Class_0_16E4307DCC419505_373* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_373*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_SET_AVATARFACTORY_OFFSET))(this, value);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_C89B6059ED10F9AF(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_METHOD_1_C89B6059ED10F9AF_OFFSET))(this, a1);
	}

	::Class_1_090AB0EAA610410E* Method_1_91C312F33E6F42AE(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_METHOD_1_91C312F33E6F42AE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_BAC064D277DD99F1>* Method_1_FC33C70AF826AA44(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_7BE0B64AF0A0B070_METHOD_1_FC33C70AF826AA44_OFFSET))(this, a1);
	}
};
