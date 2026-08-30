#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class RogueTournSetCollectionBoothPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C21D8189D22FB81_METHOD_3_D9869B46982E29C2_OFFSET UNITYSDK_OFFSET(0x17E98160)
#define CLASS_3_9C21D8189D22FB81_METHOD_3_E47658D7D9D82A19_OFFSET UNITYSDK_OFFSET(0x17E98220)
#define CLASS_3_9C21D8189D22FB81_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E97A50)
#define CLASS_3_9C21D8189D22FB81__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E98300)
#define CLASS_3_9C21D8189D22FB81__CTOR_OFFSET UNITYSDK_OFFSET(0x17E97A20)

inline static constexpr unsigned int Class_3_9C21D8189D22FB81_TypeDefinitionIndex = 58644;

class Class_3_9C21D8189D22FB81 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueTournSetCollectionBoothPrefab*>
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_KNAEBCKGLHP()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9C21D8189D22FB81_TypeDefinitionIndex)->GetStaticField(0xFA0);
	}

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournSetCollectionBoothPrefab*))((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81_ONTASKBEGIN_OFFSET))(this);
	}

	static ::RPG::Client::RogueTournCollectionInfo* Method_3_D9869B46982E29C2()
	{
		return ((::RPG::Client::RogueTournCollectionInfo*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81_METHOD_3_D9869B46982E29C2_OFFSET))();
	}

	static ::System::Int32 Method_3_E47658D7D9D82A19()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81_METHOD_3_E47658D7D9D82A19_OFFSET))();
	}
};
