#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_123;
class Class_1_6EBCF65D89206A80_Class_1_39154B8B2AA98D66_2;
namespace RPG::Client { class TimeRewindContainerAndSeedTarget; }
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleBoard; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6EBCF65D89206A80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136BF7D0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_11C659ACD2EFD1DA_OFFSET UNITYSDK_OFFSET(0x136BF870)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x136BF780)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_2FC131E18AAE582C_OFFSET UNITYSDK_OFFSET(0x136BF420)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_3197392C63949A7D_OFFSET UNITYSDK_OFFSET(0x136BF9C0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_6F92AED1F0E48B01_OFFSET UNITYSDK_OFFSET(0x136BFAF0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_72D1E8CC8DC23FBB_OFFSET UNITYSDK_OFFSET(0x136BF5A0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x136BF3D0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_F7C45B8BD14F7DF7_OFFSET UNITYSDK_OFFSET(0x136BFA70)
#define CLASS_1_6EBCF65D89206A80__CTOR_OFFSET UNITYSDK_OFFSET(0x136BF1F0)

inline static constexpr unsigned int Class_1_6EBCF65D89206A80_TypeDefinitionIndex = 73428;

class Class_1_6EBCF65D89206A80 : public ::System::Object
{
public:
	::RPG::Client::TimeRewindContainerAndSeedTarget* Field_1_0; // 0x10
	::Class_1_43BD383C98B4C0C5_123* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6EBCF65D89206A80_Class_1_39154B8B2AA98D66_2*>* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::RPG::Client::Prop::TimeRewindParterrePuzzleBoard* Field_1_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::EntityTimeRewindComponent* a1, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_123* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_43BD383C98B4C0C5_123*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_2FC131E18AAE582C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_2FC131E18AAE582C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_72D1E8CC8DC23FBB(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_72D1E8CC8DC23FBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::EntityTimeRewindComponent* Method_1_11C659ACD2EFD1DA(::System::Int32 a1)
	{
		return ((::RPG::GameCore::EntityTimeRewindComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_11C659ACD2EFD1DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3197392C63949A7D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_3197392C63949A7D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F7C45B8BD14F7DF7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_F7C45B8BD14F7DF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6F92AED1F0E48B01(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_6F92AED1F0E48B01_OFFSET))(this, a1, a2);
	}
};
