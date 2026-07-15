#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_423;
class Class_0_16E4307DCC419505_759;
class Class_1_65EF9EC87B818BF3;
class Class_1_EE6E9D2CA8BDE3B8;
class Class_1_EFF03B82D1C2B1F6;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_C42040015DA3FDFF_METHOD_1_5C75F7F130F00873_OFFSET UNITYSDK_OFFSET(0x17AAE1C0)
#define CLASS_1_C42040015DA3FDFF_METHOD_1_97BEDD58D6243720_OFFSET UNITYSDK_OFFSET(0x17AAE230)
#define CLASS_1_C42040015DA3FDFF_METHOD_1_9B90125DE2F267B8_OFFSET UNITYSDK_OFFSET(0x17A8E7C0)
#define CLASS_1_C42040015DA3FDFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17AAE070)

inline static constexpr unsigned int Class_1_C42040015DA3FDFF_TypeDefinitionIndex = 60061;

class Class_1_C42040015DA3FDFF : public ::System::Object
{
public:
	::Class_1_EE6E9D2CA8BDE3B8* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_423* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_423* a1, ::Class_0_16E4307DCC419505_759* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_423*, ::Class_0_16E4307DCC419505_759*))((::PBYTE)hIl2Cpp + CLASS_1_C42040015DA3FDFF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9B90125DE2F267B8(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2, ::RPG::Client::AvatarUpgradePart a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_C42040015DA3FDFF_METHOD_1_9B90125DE2F267B8_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_EFF03B82D1C2B1F6* Method_1_5C75F7F130F00873(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::Class_1_EFF03B82D1C2B1F6*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_C42040015DA3FDFF_METHOD_1_5C75F7F130F00873_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::RPG::AvatarSystem::Avatar*> Method_1_97BEDD58D6243720(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::RPG::AvatarSystem::Avatar*>(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_C42040015DA3FDFF_METHOD_1_97BEDD58D6243720_OFFSET))(this, a1, a2);
	}
};
