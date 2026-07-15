#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_588CD27F71E12A8A;
class Class_1_99A664A29387040D;
class Class_1_A561DBBEB8754F4D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_37676B2FB4322E20_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x18B41AD0)
#define CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_1_OFFSET UNITYSDK_OFFSET(0x18B41C80)
#define CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_OFFSET UNITYSDK_OFFSET(0x18B41AF0)
#define CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_1_OFFSET UNITYSDK_OFFSET(0x18B41FA0)
#define CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_OFFSET UNITYSDK_OFFSET(0x18B41F50)
#define CLASS_1_37676B2FB4322E20_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x18B41AE0)
#define CLASS_1_37676B2FB4322E20__CTOR_OFFSET UNITYSDK_OFFSET(0x18B41E70)

inline static constexpr unsigned int Class_1_37676B2FB4322E20_TypeDefinitionIndex = 59962;

class Class_1_37676B2FB4322E20 : public ::System::Object
{
public:
	::Class_1_99A664A29387040D* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_1_588CD27F71E12A8A*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_1_A561DBBEB8754F4D*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20__CTOR_OFFSET))(this);
	}

	::Class_1_99A664A29387040D* get_Factory()
	{
		return ((::Class_1_99A664A29387040D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_99A664A29387040D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99A664A29387040D*))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_SET_FACTORY_OFFSET))(this, a1);
	}

	::Class_1_A561DBBEB8754F4D* Method_1_17CBE194BEE2B36C(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_A561DBBEB8754F4D*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_OFFSET))(this, a1);
	}

	::Class_1_588CD27F71E12A8A* Method_1_17CBE194BEE2B36C_1(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_588CD27F71E12A8A*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_1_OFFSET))(this, a1);
	}

	::Class_1_A561DBBEB8754F4D* Method_1_480EF3A2A227D57C(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_A561DBBEB8754F4D*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_OFFSET))(this, a1);
	}

	::Class_1_588CD27F71E12A8A* Method_1_480EF3A2A227D57C_1(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_588CD27F71E12A8A*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_1_OFFSET))(this, a1);
	}
};
