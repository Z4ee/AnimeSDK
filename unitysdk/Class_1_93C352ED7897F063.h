#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_93C352ED7897F063_Class_3_677DF669C3E0B70F;
namespace RPG::GameCore { class BaseSortConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_93C352ED7897F063_METHOD_1_1F9C08855677FBC4_OFFSET UNITYSDK_OFFSET(0xC4392E0)
#define CLASS_1_93C352ED7897F063_METHOD_1_DC29B0C071D11A63_OFFSET UNITYSDK_OFFSET(0xC4390A0)
#define CLASS_1_93C352ED7897F063_METHOD_1_F3200C5BD2614B8B_OFFSET UNITYSDK_OFFSET(0xC439B60)
#define CLASS_1_93C352ED7897F063__CCTOR_OFFSET UNITYSDK_OFFSET(0xC43A480)

inline static constexpr unsigned int Class_1_93C352ED7897F063_TypeDefinitionIndex = 55820;

class Class_1_93C352ED7897F063 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_93C352ED7897F063_Class_3_677DF669C3E0B70F*>** StaticGet_FHAECKKMCCN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_93C352ED7897F063_Class_3_677DF669C3E0B70F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_93C352ED7897F063_TypeDefinitionIndex)->GetStaticField(0x5C940);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_DC29B0C071D11A63(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_METHOD_1_DC29B0C071D11A63_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_1F9C08855677FBC4(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_METHOD_1_1F9C08855677FBC4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F3200C5BD2614B8B(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93C352ED7897F063_METHOD_1_F3200C5BD2614B8B_OFFSET))(a1, a2, a3, a4);
	}
};
