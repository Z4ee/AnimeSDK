#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F1450C7202739F5;
class Class_1_7BD81C3D1A781452;
class Class_1_99A664A29387040D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_37676B2FB4322E20_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x11B40190)
#define CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_1_OFFSET UNITYSDK_OFFSET(0x11B40350)
#define CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_OFFSET UNITYSDK_OFFSET(0x11B401B0)
#define CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_1_OFFSET UNITYSDK_OFFSET(0x11B40680)
#define CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_OFFSET UNITYSDK_OFFSET(0x11B40630)
#define CLASS_1_37676B2FB4322E20_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x11B401A0)
#define CLASS_1_37676B2FB4322E20__CTOR_OFFSET UNITYSDK_OFFSET(0x11B40550)

inline static constexpr unsigned int Class_1_37676B2FB4322E20_TypeDefinitionIndex = 57831;

class Class_1_37676B2FB4322E20 : public ::System::Object
{
public:
	::Class_1_99A664A29387040D* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_1_7BD81C3D1A781452*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_1_4F1450C7202739F5*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20__CTOR_OFFSET))(this);
	}

	::Class_1_99A664A29387040D* get_Factory()
	{
		return ((::Class_1_99A664A29387040D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_99A664A29387040D* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_99A664A29387040D*))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_4F1450C7202739F5* Method_1_17CBE194BEE2B36C(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_4F1450C7202739F5*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_OFFSET))(this, a1);
	}

	::Class_1_7BD81C3D1A781452* Method_1_17CBE194BEE2B36C_1(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_7BD81C3D1A781452*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_17CBE194BEE2B36C_1_OFFSET))(this, a1);
	}

	::Class_1_4F1450C7202739F5* Method_1_480EF3A2A227D57C(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_4F1450C7202739F5*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_OFFSET))(this, a1);
	}

	::Class_1_7BD81C3D1A781452* Method_1_480EF3A2A227D57C_1(::RPG::GameCore::AvatarPropertyType& a1)
	{
		return ((::Class_1_7BD81C3D1A781452*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType&))((::PBYTE)hIl2Cpp + CLASS_1_37676B2FB4322E20_METHOD_1_480EF3A2A227D57C_1_OFFSET))(this, a1);
	}
};
