#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_F400FB9D2D9DA921;
class Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SO_FaceTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3E1C86DE5600146D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165E5200)
#define CLASS_3_3E1C86DE5600146D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165E4B20)
#define CLASS_3_3E1C86DE5600146D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165E5250)
#define CLASS_3_3E1C86DE5600146D_TICK_OFFSET UNITYSDK_OFFSET(0x165E50F0)
#define CLASS_3_3E1C86DE5600146D__CCTOR_OFFSET UNITYSDK_OFFSET(0x165E52E0)
#define CLASS_3_3E1C86DE5600146D__CTOR_OFFSET UNITYSDK_OFFSET(0x165E4A80)

inline static constexpr unsigned int Class_3_3E1C86DE5600146D_TypeDefinitionIndex = 52405;

class Class_3_3E1C86DE5600146D : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_FaceTo*>
{
public:
	static ::System::Single* StaticGet_MNGOKJIFOOH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3E1C86DE5600146D_TypeDefinitionIndex)->GetStaticField(0x82A0);
	}
	::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x40
	::Class_2_F400FB9D2D9DA921* HNHCPOJKNCC; // 0x48
	::Class_2_F400FB9D2D9DA921_Class_1_5ED903387A1D6426* HDIAPOOCACN; // 0x50
	::System::UInt32 LCAOJIDMINA; // 0x58
	::System::Single OPBDPOCJCKB; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_FaceTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + CLASS_3_3E1C86DE5600146D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3E1C86DE5600146D__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E1C86DE5600146D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3E1C86DE5600146D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E1C86DE5600146D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E1C86DE5600146D_ONTASKRESET_OFFSET))(this);
	}
};
