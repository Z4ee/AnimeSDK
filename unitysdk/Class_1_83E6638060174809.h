#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_83E6638060174809_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x112B0540)
#define CLASS_1_83E6638060174809_METHOD_1_1B91EE3BC0E1480C_OFFSET UNITYSDK_OFFSET(0x112B04F0)
#define CLASS_1_83E6638060174809_METHOD_1_7ACAD4B7F8AB5FC3_OFFSET UNITYSDK_OFFSET(0x112B0400)
#define CLASS_1_83E6638060174809_METHOD_1_F2485B453A052BEC_OFFSET UNITYSDK_OFFSET(0x112B04A0)
#define CLASS_1_83E6638060174809_METHOD_1_FBAEEB138C5E0414_OFFSET UNITYSDK_OFFSET(0x112B0560)
#define CLASS_1_83E6638060174809_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x112B0550)
#define CLASS_1_83E6638060174809__CTOR_OFFSET UNITYSDK_OFFSET(0x112B0490)

inline static constexpr unsigned int Class_1_83E6638060174809_TypeDefinitionIndex = 53168;

class Class_1_83E6638060174809 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* Field_1_0; // 0x10
	::System::UInt32 _PhaseID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809__CTOR_OFFSET))(this);
	}

	static ::Class_1_83E6638060174809* Method_1_7ACAD4B7F8AB5FC3(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a2)
	{
		return ((::Class_1_83E6638060174809*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809_METHOD_1_7ACAD4B7F8AB5FC3_OFFSET))(a1, a2);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_F2485B453A052BEC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809_METHOD_1_F2485B453A052BEC_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_1B91EE3BC0E1480C(::System::String* a1)
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809_METHOD_1_1B91EE3BC0E1480C_OFFSET))(this, a1);
	}

	::System::UInt32 get_PhaseID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809_GET_PHASEID_OFFSET))(this);
	}

	::System::Void set_PhaseID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809_SET_PHASEID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* Method_1_FBAEEB138C5E0414()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83E6638060174809_METHOD_1_FBAEEB138C5E0414_OFFSET))(this);
	}
};
