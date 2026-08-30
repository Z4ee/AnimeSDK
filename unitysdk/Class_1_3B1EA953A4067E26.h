#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FB9CF047C8AEAA83;
namespace Entitas { class IContext; }

#define CLASS_1_3B1EA953A4067E26_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BA9EC40)
#define CLASS_1_3B1EA953A4067E26_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1BA9EC90)
#define CLASS_1_3B1EA953A4067E26__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9EB70)

inline static constexpr unsigned int Class_1_3B1EA953A4067E26_TypeDefinitionIndex = 40341;

class Class_1_3B1EA953A4067E26 : public ::System::Object
{
public:
	::Class_2_FB9CF047C8AEAA83* MFAEJFFLEHM; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_CLEAR_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B1EA953A4067E26_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
