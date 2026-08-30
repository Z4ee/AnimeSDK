#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_46.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_48.h"
#include "unitysdk/System/Object.h"

class Class_1_692EBCC218350A0A;
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B59D99E2BF00D7F_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x18B82910)
#define CLASS_1_5B59D99E2BF00D7F_GET_ISROTATEREGIONGROUP_OFFSET UNITYSDK_OFFSET(0x18B82920)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_0D3455A2B8A3E6D4_OFFSET UNITYSDK_OFFSET(0x18B83110)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_45714050EDEF8291_OFFSET UNITYSDK_OFFSET(0x18B83030)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x18B82930)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_679732E46F837809_OFFSET UNITYSDK_OFFSET(0x18B82FE0)
#define CLASS_1_5B59D99E2BF00D7F_METHOD_1_ED40B86667411998_OFFSET UNITYSDK_OFFSET(0x18B82940)
#define CLASS_1_5B59D99E2BF00D7F__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82C20)

inline static constexpr unsigned int Class_1_5B59D99E2BF00D7F_TypeDefinitionIndex = 69132;

class Class_1_5B59D99E2BF00D7F : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelCrowdInfo*>* NBEDFKHNIEK; // 0x10
	::System::Collections::Generic::List_1<::Class_1_692EBCC218350A0A*>* ALBHNCGIBDF; // 0x18
	::System::UInt32 _GroupID_k__BackingField; // 0x20
	::System::Boolean _IsRotateRegionGroup_k__BackingField; // 0x24

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

	static ::Struct_2_CC45B4503679E14E_46 Method_1_ED40B86667411998(::RPG::GameCore::LevelCrowdInfo* a1, ::Struct_2_CC45B4503679E14E_48 a2)
	{
		return ((::Struct_2_CC45B4503679E14E_46(*)(::RPG::GameCore::LevelCrowdInfo*, ::Struct_2_CC45B4503679E14E_48))((::PBYTE)hIl2Cpp + CLASS_1_5B59D99E2BF00D7F_METHOD_1_ED40B86667411998_OFFSET))(a1, a2);
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
