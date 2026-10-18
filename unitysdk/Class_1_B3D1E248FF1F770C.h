#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5A70B04B36C288E4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_0A972FE8328AB478;
class Class_1_3CFD07DFD0180CDE;
class Class_1_45CA56C59C8BBBC0;
class Class_1_D51370543413EDD9;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_B3D1E248FF1F770C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C5C970)
#define CLASS_1_B3D1E248FF1F770C_GET_BUFFAREA_OFFSET UNITYSDK_OFFSET(0x15C5BFD0)
#define CLASS_1_B3D1E248FF1F770C_GET_GROUND_OFFSET UNITYSDK_OFFSET(0x15C5BFB0)
#define CLASS_1_B3D1E248FF1F770C_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15C5BF90)
#define CLASS_1_B3D1E248FF1F770C_METHOD_1_72D29B7F01E371DB_OFFSET UNITYSDK_OFFSET(0x15C5C000)
#define CLASS_1_B3D1E248FF1F770C_SET_BUFFAREA_OFFSET UNITYSDK_OFFSET(0x15C5BFE0)
#define CLASS_1_B3D1E248FF1F770C_SET_GROUND_OFFSET UNITYSDK_OFFSET(0x15C5BFC0)
#define CLASS_1_B3D1E248FF1F770C_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x15C5BFA0)
#define CLASS_1_B3D1E248FF1F770C__CTOR_OFFSET UNITYSDK_OFFSET(0x15C5BFF0)
#define CLASS_1_B3D1E248FF1F770C__INIT_B__15_0_OFFSET UNITYSDK_OFFSET(0x15C5CB90)
#define CLASS_1_B3D1E248FF1F770C__INIT_B__15_1_OFFSET UNITYSDK_OFFSET(0x15C5CBB0)
#define CLASS_1_B3D1E248FF1F770C__INIT_B__15_2_OFFSET UNITYSDK_OFFSET(0x15C5CBD0)

inline static constexpr unsigned int Class_1_B3D1E248FF1F770C_TypeDefinitionIndex = 79458;

class Class_1_B3D1E248FF1F770C : public ::System::Object
{
public:
	::Class_1_45CA56C59C8BBBC0* JOKBAPFCJFM; // 0x10
	::Class_1_D51370543413EDD9* _BuffArea_k__BackingField; // 0x18
	::Class_1_0A972FE8328AB478* _Ground_k__BackingField; // 0x20
	::System::Int32 _Level_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_45CA56C59C8BBBC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45CA56C59C8BBBC0*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_Level()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_SET_LEVEL_OFFSET))(this, a1);
	}

	::Class_1_0A972FE8328AB478* get_Ground()
	{
		return ((::Class_1_0A972FE8328AB478*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_GET_GROUND_OFFSET))(this);
	}

	::System::Void set_Ground(::Class_1_0A972FE8328AB478* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A972FE8328AB478*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_SET_GROUND_OFFSET))(this, a1);
	}

	::Class_1_D51370543413EDD9* get_BuffArea()
	{
		return ((::Class_1_D51370543413EDD9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_GET_BUFFAREA_OFFSET))(this);
	}

	::System::Void set_BuffArea(::Class_1_D51370543413EDD9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D51370543413EDD9*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_SET_BUFFAREA_OFFSET))(this, a1);
	}

	::System::Void Method_1_72D29B7F01E371DB(::System::Collections::Generic::IEnumerable_1<::Class_1_3CFD07DFD0180CDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3CFD07DFD0180CDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_METHOD_1_72D29B7F01E371DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C_DISPOSE_OFFSET))(this);
	}

	::System::Void _Init_b__15_0(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C__INIT_B__15_0_OFFSET))(this, a1);
	}

	::System::Void _Init_b__15_1(::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::Struct_2_5A70B04B36C288E4>*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C__INIT_B__15_1_OFFSET))(this, a1);
	}

	::System::Void _Init_b__15_2(::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_B3D1E248FF1F770C__INIT_B__15_2_OFFSET))(this, a1);
	}
};
