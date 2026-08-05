#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8C3326BB658EF7C4_Enum_3_797210DF3C1FEA90.h"
#include "unitysdk/Class_1_8C3326BB658EF7C4_Struct_2_0AFF4972FB25A51D.h"
#include "unitysdk/Class_1_8C3326BB658EF7C4_Struct_2_F3EC3463E6D19B4A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_8C3326BB658EF7C4_METHOD_1_1E57B5458C74C888_OFFSET UNITYSDK_OFFSET(0x14049DE0)
#define CLASS_1_8C3326BB658EF7C4_METHOD_1_2456806F08D5BB99_OFFSET UNITYSDK_OFFSET(0x14049B10)
#define CLASS_1_8C3326BB658EF7C4_METHOD_1_582D235A1A742FF4_OFFSET UNITYSDK_OFFSET(0x14049D00)
#define CLASS_1_8C3326BB658EF7C4_METHOD_1_8973B6E20FF061EF_OFFSET UNITYSDK_OFFSET(0x1404A3C0)
#define CLASS_1_8C3326BB658EF7C4_METHOD_1_E37A32491513531F_OFFSET UNITYSDK_OFFSET(0x1404A120)
#define CLASS_1_8C3326BB658EF7C4_METHOD_1_EFA6B049428278BC_OFFSET UNITYSDK_OFFSET(0x1404AB40)
#define CLASS_1_8C3326BB658EF7C4__CCTOR_OFFSET UNITYSDK_OFFSET(0x14049A60)

inline static constexpr unsigned int Class_1_8C3326BB658EF7C4_TypeDefinitionIndex = 42962;

class Class_1_8C3326BB658EF7C4 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3326BB658EF7C4_TypeDefinitionIndex)->GetStaticField(0x444F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4__CCTOR_OFFSET))();
	}

	static ::Class_1_8C3326BB658EF7C4_Enum_3_797210DF3C1FEA90 Method_1_2456806F08D5BB99(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Class_1_8C3326BB658EF7C4_Enum_3_797210DF3C1FEA90(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_METHOD_1_2456806F08D5BB99_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_1E57B5458C74C888(::UnityEngine::Vector3 a1, ::UnityEngine::Color a2, ::System::Single a3)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_METHOD_1_1E57B5458C74C888_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_E37A32491513531F(::System::ValueTuple_2<::System::Int32, ::System::Int32>& a1, ::Class_1_8C3326BB658EF7C4_Struct_2_F3EC3463E6D19B4A& a2, ::Class_1_8C3326BB658EF7C4_Struct_2_0AFF4972FB25A51D& a3)
	{
		return ((::System::Boolean(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>&, ::Class_1_8C3326BB658EF7C4_Struct_2_F3EC3463E6D19B4A&, ::Class_1_8C3326BB658EF7C4_Struct_2_0AFF4972FB25A51D&))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_METHOD_1_E37A32491513531F_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Method_1_8973B6E20FF061EF(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& a3, ::System::Int32 a4, ::System::Int32 a5, ::MoleMole::Vector2Int a6, ::MoleMole::Vector2Int a7)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&, ::System::Int32, ::System::Int32, ::MoleMole::Vector2Int, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_METHOD_1_8973B6E20FF061EF_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_1_EFA6B049428278BC(::MoleMole::HollowChessboard::HollowCell a1, ::Class_1_8C3326BB658EF7C4_Struct_2_F3EC3463E6D19B4A& a2)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::MoleMole::HollowChessboard::HollowCell, ::Class_1_8C3326BB658EF7C4_Struct_2_F3EC3463E6D19B4A&))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_METHOD_1_EFA6B049428278BC_OFFSET))(a1, a2);
	}

	static ::Class_1_8C3326BB658EF7C4_Enum_3_797210DF3C1FEA90 Method_1_582D235A1A742FF4(::UnityEngine::Vector2 a1)
	{
		return ((::Class_1_8C3326BB658EF7C4_Enum_3_797210DF3C1FEA90(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_8C3326BB658EF7C4_METHOD_1_582D235A1A742FF4_OFFSET))(a1);
	}
};
