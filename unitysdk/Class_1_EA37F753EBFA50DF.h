#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EA37F753EBFA50DF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1199A0F0)
#define CLASS_1_EA37F753EBFA50DF_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x1199A170)
#define CLASS_1_EA37F753EBFA50DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1199A280)

inline static constexpr unsigned int Class_1_EA37F753EBFA50DF_TypeDefinitionIndex = 53309;

class Class_1_EA37F753EBFA50DF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA37F753EBFA50DF__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA37F753EBFA50DF_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA37F753EBFA50DF_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}
};
