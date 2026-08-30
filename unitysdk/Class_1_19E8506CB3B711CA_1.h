#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19E8506CB3B711CA_1_METHOD_1_5C124A71F2A2E459_OFFSET UNITYSDK_OFFSET(0x17A96970)
#define CLASS_1_19E8506CB3B711CA_1_METHOD_1_8F31FE93874763EC_OFFSET UNITYSDK_OFFSET(0x17A969C0)
#define CLASS_1_19E8506CB3B711CA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A969B0)

inline static constexpr unsigned int Class_1_19E8506CB3B711CA_1_TypeDefinitionIndex = 62639;

class Class_1_19E8506CB3B711CA_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19E8506CB3B711CA_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_19E8506CB3B711CA_1* Method_1_5C124A71F2A2E459()
	{
		return ((::Class_1_19E8506CB3B711CA_1*(*)())((::PBYTE)hIl2Cpp + CLASS_1_19E8506CB3B711CA_1_METHOD_1_5C124A71F2A2E459_OFFSET))();
	}

	::System::Void Method_1_8F31FE93874763EC(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_19E8506CB3B711CA_1_METHOD_1_8F31FE93874763EC_OFFSET))(this, a1);
	}
};
