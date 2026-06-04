#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::Client { class RogueTournCollectionInfo; }
namespace RPG::GameCore { class RogueTournSetCollectionBoothPrefab; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9C21D8189D22FB81_METHOD_3_61BB99FC3B9DAAD6_OFFSET UNITYSDK_OFFSET(0xA3A6490)
#define CLASS_3_9C21D8189D22FB81_METHOD_3_E47658D7D9D82A19_OFFSET UNITYSDK_OFFSET(0xA3A6520)
#define CLASS_3_9C21D8189D22FB81_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3A5FC0)
#define CLASS_3_9C21D8189D22FB81__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A6600)
#define CLASS_3_9C21D8189D22FB81__CTOR_OFFSET UNITYSDK_OFFSET(0xA3A5F90)

inline static constexpr unsigned int Class_3_9C21D8189D22FB81_TypeDefinitionIndex = 54647;

class Class_3_9C21D8189D22FB81 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::RogueTournSetCollectionBoothPrefab*>
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_3_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_3_9C21D8189D22FB81_TypeDefinitionIndex)->GetStaticField(0x85C0);
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

	static ::RPG::Client::RogueTournCollectionInfo* Method_3_61BB99FC3B9DAAD6()
	{
		return ((::RPG::Client::RogueTournCollectionInfo*(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81_METHOD_3_61BB99FC3B9DAAD6_OFFSET))();
	}

	static ::System::Int32 Method_3_E47658D7D9D82A19()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_9C21D8189D22FB81_METHOD_3_E47658D7D9D82A19_OFFSET))();
	}
};
