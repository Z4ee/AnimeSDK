#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_057677D06E56E3F2_METHOD_1_821292A7294F09FC_OFFSET UNITYSDK_OFFSET(0xDB32040)
#define CLASS_2_AF0F60B7EC92FD6A_CLASS_1_057677D06E56E3F2__CTOR_OFFSET UNITYSDK_OFFSET(0xDB32030)

inline static constexpr unsigned int Class_2_AF0F60B7EC92FD6A_Class_1_057677D06E56E3F2_TypeDefinitionIndex = 43267;

class Class_2_AF0F60B7EC92FD6A_Class_1_057677D06E56E3F2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_057677D06E56E3F2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_821292A7294F09FC(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_AF0F60B7EC92FD6A_CLASS_1_057677D06E56E3F2_METHOD_1_821292A7294F09FC_OFFSET))(this, a1);
	}
};
