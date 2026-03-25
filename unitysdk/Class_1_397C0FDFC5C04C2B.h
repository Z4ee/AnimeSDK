#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_397C0FDFC5C04C2B_Class_3_677DF669C3E0B70F;
namespace RPG::GameCore { class BaseSortConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_397C0FDFC5C04C2B_METHOD_1_79BE1410097654D4_OFFSET UNITYSDK_OFFSET(0x104B5C50)
#define CLASS_1_397C0FDFC5C04C2B_METHOD_1_C947BBFDFFF0EE4D_OFFSET UNITYSDK_OFFSET(0x104B5640)
#define CLASS_1_397C0FDFC5C04C2B_METHOD_1_DC29B0C071D11A63_OFFSET UNITYSDK_OFFSET(0x104B4DE0)
#define CLASS_1_397C0FDFC5C04C2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x104B62A0)

inline static constexpr unsigned int Class_1_397C0FDFC5C04C2B_TypeDefinitionIndex = 44553;

class Class_1_397C0FDFC5C04C2B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_397C0FDFC5C04C2B_Class_3_677DF669C3E0B70F*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_397C0FDFC5C04C2B_Class_3_677DF669C3E0B70F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_397C0FDFC5C04C2B_TypeDefinitionIndex)->GetStaticField(0x13D80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_DC29B0C071D11A63(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B_METHOD_1_DC29B0C071D11A63_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_C947BBFDFFF0EE4D(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B_METHOD_1_C947BBFDFFF0EE4D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_79BE1410097654D4(::RPG::GameCore::BaseSortConfig* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::BaseSortConfig*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_397C0FDFC5C04C2B_METHOD_1_79BE1410097654D4_OFFSET))(a1, a2, a3, a4);
	}
};
