#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_680;
class Class_1_7D46F1066EF90FA6_3;
class Class_1_916A609943E0EE80_2;
class Class_1_AEA0006661D84E3E;
class Class_1_FA2301FC3580108A;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_DDF2C200AE487775_METHOD_1_246354701856B763_OFFSET UNITYSDK_OFFSET(0x1351B0A0)
#define CLASS_1_DDF2C200AE487775_METHOD_1_6B4DC5043D435955_OFFSET UNITYSDK_OFFSET(0x1351AE80)
#define CLASS_1_DDF2C200AE487775__CTOR_OFFSET UNITYSDK_OFFSET(0x1351AE60)

inline static constexpr unsigned int Class_1_DDF2C200AE487775_TypeDefinitionIndex = 80171;

class Class_1_DDF2C200AE487775 : public ::System::Object
{
public:
	::Class_1_FA2301FC3580108A* IJPANNPNBFG; // 0x10
	::Class_1_AEA0006661D84E3E* LIIFJAEMFDP; // 0x18
	::Class_0_16E4307DCC419505_680* MOHKEEEHFOB; // 0x20
	::Class_1_7D46F1066EF90FA6_3* CKHDGEHELHN; // 0x28

	::System::Void _ctor(::Class_1_7D46F1066EF90FA6_3* a1, ::Class_0_16E4307DCC419505_680* a2, ::Class_1_FA2301FC3580108A* a3, ::Class_1_AEA0006661D84E3E* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D46F1066EF90FA6_3*, ::Class_0_16E4307DCC419505_680*, ::Class_1_FA2301FC3580108A*, ::Class_1_AEA0006661D84E3E*))((::PBYTE)hIl2Cpp + CLASS_1_DDF2C200AE487775__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_6B4DC5043D435955(::Class_1_916A609943E0EE80_2* a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Class_1_916A609943E0EE80_2*))((::PBYTE)hIl2Cpp + CLASS_1_DDF2C200AE487775_METHOD_1_6B4DC5043D435955_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* Method_1_246354701856B763()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DDF2C200AE487775_METHOD_1_246354701856B763_OFFSET))(this);
	}
};
