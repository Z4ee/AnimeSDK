#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7256E7A2FB36A46D.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_11.h"

class Class_1_303D5A33D1401D59;
class Class_1_8A6989C352B0F0F0;
class Class_1_D70A30D666F20D90;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_5249A687EF283E82_METHOD_2_0E3CE3A1EF39D341_OFFSET UNITYSDK_OFFSET(0x15F71AC0)
#define CLASS_2_5249A687EF283E82_METHOD_2_1F9F47E77F8E8B89_OFFSET UNITYSDK_OFFSET(0x15F70CA0)
#define CLASS_2_5249A687EF283E82_METHOD_2_24DE93ACA5879EE9_OFFSET UNITYSDK_OFFSET(0x15F716D0)
#define CLASS_2_5249A687EF283E82_METHOD_2_38B87DF72494917C_OFFSET UNITYSDK_OFFSET(0x15F711F0)
#define CLASS_2_5249A687EF283E82_METHOD_2_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x15F70930)
#define CLASS_2_5249A687EF283E82_METHOD_2_69B92863E537BE46_OFFSET UNITYSDK_OFFSET(0x15F70EB0)
#define CLASS_2_5249A687EF283E82_METHOD_2_8E22B572EA9F050D_OFFSET UNITYSDK_OFFSET(0x15F71940)
#define CLASS_2_5249A687EF283E82_METHOD_2_B07DE1EF7C51132D_OFFSET UNITYSDK_OFFSET(0x15F71360)
#define CLASS_2_5249A687EF283E82_METHOD_2_E475D32794623218_OFFSET UNITYSDK_OFFSET(0x15F714D0)
#define CLASS_2_5249A687EF283E82__CTOR_OFFSET UNITYSDK_OFFSET(0x15F707B0)

inline static constexpr unsigned int Class_2_5249A687EF283E82_TypeDefinitionIndex = 70506;

class Class_2_5249A687EF283E82 : public ::Class_1_7256E7A2FB36A46D
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_303D5A33D1401D59*>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::Struct_2_CC45B4503679E14E_11>*>* Field_2_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Struct_2_CC45B4503679E14E_10>* Field_2_2; // 0x28

	::System::Void _ctor(::Class_1_D70A30D666F20D90* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_2_1F9F47E77F8E8B89(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::Struct_2_CC45B4503679E14E_10 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_1F9F47E77F8E8B89_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_69B92863E537BE46(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::Struct_2_CC45B4503679E14E_11 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Struct_2_CC45B4503679E14E_11))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_69B92863E537BE46_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_38B87DF72494917C(::Class_1_303D5A33D1401D59* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_38B87DF72494917C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_24DE93ACA5879EE9(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_24DE93ACA5879EE9_OFFSET))(this, a1);
	}

	::System::Void Method_2_8E22B572EA9F050D(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_8E22B572EA9F050D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E475D32794623218(::UnityEngine::GameObject* a1, ::Struct_2_CC45B4503679E14E_10 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_E475D32794623218_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0E3CE3A1EF39D341(::UnityEngine::GameObject* a1, ::Struct_2_CC45B4503679E14E_10 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_0E3CE3A1EF39D341_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B07DE1EF7C51132D(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::Struct_2_CC45B4503679E14E_11>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::Struct_2_CC45B4503679E14E_11>*))((::PBYTE)hIl2Cpp + CLASS_2_5249A687EF283E82_METHOD_2_B07DE1EF7C51132D_OFFSET))(this, a1, a2);
	}
};
