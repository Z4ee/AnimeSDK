#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_2_4706D3AD6019CD01;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_FFAEB1CB334EA88D___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13B8A0)
#define CLASS_1_FFAEB1CB334EA88D___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13B8E0)
#define CLASS_1_FFAEB1CB334EA88D___C___BUILDSHUFFLELIBRARY_B__21_0_OFFSET UNITYSDK_OFFSET(0x1C13B9C0)
#define CLASS_1_FFAEB1CB334EA88D___C___CREATEBOMBS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C13B8F0)

inline static constexpr unsigned int Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex = 41017;

class Class_1_FFAEB1CB334EA88D___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>, ::System::Boolean>** StaticGet___9__21_0()
	{
		return (::System::Func_2<::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex)->GetStaticField(0x1E590);
	}
	static ::Class_1_FFAEB1CB334EA88D___c** StaticGet___9()
	{
		return (::Class_1_FFAEB1CB334EA88D___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex)->GetStaticField(0x1E598);
	}
	static ::System::Comparison_1<::Class_2_4706D3AD6019CD01*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::Class_2_4706D3AD6019CD01*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFAEB1CB334EA88D___c_TypeDefinitionIndex)->GetStaticField(0x1E5A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __CreateBombs_b__3_0(::Class_2_4706D3AD6019CD01* a1, ::Class_2_4706D3AD6019CD01* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Class_2_4706D3AD6019CD01*))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C___CREATEBOMBS_B__3_0_OFFSET))(this, a1, a2);
	}

	::System::Boolean __BuildShuffleLibrary_b__21_0(::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_3<::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag>))((::PBYTE)hIl2Cpp + CLASS_1_FFAEB1CB334EA88D___C___BUILDSHUFFLELIBRARY_B__21_0_OFFSET))(this, a1);
	}
};
