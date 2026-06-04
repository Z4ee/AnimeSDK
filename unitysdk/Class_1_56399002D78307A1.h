#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_0051C6FE64496F8F;
class Class_1_266D46D3DAA8F058;
class Class_1_93BC4A6035ED3F95;
class Class_1_EA125597F40188F6;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_56399002D78307A1_GET_ABILITYOWNER_OFFSET UNITYSDK_OFFSET(0x12A9EE20)
#define CLASS_1_56399002D78307A1_GET_CURRENTSKILLPARAMS_OFFSET UNITYSDK_OFFSET(0x12A9EE40)
#define CLASS_1_56399002D78307A1_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x12A9F180)
#define CLASS_1_56399002D78307A1_METHOD_1_5012DEB7320C101A_OFFSET UNITYSDK_OFFSET(0x12A9F0D0)
#define CLASS_1_56399002D78307A1_METHOD_1_550AE1C8D5F8A13E_OFFSET UNITYSDK_OFFSET(0x12A9F010)
#define CLASS_1_56399002D78307A1_METHOD_1_5656D8E6CC51E5E9_OFFSET UNITYSDK_OFFSET(0x12A9F070)
#define CLASS_1_56399002D78307A1_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x12A9F1C0)
#define CLASS_1_56399002D78307A1_SET_ABILITYOWNER_OFFSET UNITYSDK_OFFSET(0x12A9EE30)
#define CLASS_1_56399002D78307A1_SET_CURRENTSKILLPARAMS_OFFSET UNITYSDK_OFFSET(0x12A9EE50)
#define CLASS_1_56399002D78307A1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A9EE60)

inline static constexpr unsigned int Class_1_56399002D78307A1_TypeDefinitionIndex = 73720;

class Class_1_56399002D78307A1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0051C6FE64496F8F*>* Field_1_0; // 0x10
	::Il2CppArray<::RPG::GameCore::FixPoint>* _CurrentSkillParams_k__BackingField; // 0x18
	::Class_1_EA125597F40188F6* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0051C6FE64496F8F*>* Field_1_3; // 0x28
	::Class_1_93BC4A6035ED3F95* Field_1_4; // 0x30
	::Class_1_266D46D3DAA8F058* Field_1_5; // 0x38
	::Class_1_0051C6FE64496F8F* _AbilityOwner_k__BackingField; // 0x40

	::System::Void _ctor(::Class_1_EA125597F40188F6* a1, ::System::Collections::Generic::List_1<::Class_1_0051C6FE64496F8F*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EA125597F40188F6*, ::System::Collections::Generic::List_1<::Class_1_0051C6FE64496F8F*>*))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_0051C6FE64496F8F* get_AbilityOwner()
	{
		return ((::Class_1_0051C6FE64496F8F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_GET_ABILITYOWNER_OFFSET))(this);
	}

	::System::Void set_AbilityOwner(::Class_1_0051C6FE64496F8F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0051C6FE64496F8F*))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_SET_ABILITYOWNER_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* get_CurrentSkillParams()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_GET_CURRENTSKILLPARAMS_OFFSET))(this);
	}

	::System::Void set_CurrentSkillParams(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_SET_CURRENTSKILLPARAMS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_550AE1C8D5F8A13E(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_METHOD_1_550AE1C8D5F8A13E_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_5656D8E6CC51E5E9(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_METHOD_1_5656D8E6CC51E5E9_OFFSET))(this, a1);
	}

	::Class_1_0051C6FE64496F8F* Method_1_5012DEB7320C101A(::System::Int32 a1)
	{
		return ((::Class_1_0051C6FE64496F8F*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_METHOD_1_5012DEB7320C101A_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_0051C6FE64496F8F*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0051C6FE64496F8F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::Class_1_EA125597F40188F6* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_EA125597F40188F6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56399002D78307A1_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
