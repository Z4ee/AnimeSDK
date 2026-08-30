#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_895F316EFEF2B565_11_METHOD_1_9EC05CD8054C8C05_OFFSET UNITYSDK_OFFSET(0xBD52870)
#define CLASS_1_895F316EFEF2B565_11__CTOR_OFFSET UNITYSDK_OFFSET(0xBD52930)

inline static constexpr unsigned int Class_1_895F316EFEF2B565_11_TypeDefinitionIndex = 77073;

class Class_1_895F316EFEF2B565_11 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_11__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>* Method_1_9EC05CD8054C8C05(::Class_1_A92BC063ED2379EB* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_2_B66C1067C0468FBB*>*(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_895F316EFEF2B565_11_METHOD_1_9EC05CD8054C8C05_OFFSET))(this, a1, a2);
	}
};
