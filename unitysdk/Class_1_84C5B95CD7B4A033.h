#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_84C5B95CD7B4A033_METHOD_1_280420BEEA6A12AD_OFFSET UNITYSDK_OFFSET(0x10E98390)
#define CLASS_1_84C5B95CD7B4A033_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10E982F0)
#define CLASS_1_84C5B95CD7B4A033__CTOR_OFFSET UNITYSDK_OFFSET(0x10E98260)

inline static constexpr unsigned int Class_1_84C5B95CD7B4A033_TypeDefinitionIndex = 48049;

class Class_1_84C5B95CD7B4A033 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::HashSet_1<::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84C5B95CD7B4A033__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84C5B95CD7B4A033_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_280420BEEA6A12AD(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_84C5B95CD7B4A033_METHOD_1_280420BEEA6A12AD_OFFSET))(this, a1, a2);
	}
};
