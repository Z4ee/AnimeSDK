#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"

class Class_1_EF79F96DD047B849;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F08108A95058CB64_METHOD_1_12DFF463707F8A45_OFFSET UNITYSDK_OFFSET(0x13C2AB10)
#define CLASS_1_F08108A95058CB64_METHOD_1_136576580B69AA05_OFFSET UNITYSDK_OFFSET(0x13C2A340)
#define CLASS_1_F08108A95058CB64_METHOD_1_1FE3B8E590106398_OFFSET UNITYSDK_OFFSET(0x13C2A440)
#define CLASS_1_F08108A95058CB64_METHOD_1_64A32C8E935B1FF8_OFFSET UNITYSDK_OFFSET(0x13C2A690)
#define CLASS_1_F08108A95058CB64_METHOD_1_801BE98E1894A5F6_OFFSET UNITYSDK_OFFSET(0x13C2A2C0)

inline static constexpr unsigned int Class_1_F08108A95058CB64_TypeDefinitionIndex = 50675;

class Class_1_F08108A95058CB64 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_801BE98E1894A5F6(::Class_1_EF79F96DD047B849* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::Class_1_EF79F96DD047B849*))((::PBYTE)hIl2Cpp + CLASS_1_F08108A95058CB64_METHOD_1_801BE98E1894A5F6_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_136576580B69AA05(::Class_1_EF79F96DD047B849* a1, ::RPG::GameCore::EntityType a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::Class_1_EF79F96DD047B849*, ::RPG::GameCore::EntityType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F08108A95058CB64_METHOD_1_136576580B69AA05_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::GameEntity* Method_1_1FE3B8E590106398(::Class_1_EF79F96DD047B849* a1, ::RPG::GameCore::EntityType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::Class_1_EF79F96DD047B849*, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_F08108A95058CB64_METHOD_1_1FE3B8E590106398_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_64A32C8E935B1FF8(::Class_1_EF79F96DD047B849* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityType a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Void(*)(::Class_1_EF79F96DD047B849*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_F08108A95058CB64_METHOD_1_64A32C8E935B1FF8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_12DFF463707F8A45(::Class_1_EF79F96DD047B849* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::Class_1_EF79F96DD047B849*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_F08108A95058CB64_METHOD_1_12DFF463707F8A45_OFFSET))(a1, a2, a3, a4, a5);
	}
};
