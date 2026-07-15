#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_384;
class Class_0_16E4307DCC419505_758;
class Class_1_65EF9EC87B818BF3;
class Class_1_EE6E9D2CA8BDE3B8_Class_1_93F9BF87AD7C9330;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_1318DBDAD3307BE7_OFFSET UNITYSDK_OFFSET(0x177B03E0)
#define CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_14CAF04769217469_OFFSET UNITYSDK_OFFSET(0x177AFA30)
#define CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_7FA4AA1ED3B01876_OFFSET UNITYSDK_OFFSET(0x177B0370)
#define CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_B2952B90C7A5BE15_OFFSET UNITYSDK_OFFSET(0x177AFCC0)
#define CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_F118FD47FCAE89A6_OFFSET UNITYSDK_OFFSET(0x177AFBB0)
#define CLASS_1_EE6E9D2CA8BDE3B8__CTOR_OFFSET UNITYSDK_OFFSET(0x177B0580)

inline static constexpr unsigned int Class_1_EE6E9D2CA8BDE3B8_TypeDefinitionIndex = 60053;

class Class_1_EE6E9D2CA8BDE3B8 : public ::System::Object
{
public:
	::Class_1_EE6E9D2CA8BDE3B8_Class_1_93F9BF87AD7C9330* Field_1_0; // 0x10
	::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_758*>* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_384* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8__CTOR_OFFSET))(this);
	}

	::Class_1_EE6E9D2CA8BDE3B8_Class_1_93F9BF87AD7C9330* Method_1_14CAF04769217469(::RPG::Client::AvatarUpgradePart a1, ::Class_0_16E4307DCC419505_758* a2)
	{
		return ((::Class_1_EE6E9D2CA8BDE3B8_Class_1_93F9BF87AD7C9330*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_758*))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_14CAF04769217469_OFFSET))(this, a1, a2);
	}

	::Class_1_EE6E9D2CA8BDE3B8_Class_1_93F9BF87AD7C9330* Method_1_F118FD47FCAE89A6(::Class_0_16E4307DCC419505_384* a1)
	{
		return ((::Class_1_EE6E9D2CA8BDE3B8_Class_1_93F9BF87AD7C9330*(*)(::PVOID, ::Class_0_16E4307DCC419505_384*))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_F118FD47FCAE89A6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B2952B90C7A5BE15(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2, ::RPG::Client::AvatarUpgradePart a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_B2952B90C7A5BE15_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_EFF03B82D1C2B1F6* Method_1_1318DBDAD3307BE7(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::Class_1_EFF03B82D1C2B1F6*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_1318DBDAD3307BE7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_758*>* Method_1_7FA4AA1ED3B01876(::RPG::Client::AvatarUpgradePart a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_758*>*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_EE6E9D2CA8BDE3B8_METHOD_1_7FA4AA1ED3B01876_OFFSET))(this, a1);
	}
};
