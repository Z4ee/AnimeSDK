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
class Class_3_07C3C4D2990C49EE;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AddModifier; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E8965BE8CAF16159_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1425C2C0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_00453E1C07A98E7D_OFFSET UNITYSDK_OFFSET(0x1425DEE0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_0191A6A799084260_1_OFFSET UNITYSDK_OFFSET(0x1425EAF0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_0191A6A799084260_2_OFFSET UNITYSDK_OFFSET(0x1425EBE0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_0191A6A799084260_OFFSET UNITYSDK_OFFSET(0x1425EA00)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_158635B985A9D21E_OFFSET UNITYSDK_OFFSET(0x1425E0D0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_34E9B7250A33E03C_OFFSET UNITYSDK_OFFSET(0x1425ECE0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_706B05DC5285CB8A_OFFSET UNITYSDK_OFFSET(0x1425EF10)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_96AD37F9B41ADA98_OFFSET UNITYSDK_OFFSET(0x1425DDF0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_9E8D8AD7221BE54C_OFFSET UNITYSDK_OFFSET(0x1425E6F0)
#define CLASS_3_E8965BE8CAF16159_METHOD_3_F7B6CBEAF35C2D88_OFFSET UNITYSDK_OFFSET(0x1425F150)
#define CLASS_3_E8965BE8CAF16159_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1425C380)
#define CLASS_3_E8965BE8CAF16159__CTOR_OFFSET UNITYSDK_OFFSET(0x1425C160)
#define CLASS_3_E8965BE8CAF16159___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1425F390)

inline static constexpr unsigned int Class_3_E8965BE8CAF16159_TypeDefinitionIndex = 51244;

class Class_3_E8965BE8CAF16159 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddModifier*>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* Field_3_0; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_3_1; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_3_2; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_3_4; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddModifier*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_706B05DC5285CB8A(::Class_3_07C3C4D2990C49EE* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07C3C4D2990C49EE*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_706B05DC5285CB8A_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Method_3_158635B985A9D21E(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>*(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_158635B985A9D21E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>* Method_3_9E8D8AD7221BE54C()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_ABC67D4EFBF3BD9A_1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_9E8D8AD7221BE54C_OFFSET))(this);
	}

	::Class_2_1DB6C02CA182EEBA* Method_3_00453E1C07A98E7D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_1DB6C02CA182EEBA*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_00453E1C07A98E7D_OFFSET))(this, a1);
	}

	::Class_1_047E76510D731D92* Method_3_96AD37F9B41ADA98(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::Class_1_047E76510D731D92*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_96AD37F9B41ADA98_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_3_34E9B7250A33E03C(::Class_1_047E76510D731D92* a1, ::RPG::PoolList_1<::Class_1_812813014E8C3777*>* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_047E76510D731D92*, ::RPG::PoolList_1<::Class_1_812813014E8C3777*>*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_34E9B7250A33E03C_OFFSET))(this, a1, a2);
	}

	::System::Nullable_1<::System::Int32> Method_3_0191A6A799084260(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_0191A6A799084260_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_0191A6A799084260_1(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_0191A6A799084260_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_0191A6A799084260_2(::Class_1_047E76510D731D92* a1)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_0191A6A799084260_2_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Int32> Method_3_F7B6CBEAF35C2D88(::Class_1_047E76510D731D92* a1, ::RPG::GameCore::DynamicFloat* a2, ::Struct_2_36399DCF74B23261 a3)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::Class_1_047E76510D731D92*, ::RPG::GameCore::DynamicFloat*, ::Struct_2_36399DCF74B23261))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159_METHOD_3_F7B6CBEAF35C2D88_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E8965BE8CAF16159___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
