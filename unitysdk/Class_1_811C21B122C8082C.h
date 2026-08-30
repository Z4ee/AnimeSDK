#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_107413F390DDC212;

#define CLASS_1_811C21B122C8082C_GET_LEVELINDEX_OFFSET UNITYSDK_OFFSET(0x1A08E4D0)
#define CLASS_1_811C21B122C8082C_GET_ROUTEENDDATA_OFFSET UNITYSDK_OFFSET(0x1A08E4E0)
#define CLASS_1_811C21B122C8082C_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0x1A08E4C0)
#define CLASS_1_811C21B122C8082C_GET_TEAMMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A08E4F0)
#define CLASS_1_811C21B122C8082C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08E500)

inline static constexpr unsigned int Class_1_811C21B122C8082C_TypeDefinitionIndex = 63939;

class Class_1_811C21B122C8082C : public ::System::Object
{
public:
	::Class_1_107413F390DDC212* _RouteEndData_k__BackingField; // 0x10
	::System::UInt32 _RouteID_k__BackingField; // 0x18
	::System::UInt32 _TeamMemberCount_k__BackingField; // 0x1C
	::System::UInt32 _LevelIndex_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Class_1_107413F390DDC212* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Class_1_107413F390DDC212*))((::PBYTE)hIl2Cpp + CLASS_1_811C21B122C8082C__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 get_RouteID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811C21B122C8082C_GET_ROUTEID_OFFSET))(this);
	}

	::System::UInt32 get_LevelIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811C21B122C8082C_GET_LEVELINDEX_OFFSET))(this);
	}

	::Class_1_107413F390DDC212* get_RouteEndData()
	{
		return ((::Class_1_107413F390DDC212*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811C21B122C8082C_GET_ROUTEENDDATA_OFFSET))(this);
	}

	::System::UInt32 get_TeamMemberCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_811C21B122C8082C_GET_TEAMMEMBERCOUNT_OFFSET))(this);
	}
};
