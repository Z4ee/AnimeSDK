#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A952181C6CF1F2FF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6C6363C2772DEF01_GET_FULLUNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x18807D40)
#define CLASS_1_6C6363C2772DEF01_GET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0x18807D20)
#define CLASS_1_6C6363C2772DEF01_GET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0x18807D00)
#define CLASS_1_6C6363C2772DEF01_SET_FULLUNLOCKEDDRIVERIDS_OFFSET UNITYSDK_OFFSET(0x18807D50)
#define CLASS_1_6C6363C2772DEF01_SET_ISCYCLEFINISHED_OFFSET UNITYSDK_OFFSET(0x18807D30)
#define CLASS_1_6C6363C2772DEF01_SET_NEXTAGENDADTO_OFFSET UNITYSDK_OFFSET(0x18807D10)
#define CLASS_1_6C6363C2772DEF01__CTOR_OFFSET UNITYSDK_OFFSET(0x18807D60)

inline static constexpr unsigned int Class_1_6C6363C2772DEF01_TypeDefinitionIndex = 80508;

class Class_1_6C6363C2772DEF01 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* _FullUnlockedDriverIDs_k__BackingField; // 0x10
	::Class_1_A952181C6CF1F2FF* _NextAgendaDto_k__BackingField; // 0x18
	::System::Boolean _IsCycleFinished_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01__CTOR_OFFSET))(this);
	}

	::Class_1_A952181C6CF1F2FF* get_NextAgendaDto()
	{
		return ((::Class_1_A952181C6CF1F2FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01_GET_NEXTAGENDADTO_OFFSET))(this);
	}

	::System::Void set_NextAgendaDto(::Class_1_A952181C6CF1F2FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A952181C6CF1F2FF*))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01_SET_NEXTAGENDADTO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCycleFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01_GET_ISCYCLEFINISHED_OFFSET))(this);
	}

	::System::Void set_IsCycleFinished(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01_SET_ISCYCLEFINISHED_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_FullUnlockedDriverIDs()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01_GET_FULLUNLOCKEDDRIVERIDS_OFFSET))(this);
	}

	::System::Void set_FullUnlockedDriverIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_6C6363C2772DEF01_SET_FULLUNLOCKEDDRIVERIDS_OFFSET))(this, a1);
	}
};
