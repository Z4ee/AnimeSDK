#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_112;
class Class_1_6EBCF65D89206A80_Class_1_39154B8B2AA98D66_2;
namespace RPG::Client { class TimeRewindContainerAndSeedTarget; }
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleBoard; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6EBCF65D89206A80_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9688770)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x9688720)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_2FC131E18AAE582C_OFFSET UNITYSDK_OFFSET(0x96883B0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_3197392C63949A7D_OFFSET UNITYSDK_OFFSET(0x96889B0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_4DE9A70860662EEE_OFFSET UNITYSDK_OFFSET(0x9688A60)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_70950D2DE6A6CA5D_OFFSET UNITYSDK_OFFSET(0x9688AE0)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_7A9FC8D9AA3EEEE1_OFFSET UNITYSDK_OFFSET(0x9688530)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x9688360)
#define CLASS_1_6EBCF65D89206A80_METHOD_1_B9EE4E304267F923_OFFSET UNITYSDK_OFFSET(0x9688820)
#define CLASS_1_6EBCF65D89206A80__CTOR_OFFSET UNITYSDK_OFFSET(0x9688180)

inline static constexpr unsigned int Class_1_6EBCF65D89206A80_TypeDefinitionIndex = 72406;

class Class_1_6EBCF65D89206A80 : public ::System::Object
{
public:
	::RPG::Client::TimeRewindContainerAndSeedTarget* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_6EBCF65D89206A80_Class_1_39154B8B2AA98D66_2*>* Field_1_3; // 0x20
	::RPG::Client::Prop::TimeRewindParterrePuzzleBoard* Field_1_4; // 0x28
	::Class_1_43BD383C98B4C0C5_112* Field_1_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::EntityTimeRewindComponent* a1, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_43BD383C98B4C0C5_112* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_43BD383C98B4C0C5_112*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_2FC131E18AAE582C(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_2FC131E18AAE582C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A9FC8D9AA3EEEE1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_7A9FC8D9AA3EEEE1_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::EntityTimeRewindComponent* Method_1_B9EE4E304267F923(::System::Int32 a1)
	{
		return ((::RPG::GameCore::EntityTimeRewindComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_B9EE4E304267F923_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3197392C63949A7D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_3197392C63949A7D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4DE9A70860662EEE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_4DE9A70860662EEE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70950D2DE6A6CA5D(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_6EBCF65D89206A80_METHOD_1_70950D2DE6A6CA5D_OFFSET))(this, a1, a2);
	}
};
