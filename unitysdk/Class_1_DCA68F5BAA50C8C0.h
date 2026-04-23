#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
class Class_1_53046032C589F545;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitElationEffect; }

#define CLASS_1_DCA68F5BAA50C8C0_METHOD_1_46C08B00926589FF_OFFSET UNITYSDK_OFFSET(0x99903F0)
#define CLASS_1_DCA68F5BAA50C8C0_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x998FC40)
#define CLASS_1_DCA68F5BAA50C8C0_METHOD_1_6746B5EB451F10F4_OFFSET UNITYSDK_OFFSET(0x998FCC0)
#define CLASS_1_DCA68F5BAA50C8C0_METHOD_1_CD53F45513A00C57_OFFSET UNITYSDK_OFFSET(0x9990600)
#define CLASS_1_DCA68F5BAA50C8C0__CTOR_OFFSET UNITYSDK_OFFSET(0x998FBA0)

inline static constexpr unsigned int Class_1_DCA68F5BAA50C8C0_TypeDefinitionIndex = 60202;

class Class_1_DCA68F5BAA50C8C0 : public ::System::Object
{
public:
	::Class_1_53046032C589F545* Field_1_0; // 0x10
	::RPG::Client::GridFightTraitElationEffect* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightTraitElationEffect* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitElationEffect*))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_46C08B00926589FF(::RPG::Client::GridFightRole* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0_METHOD_1_46C08B00926589FF_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_6746B5EB451F10F4()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0_METHOD_1_6746B5EB451F10F4_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_663* Method_1_CD53F45513A00C57(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_DCA68F5BAA50C8C0_METHOD_1_CD53F45513A00C57_OFFSET))(this, a1);
	}
};
