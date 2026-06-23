#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8A18E5655460685_Struct_2_C4BACA0F63C490F1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectDistributeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A8A18E5655460685_METHOD_1_86A86AD4C14C8702_OFFSET UNITYSDK_OFFSET(0x1413FDB0)
#define CLASS_1_A8A18E5655460685_METHOD_1_9F1B6D226C67192B_OFFSET UNITYSDK_OFFSET(0x141405C0)
#define CLASS_1_A8A18E5655460685_METHOD_1_A09E8859E57D727B_OFFSET UNITYSDK_OFFSET(0x1413F540)
#define CLASS_1_A8A18E5655460685_METHOD_1_AB26836A5ADFE52B_OFFSET UNITYSDK_OFFSET(0x14140420)
#define CLASS_1_A8A18E5655460685_METHOD_1_E7C3B755825B5DA6_OFFSET UNITYSDK_OFFSET(0x1413F380)
#define CLASS_1_A8A18E5655460685_METHOD_1_EAD322D9B10910DB_OFFSET UNITYSDK_OFFSET(0x1413F9C0)
#define CLASS_1_A8A18E5655460685__CTOR_OFFSET UNITYSDK_OFFSET(0x1413F370)

inline static constexpr unsigned int Class_1_A8A18E5655460685_TypeDefinitionIndex = 87040;

class Class_1_A8A18E5655460685 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x64; // 0x0
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_9; // 0x18
	::System::Single Field_1_6; // 0x20
	::System::Single Field_1_5; // 0x24
	::System::Single Field_1_7; // 0x28
	::System::Single Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E7C3B755825B5DA6(::UnityEngine::Vector2 a1, ::Class_1_A8A18E5655460685_Struct_2_C4BACA0F63C490F1& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::Class_1_A8A18E5655460685_Struct_2_C4BACA0F63C490F1&))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685_METHOD_1_E7C3B755825B5DA6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_A09E8859E57D727B(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685_METHOD_1_A09E8859E57D727B_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_86A86AD4C14C8702(::System::Single a1, ::System::Single a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectDistributeConfig*>* a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectDistributeConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685_METHOD_1_86A86AD4C14C8702_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector2 Method_1_9F1B6D226C67192B(::Class_1_A8A18E5655460685_Struct_2_C4BACA0F63C490F1& a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_A8A18E5655460685_Struct_2_C4BACA0F63C490F1&))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685_METHOD_1_9F1B6D226C67192B_OFFSET))(this, a1);
	}

	::System::Void Method_1_AB26836A5ADFE52B(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685_METHOD_1_AB26836A5ADFE52B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_EAD322D9B10910DB(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_A8A18E5655460685_METHOD_1_EAD322D9B10910DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
