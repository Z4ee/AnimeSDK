#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2B2547BD1ECDA4D6;
namespace Entitas { class IContext; }

#define CLASS_1_3B1EA953A4067E26_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C149B0)
#define CLASS_1_3B1EA953A4067E26_1_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x18C14A00)
#define CLASS_1_3B1EA953A4067E26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C148E0)

inline static constexpr unsigned int Class_1_3B1EA953A4067E26_1_TypeDefinitionIndex = 38713;

class Class_1_3B1EA953A4067E26_1 : public ::System::Object
{
public:
	::Class_2_2B2547BD1ECDA4D6* Field_1_0; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_1_CLEAR_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_1_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
