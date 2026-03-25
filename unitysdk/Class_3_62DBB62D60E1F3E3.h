#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

class Class_2_6A3F10CE86B200DD;
class Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SO_FaceTo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_62DBB62D60E1F3E3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11376680)
#define CLASS_3_62DBB62D60E1F3E3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113760B0)
#define CLASS_3_62DBB62D60E1F3E3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113766D0)
#define CLASS_3_62DBB62D60E1F3E3_TICK_OFFSET UNITYSDK_OFFSET(0x11376570)
#define CLASS_3_62DBB62D60E1F3E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x11376760)
#define CLASS_3_62DBB62D60E1F3E3__CTOR_OFFSET UNITYSDK_OFFSET(0x11375FB0)
#define CLASS_3_62DBB62D60E1F3E3___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x113767A0)

inline static constexpr unsigned int Class_3_62DBB62D60E1F3E3_TypeDefinitionIndex = 42141;

class Class_3_62DBB62D60E1F3E3 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_FaceTo*>
{
public:
	static ::System::Single* StaticGet_Field_3_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_62DBB62D60E1F3E3_TypeDefinitionIndex)->GetStaticField(0xFA20);
	}
	::RPG::GameCore::GameEntity* Field_3_1; // 0x40
	::Class_2_6A3F10CE86B200DD_Class_1_DF76A6160DA1EDC0* Field_3_2; // 0x48
	::Class_2_6A3F10CE86B200DD* Field_3_0; // 0x50
	::System::Single Field_3_4; // 0x58
	::System::UInt32 Field_3_3; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_FaceTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_FaceTo*))((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3__CCTOR_OFFSET))();
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_62DBB62D60E1F3E3___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
