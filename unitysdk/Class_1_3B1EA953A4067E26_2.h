#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C3AB8E04EBC33FFB;
namespace Entitas { class IContext; }

#define CLASS_1_3B1EA953A4067E26_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x180C7230)
#define CLASS_1_3B1EA953A4067E26_2_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x180C7280)
#define CLASS_1_3B1EA953A4067E26_2__CTOR_OFFSET UNITYSDK_OFFSET(0x180C7160)

inline static constexpr unsigned int Class_1_3B1EA953A4067E26_2_TypeDefinitionIndex = 41094;

class Class_1_3B1EA953A4067E26_2 : public ::System::Object
{
public:
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
	::Class_2_C3AB8E04EBC33FFB* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_2_CLEAR_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_2_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
