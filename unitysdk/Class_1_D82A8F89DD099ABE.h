#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D82A8F89DD099ABE_METHOD_1_5C124A71F2A2E459_OFFSET UNITYSDK_OFFSET(0x157D6220)
#define CLASS_1_D82A8F89DD099ABE_METHOD_1_5C54D5A6371F07A0_OFFSET UNITYSDK_OFFSET(0x157D6270)
#define CLASS_1_D82A8F89DD099ABE__CTOR_OFFSET UNITYSDK_OFFSET(0x157D6260)

inline static constexpr unsigned int Class_1_D82A8F89DD099ABE_TypeDefinitionIndex = 62642;

class Class_1_D82A8F89DD099ABE : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D82A8F89DD099ABE__CTOR_OFFSET))(this);
	}

	static ::Class_1_D82A8F89DD099ABE* Method_1_5C124A71F2A2E459()
	{
		return ((::Class_1_D82A8F89DD099ABE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D82A8F89DD099ABE_METHOD_1_5C124A71F2A2E459_OFFSET))();
	}

	::System::Void Method_1_5C54D5A6371F07A0(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + CLASS_1_D82A8F89DD099ABE_METHOD_1_5C54D5A6371F07A0_OFFSET))(this, a1);
	}
};
