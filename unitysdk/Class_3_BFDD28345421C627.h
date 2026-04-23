#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_36399DCF74B23261.h"
#include "unitysdk/Struct_2_ABC67D4EFBF3BD9A_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_047E76510D731D92;
class Class_1_812813014E8C3777;
class Class_2_1DB6C02CA182EEBA;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AddModifier; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BFDD28345421C627_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11992D80)
#define CLASS_3_BFDD28345421C627_METHOD_3_123E983ECABE89A4_OFFSET UNITYSDK_OFFSET(0x11994D40)
#define CLASS_3_BFDD28345421C627_METHOD_3_2D9495403E0B7274_OFFSET UNITYSDK_OFFSET(0x11994B50)
#define CLASS_3_BFDD28345421C627_METHOD_3_5C529C2B1A36B30D_1_OFFSET UNITYSDK_OFFSET(0x11995940)
#define CLASS_3_BFDD28345421C627_METHOD_3_5C529C2B1A36B30D_2_OFFSET UNITYSDK_OFFSET(0x11995AE0)
#define CLASS_3_BFDD28345421C627_METHOD_3_5C529C2B1A36B30D_OFFSET UNITYSDK_OFFSET(0x119957A0)
#define CLASS_3_BFDD28345421C627_METHOD_3_635AA329AC37FF14_OFFSET UNITYSDK_OFFSET(0x119961B0)
#define CLASS_3_BFDD28345421C627_METHOD_3_706B05DC5285CB8A_OFFSET UNITYSDK_OFFSET(0x11995F60)
#define CLASS_3_BFDD28345421C627_METHOD_3_96AD37F9B41ADA98_OFFSET UNITYSDK_OFFSET(0x11994A60)
#define CLASS_3_BFDD28345421C627_METHOD_3_9FDD23E2C221D062_OFFSET UNITYSDK_OFFSET(0x11995C80)
#define CLASS_3_BFDD28345421C627_METHOD_3_CF969D3A15AF436B_OFFSET UNITYSDK_OFFSET(0x11995440)
#define CLASS_3_BFDD28345421C627_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11992E40)
#define CLASS_3_BFDD28345421C627__CTOR_OFFSET UNITYSDK_OFFSET(0x11992C20)
#define CLASS_3_BFDD28345421C627___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11996640)

inline static constexpr unsigned int Class_3_BFDD28345421C627_TypeDefinitionIndex = 50577;

class Class_3_BFDD28345421C627 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddModifier*>
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_3_2; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x30
	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* Field_3_4; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_3_0; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_3_3; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddModifier*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_706B05DC5285CB8A(::Class_3_E21F6DE9B7FA4D05* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E21F6DE9B7FA4D05*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_706B05DC5285CB8A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Method_3_123E983ECABE89A4(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_123E983ECABE89A4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* Method_3_CF969D3A15AF436B()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_CF969D3A15AF436B_OFFSET))(this);
	}

	::Class_2_1DB6C02CA182EEBA* Method_3_2D9495403E0B7274(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_2D9495403E0B7274_OFFSET))(this, a1);
	}

	::Class_1_047E76510D731D92* Method_3_96AD37F9B41ADA98(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::Class_1_047E76510D731D92*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_96AD37F9B41ADA98_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_3_9FDD23E2C221D062(::Class_1_047E76510D731D92* a1, ::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_047E76510D731D92*, ::RPG::PoolList_1<::Class_1_812813014E8C3777*>*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_9FDD23E2C221D062_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Int32> Method_3_5C529C2B1A36B30D(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_5C529C2B1A36B30D_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_5C529C2B1A36B30D_1(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_5C529C2B1A36B30D_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_5C529C2B1A36B30D_2(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_5C529C2B1A36B30D_2_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_635AA329AC37FF14(::Class_1_047E76510D731D92* a1, ::RPG::GameCore::DynamicFloat* a2, ::Struct_2_36399DCF74B23261 a3)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*, ::RPG::GameCore::DynamicFloat*, ::Struct_2_36399DCF74B23261))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627_METHOD_3_635AA329AC37FF14_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFDD28345421C627___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
