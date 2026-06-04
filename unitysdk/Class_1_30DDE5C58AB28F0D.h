#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30DDE5C58AB28F0D_StencilPriorit.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_2D2B777435F9F0A5_OFFSET UNITYSDK_OFFSET(0x138BAB20)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x138BB250)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_36D4F6CF261DA1E3_OFFSET UNITYSDK_OFFSET(0x138BAE20)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_377A2B808982808A_OFFSET UNITYSDK_OFFSET(0x138BAD80)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x138BB310)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_4789891C8149F76F_OFFSET UNITYSDK_OFFSET(0x138BAA80)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_883CA0903045EC42_OFFSET UNITYSDK_OFFSET(0x138BB110)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_97792D8FEDF9BD62_OFFSET UNITYSDK_OFFSET(0x138BA790)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_C4E8899A1D27D013_OFFSET UNITYSDK_OFFSET(0x138BB190)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_D4173B09B9D3F573_OFFSET UNITYSDK_OFFSET(0x138BA9E0)
#define CLASS_1_30DDE5C58AB28F0D_METHOD_1_DDA64829D673DB3C_OFFSET UNITYSDK_OFFSET(0x138BA8C0)
#define CLASS_1_30DDE5C58AB28F0D__CCTOR_OFFSET UNITYSDK_OFFSET(0x138BB3F0)
#define CLASS_1_30DDE5C58AB28F0D__CTOR_OFFSET UNITYSDK_OFFSET(0x138BB370)

inline static constexpr unsigned int Class_1_30DDE5C58AB28F0D_TypeDefinitionIndex = 65634;

class Class_1_30DDE5C58AB28F0D : public ::System::Object
{
public:
	static ::Class_1_30DDE5C58AB28F0D** StaticGet_Field_1_0()
	{
		return (::Class_1_30DDE5C58AB28F0D**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30DDE5C58AB28F0D_TypeDefinitionIndex)->GetStaticField(0x62D80);
	}
	// static const ::System::Int32 Field_1_1 = 0x11; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x21; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_4; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D__CCTOR_OFFSET))();
	}

	static ::Class_1_30DDE5C58AB28F0D_StencilPriorit Method_1_97792D8FEDF9BD62(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_30DDE5C58AB28F0D_StencilPriorit(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_97792D8FEDF9BD62_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_DDA64829D673DB3C(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_DDA64829D673DB3C_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_4789891C8149F76F(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_4789891C8149F76F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_377A2B808982808A(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_377A2B808982808A_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_883CA0903045EC42(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_883CA0903045EC42_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	::System::Int32 Method_1_D4173B09B9D3F573(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_D4173B09B9D3F573_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_2D2B777435F9F0A5(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32& a3)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_2D2B777435F9F0A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_36D4F6CF261DA1E3(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_36D4F6CF261DA1E3_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_C4E8899A1D27D013(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_C4E8899A1D27D013_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30DDE5C58AB28F0D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
