#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9C155797477B005D_Struct_2_BBD456EBC9087BC2_4.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_827373C1CEDFE355;
class Class_1_9C155797477B005D_Class_1_80714773511AC362;
class Class_1_9C155797477B005D_Class_1_EB7A19B104A7CE05;
class Class_2_7F8F5F0272BE5351;
namespace RPG::GameCore { class StageBattleEventConfig; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9C155797477B005D_METHOD_1_2CB0347CE8B361B1_OFFSET UNITYSDK_OFFSET(0x9600B70)
#define CLASS_1_9C155797477B005D_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x96001B0)
#define CLASS_1_9C155797477B005D_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x9601510)
#define CLASS_1_9C155797477B005D_METHOD_1_442EAFDC62E911C7_OFFSET UNITYSDK_OFFSET(0x9600530)
#define CLASS_1_9C155797477B005D_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x9601140)
#define CLASS_1_9C155797477B005D_METHOD_1_5B814E0B66463EE9_OFFSET UNITYSDK_OFFSET(0x9600CC0)
#define CLASS_1_9C155797477B005D_METHOD_1_60ED8754CD8AF7CE_OFFSET UNITYSDK_OFFSET(0x96013E0)
#define CLASS_1_9C155797477B005D_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x9600160)
#define CLASS_1_9C155797477B005D_METHOD_1_8F60F8EA8A4B6E2F_OFFSET UNITYSDK_OFFSET(0x9600970)
#define CLASS_1_9C155797477B005D_METHOD_1_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0x9600480)
#define CLASS_1_9C155797477B005D_METHOD_1_ED764CD8DF8D2D04_OFFSET UNITYSDK_OFFSET(0x9600260)
#define CLASS_1_9C155797477B005D_METHOD_1_ED7CF579689BEC5E_OFFSET UNITYSDK_OFFSET(0x9600EC0)
#define CLASS_1_9C155797477B005D_METHOD_1_EE5D71FBB4261BF2_OFFSET UNITYSDK_OFFSET(0x9601500)
#define CLASS_1_9C155797477B005D__CTOR_OFFSET UNITYSDK_OFFSET(0x9600100)

inline static constexpr unsigned int Class_1_9C155797477B005D_TypeDefinitionIndex = 51791;

class Class_1_9C155797477B005D : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_5 = 0x14; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9C155797477B005D_Class_1_80714773511AC362*>* Field_1_1; // 0x18
	::Class_2_7F8F5F0272BE5351* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::Class_1_9C155797477B005D_Class_1_EB7A19B104A7CE05*>* Field_1_2; // 0x28
	::System::Int32 Field_1_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_ED764CD8DF8D2D04(::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageBattleEventConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_ED764CD8DF8D2D04_OFFSET))(this, a1);
	}

	::System::Void Method_1_442EAFDC62E911C7(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_442EAFDC62E911C7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2CB0347CE8B361B1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_2CB0347CE8B361B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B814E0B66463EE9(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_5B814E0B66463EE9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_EA7C9571288E1295()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_EA7C9571288E1295_OFFSET))(this);
	}

	::System::Void Method_1_8F60F8EA8A4B6E2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_8F60F8EA8A4B6E2F_OFFSET))(this);
	}

	::System::Void Method_1_ED7CF579689BEC5E(::RPG::GameCore::StageBattleEventRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_ED7CF579689BEC5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_1_60ED8754CD8AF7CE(::Class_1_9C155797477B005D_Struct_2_BBD456EBC9087BC2_4& a1, ::Class_1_827373C1CEDFE355* a2, ::System::Int32 a3, ::System::Int32 a4, ::RPG::GameCore::FixPoint a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C155797477B005D_Struct_2_BBD456EBC9087BC2_4&, ::Class_1_827373C1CEDFE355*, ::System::Int32, ::System::Int32, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_60ED8754CD8AF7CE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::Class_1_9C155797477B005D_Class_1_EB7A19B104A7CE05*>* Method_1_EE5D71FBB4261BF2()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9C155797477B005D_Class_1_EB7A19B104A7CE05*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_EE5D71FBB4261BF2_OFFSET))(this);
	}

	::Class_2_7F8F5F0272BE5351* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_7F8F5F0272BE5351*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9C155797477B005D_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}
};
