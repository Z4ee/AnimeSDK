#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_19E8506CB3B711CA_METHOD_1_8F31FE93874763EC_OFFSET UNITYSDK_OFFSET(0x152E67A0)
#define CLASS_1_19E8506CB3B711CA_METHOD_1_AD125F4F7EE61610_OFFSET UNITYSDK_OFFSET(0x152E6720)
#define CLASS_1_19E8506CB3B711CA__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6790)

inline static constexpr unsigned int Class_1_19E8506CB3B711CA_TypeDefinitionIndex = 62638;

class Class_1_19E8506CB3B711CA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19E8506CB3B711CA__CTOR_OFFSET))(this);
	}

	static ::Class_1_19E8506CB3B711CA* Method_1_AD125F4F7EE61610()
	{
		return ((::Class_1_19E8506CB3B711CA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_19E8506CB3B711CA_METHOD_1_AD125F4F7EE61610_OFFSET))();
	}

	::System::Void Method_1_8F31FE93874763EC(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_19E8506CB3B711CA_METHOD_1_8F31FE93874763EC_OFFSET))(this, a1);
	}
};
