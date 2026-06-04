#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_1_66B8E3396BDA68B8;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A1A6E2502BE730AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142EB9E0)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_6398A8B4AB096BB5_1_OFFSET UNITYSDK_OFFSET(0x142EC200)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_6398A8B4AB096BB5_OFFSET UNITYSDK_OFFSET(0x142EBF70)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_93E58BE823AB19F6_OFFSET UNITYSDK_OFFSET(0x142EBC90)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_C76FBF5BDDCD86A3_OFFSET UNITYSDK_OFFSET(0x142EBB10)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x142EC490)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_E3D854E5F21563DF_OFFSET UNITYSDK_OFFSET(0x142EBE10)
#define CLASS_2_A1A6E2502BE730AC_METHOD_2_F22EA65A7CE5535A_OFFSET UNITYSDK_OFFSET(0x142EC560)
#define CLASS_2_A1A6E2502BE730AC__CTOR_OFFSET UNITYSDK_OFFSET(0x142EB8D0)

inline static constexpr unsigned int Class_2_A1A6E2502BE730AC_TypeDefinitionIndex = 54127;

class Class_2_A1A6E2502BE730AC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_66B8E3396BDA68B8*>* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_93E58BE823AB19F6(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_93E58BE823AB19F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3D854E5F21563DF(::RPG::GameCore::TaskContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_E3D854E5F21563DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_6398A8B4AB096BB5(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_6398A8B4AB096BB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_C76FBF5BDDCD86A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_C76FBF5BDDCD86A3_OFFSET))(this);
	}

	::System::Void Method_2_6398A8B4AB096BB5_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_6398A8B4AB096BB5_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_2_F22EA65A7CE5535A(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_A1A6E2502BE730AC_METHOD_2_F22EA65A7CE5535A_OFFSET))(this, a1);
	}
};
