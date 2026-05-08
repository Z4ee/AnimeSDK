#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28D6F6163F0E0EBC.h"
#include "unitysdk/MoleMole/CharacterHUDInfo.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_CB7F0487F7A6164A;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_0D211C4FC8BC8734_OFFSET UNITYSDK_OFFSET(0x13114E20)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_16318D8E11DEA285_OFFSET UNITYSDK_OFFSET(0x131156D0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_2E6F9D74E14885B0_OFFSET UNITYSDK_OFFSET(0x13115240)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x13115930)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_3AC0BE81B3A0ED2C_OFFSET UNITYSDK_OFFSET(0x13115080)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_3F89803D8AD99224_OFFSET UNITYSDK_OFFSET(0x13115D10)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_4A1D446C05E55004_OFFSET UNITYSDK_OFFSET(0x13114910)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_69D7496E5C9426C8_OFFSET UNITYSDK_OFFSET(0x131160D0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_719832284D263C8A_1_OFFSET UNITYSDK_OFFSET(0x13115FD0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_719832284D263C8A_OFFSET UNITYSDK_OFFSET(0x13115630)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_8EF141666CE64780_OFFSET UNITYSDK_OFFSET(0x13115A50)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_9E02585D8B79F719_1_OFFSET UNITYSDK_OFFSET(0x13116070)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_9E02585D8B79F719_OFFSET UNITYSDK_OFFSET(0x131148B0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_A9A1B00D058E1E5C_OFFSET UNITYSDK_OFFSET(0x131155E0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_BDCBAF26A89FE7D8_OFFSET UNITYSDK_OFFSET(0x131153F0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_C0C30D21836F5BA0_OFFSET UNITYSDK_OFFSET(0x13114C00)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_D9AEB6A65E88810F_OFFSET UNITYSDK_OFFSET(0x13114ED0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_E514202760092EC6_OFFSET UNITYSDK_OFFSET(0x13114CB0)
#define CLASS_1_B649C3E3DE6F2B59_METHOD_1_EC873399048B3BEB_OFFSET UNITYSDK_OFFSET(0x131151E0)

inline static constexpr unsigned int Class_1_B649C3E3DE6F2B59_TypeDefinitionIndex = 76839;

class Class_1_B649C3E3DE6F2B59 : public ::System::Object
{
public:
	static ::UnityEngine::Transform* Method_1_9E02585D8B79F719(::Class_1_CB7F0487F7A6164A* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_9E02585D8B79F719_OFFSET))(a1, a2);
	}

	static ::Struct_2_FA5F50563E60AFBA Method_1_C0C30D21836F5BA0(::MoleMole::Battle::Entity* a1)
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_C0C30D21836F5BA0_OFFSET))(a1);
	}

	static ::Struct_2_FA5F50563E60AFBA Method_1_0D211C4FC8BC8734(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::Struct_2_FA5F50563E60AFBA(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_0D211C4FC8BC8734_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_3AC0BE81B3A0ED2C(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*& a2, ::System::Boolean a3, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::Class_1_CB7F0487F7A6164A*>*&, ::System::Boolean, ::System::Func_2<::Class_1_CB7F0487F7A6164A*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_3AC0BE81B3A0ED2C_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Transform* Method_1_EC873399048B3BEB(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_EC873399048B3BEB_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_BDCBAF26A89FE7D8(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_BDCBAF26A89FE7D8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A9A1B00D058E1E5C(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::System::Boolean(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_A9A1B00D058E1E5C_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_719832284D263C8A(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_719832284D263C8A_OFFSET))(a1);
	}

	static ::Class_1_CB7F0487F7A6164A* Method_1_E514202760092EC6(::MoleMole::Battle::Entity* a1)
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_E514202760092EC6_OFFSET))(a1);
	}

	static ::System::Nullable_1<::MoleMole::CharacterHUDInfo> Method_1_16318D8E11DEA285(::Class_1_CB7F0487F7A6164A* a1, ::MoleMole::CharacterScriptConfig* a2)
	{
		return ((::System::Nullable_1<::MoleMole::CharacterHUDInfo>(*)(::Class_1_CB7F0487F7A6164A*, ::MoleMole::CharacterScriptConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_16318D8E11DEA285_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_369BB5E7FA6A1768(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::System::Void(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_369BB5E7FA6A1768_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_2E6F9D74E14885B0(::Class_1_CB7F0487F7A6164A* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_2E6F9D74E14885B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8EF141666CE64780(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_8EF141666CE64780_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_3F89803D8AD99224(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3, ::System::Collections::Generic::List_1<::System::String*>* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_3F89803D8AD99224_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Transform* Method_1_719832284D263C8A_1(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_719832284D263C8A_1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_69D7496E5C9426C8(::Class_1_CB7F0487F7A6164A* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_1_CB7F0487F7A6164A*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_69D7496E5C9426C8_OFFSET))(a1);
	}

	static ::UnityEngine::Transform* Method_1_9E02585D8B79F719_1(::Class_1_CB7F0487F7A6164A* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_9E02585D8B79F719_1_OFFSET))(a1, a2);
	}

	static ::UnityEngine::Transform* Method_1_4A1D446C05E55004(::Class_1_CB7F0487F7A6164A* a1, ::Enum_3_28D6F6163F0E0EBC a2, ::UnityEngine::Transform* a3)
	{
		return ((::UnityEngine::Transform*(*)(::Class_1_CB7F0487F7A6164A*, ::Enum_3_28D6F6163F0E0EBC, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_4A1D446C05E55004_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_CB7F0487F7A6164A* Method_1_D9AEB6A65E88810F(::MoleMole::Battle::Entity* a1, ::System::String* a2)
	{
		return ((::Class_1_CB7F0487F7A6164A*(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B649C3E3DE6F2B59_METHOD_1_D9AEB6A65E88810F_OFFSET))(a1, a2);
	}
};
