#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_45.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_47.h"
#include "unitysdk/System/Object.h"

class Class_1_692EBCC218350A0A;
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B59D99E2BF00D7F_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16CAD7D0)
#define CLASS_1_5B59D99E2BF00D7F_GET_ISROTATEREGIONGROUP_OFFSET UNITYSDK_OFFSET(0x16CAD7E0)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x16CADFE0)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x16CADF00)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x16CAD7F0)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0x16CADEB0)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_ED40B86667411998_OFFSET UNITYSDK_OFFSET(0x16CAD800)
#define CLASS_1_5B59D99E2BF00D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x16CADAE0)

inline static constexpr unsigned int Class_1_5B59D99E2BF00D7F_TypeDefinitionIndex = 66093;

class Class_1_5B59D99E2BF00D7F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_692EBCC218350A0A*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* Field_1_1; // 0x18
	::System::Boolean _IsRotateRegionGroup_k__BackingField; // 0x20
	::System::UInt32 _GroupID_k__BackingField; // 0x24

	::System::Void _ctor(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_GET_GROUPID_OFFSET))(this);
	}

	::System::Boolean get_IsRotateRegionGroup()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_GET_ISROTATEREGIONGROUP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_692EBCC218350A0A*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_692EBCC218350A0A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	static ::Struct_2_CC45B4503679E14E_45 Method_1_ED40B86667411998(::RPG::GameCore::LevelCrowdInfo* a1, ::Struct_2_CC45B4503679E14E_47 a2)
	{
		return ((::Struct_2_CC45B4503679E14E_45(*)(::RPG::GameCore::LevelCrowdInfo*, ::Struct_2_CC45B4503679E14E_47))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_METHOD_1_ED40B86667411998_OFFSET))(a1, a2);
	}

	::System::Void Method_1_45714050EDEF8291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_METHOD_1_45714050EDEF8291_OFFSET))(this);
	}

	::System::Void Method_1_0D3455A2B8A3E6D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_METHOD_1_0D3455A2B8A3E6D4_OFFSET))(this);
	}

	::RPG::GameCore::EntityClassifyType Method_1_679732E46F837809(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_METHOD_1_679732E46F837809_OFFSET))(this, a1);
	}
};
