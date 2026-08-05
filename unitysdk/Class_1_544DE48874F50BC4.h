#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_544DE48874F50BC4_Struct_2_C4BACA0F63C490F1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigHollowChessboard_ItemCollectDistributeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_544DE48874F50BC4_METHOD_1_1699C24804DB9468_OFFSET UNITYSDK_OFFSET(0x13498060)
#define CLASS_1_544DE48874F50BC4_METHOD_1_83D4021FFB74B498_OFFSET UNITYSDK_OFFSET(0x13498180)
#define CLASS_1_544DE48874F50BC4_METHOD_1_8896E12C41003914_OFFSET UNITYSDK_OFFSET(0x13498A20)
#define CLASS_1_544DE48874F50BC4_METHOD_1_9F1B6D226C67192B_OFFSET UNITYSDK_OFFSET(0x134989A0)
#define CLASS_1_544DE48874F50BC4_METHOD_1_A09E8859E57D727B_OFFSET UNITYSDK_OFFSET(0x13498DA0)
#define CLASS_1_544DE48874F50BC4_METHOD_1_AB26836A5ADFE52B_OFFSET UNITYSDK_OFFSET(0x134987F0)
#define CLASS_1_544DE48874F50BC4__CTOR_OFFSET UNITYSDK_OFFSET(0x13498050)

inline static constexpr unsigned int Class_1_544DE48874F50BC4_TypeDefinitionIndex = 56345;

class Class_1_544DE48874F50BC4 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1E; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Int32 Field_1_14 = 0x64; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Field_1_15; // 0x10
	::Il2CppArray<::System::Int32>* Field_1_4; // 0x18
	::System::Single Field_1_11; // 0x20
	::System::Single Field_1_10; // 0x24
	::System::Single Field_1_9; // 0x28
	::System::Single Field_1_8; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1699C24804DB9468(::UnityEngine::Vector2 a1, ::Class_1_544DE48874F50BC4_Struct_2_C4BACA0F63C490F1& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::Class_1_544DE48874F50BC4_Struct_2_C4BACA0F63C490F1&))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4_METHOD_1_1699C24804DB9468_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_83D4021FFB74B498(::System::Single a1, ::System::Single a2, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectDistributeConfig*>* a3, ::System::Int32 a4)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowChessboard_ItemCollectDistributeConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4_METHOD_1_83D4021FFB74B498_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector2 Method_1_9F1B6D226C67192B(::Class_1_544DE48874F50BC4_Struct_2_C4BACA0F63C490F1& a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::Class_1_544DE48874F50BC4_Struct_2_C4BACA0F63C490F1&))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4_METHOD_1_9F1B6D226C67192B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8896E12C41003914(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4_METHOD_1_8896E12C41003914_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_AB26836A5ADFE52B(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4_METHOD_1_AB26836A5ADFE52B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Method_1_A09E8859E57D727B(::System::Single a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_544DE48874F50BC4_METHOD_1_A09E8859E57D727B_OFFSET))(this, a1, a2, a3);
	}
};
