#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/System/Object.h"

class Class_1_EF79F96DD047B849;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D729E7643943873_METHOD_1_37E31494ED6EBBF3_OFFSET UNITYSDK_OFFSET(0x9324DF0)
#define CLASS_1_4D729E7643943873_METHOD_1_62A238F633D02889_OFFSET UNITYSDK_OFFSET(0x93253E0)
#define CLASS_1_4D729E7643943873_METHOD_1_81C08609F940CDE1_OFFSET UNITYSDK_OFFSET(0x9324D70)
#define CLASS_1_4D729E7643943873_METHOD_1_9F9BC0DB70434FDF_OFFSET UNITYSDK_OFFSET(0x93250E0)
#define CLASS_1_4D729E7643943873_METHOD_1_ED0C2D1E05F71072_OFFSET UNITYSDK_OFFSET(0x9324F10)

inline static constexpr unsigned int Class_1_4D729E7643943873_TypeDefinitionIndex = 50008;

class Class_1_4D729E7643943873 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_81C08609F940CDE1(::Class_1_EF79F96DD047B849* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::Class_1_EF79F96DD047B849*))((::PBYTE)hIl2Cpp + CLASS_1_4D729E7643943873_METHOD_1_81C08609F940CDE1_OFFSET))(a1);
	}

	static ::RPG::GameCore::GameEntity* Method_1_37E31494ED6EBBF3(::Class_1_EF79F96DD047B849* a1, ::RPG::GameCore::EntityType a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::Class_1_EF79F96DD047B849*, ::RPG::GameCore::EntityType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4D729E7643943873_METHOD_1_37E31494ED6EBBF3_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::GameEntity* Method_1_ED0C2D1E05F71072(::Class_1_EF79F96DD047B849* a1, ::RPG::GameCore::EntityType a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::Class_1_EF79F96DD047B849*, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D729E7643943873_METHOD_1_ED0C2D1E05F71072_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_9F9BC0DB70434FDF(::Class_1_EF79F96DD047B849* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityType a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
	{
		return ((::System::Void(*)(::Class_1_EF79F96DD047B849*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D729E7643943873_METHOD_1_9F9BC0DB70434FDF_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_62A238F633D02889(::Class_1_EF79F96DD047B849* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::AliveStateMask a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5)
	{
		return ((::System::Void(*)(::Class_1_EF79F96DD047B849*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_4D729E7643943873_METHOD_1_62A238F633D02889_OFFSET))(a1, a2, a3, a4, a5);
	}
};
