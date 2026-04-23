#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_2_536CC4186B095618;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_FFAEB1CB334EA88D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E871E0)
#define CLASS_1_FFAEB1CB334EA88D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E87220)
#define CLASS_1_FFAEB1CB334EA88D___C___BUILDSHUFFLELIBRARY_B__21_0_OFFSET UNITYSDK_OFFSET(0x17E87300)
#define CLASS_1_FFAEB1CB334EA88D___C___CREATEBOMBS_B__3_0_OFFSET UNITYSDK_OFFSET(0x17E87230)

inline static constexpr unsigned int Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex = 38562;

class Class_1_FFAEB1CB334EA88D___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_536CC4186B095618*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_2_536CC4186B095618*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex)->GetStaticField(0x182A0);
	}
	static ::Class_1_FFAEB1CB334EA88D___c** StaticGet___9()
	{
		return (::Class_1_FFAEB1CB334EA88D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex)->GetStaticField(0x182A8);
	}
	static ::System::Func_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>, ::System::Boolean>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex)->GetStaticField(0x182B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __CreateBombs_b__3_0(::Class_2_536CC4186B095618* lhs, ::Class_2_536CC4186B095618* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_536CC4186B095618*, ::Class_2_536CC4186B095618*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C___CREATEBOMBS_B__3_0_OFFSET))(this, lhs, rhs);
	}

	::System::Boolean __BuildShuffleLibrary_b__21_0(::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C___BUILDSHUFFLELIBRARY_B__21_0_OFFSET))(this, x);
	}
};
