#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09388B68BBD5FF59;
namespace RPG::GameCore { class MiddleMissionPackConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B302648C6979F380_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1882A160)
#define CLASS_1_B302648C6979F380_METHOD_1_1E867E90319780DD_OFFSET UNITYSDK_OFFSET(0x18829E60)
#define CLASS_1_B302648C6979F380_METHOD_1_7762DC2A8A0FC340_OFFSET UNITYSDK_OFFSET(0x18829EC0)
#define CLASS_1_B302648C6979F380_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x1882A170)
#define CLASS_1_B302648C6979F380__CTOR_OFFSET UNITYSDK_OFFSET(0x18829E50)

inline static constexpr unsigned int Class_1_B302648C6979F380_TypeDefinitionIndex = 66134;

class Class_1_B302648C6979F380 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_09388B68BBD5FF59*>* LMFJFMJACAE; // 0x10
	::System::UInt32 _MissionID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1E867E90319780DD(::RPG::GameCore::MiddleMissionPackConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380_METHOD_1_1E867E90319780DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7762DC2A8A0FC340(::RPG::GameCore::MiddleMissionPackConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380_METHOD_1_7762DC2A8A0FC340_OFFSET))(this, a1);
	}

	::System::UInt32 get_MissionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380_GET_MISSIONID_OFFSET))(this);
	}

	::System::Void set_MissionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B302648C6979F380_SET_MISSIONID_OFFSET))(this, a1);
	}
};
