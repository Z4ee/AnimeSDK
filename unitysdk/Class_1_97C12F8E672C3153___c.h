#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_97C12F8E672C3153___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCA3990)
#define CLASS_1_97C12F8E672C3153___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBCA39D0)
#define CLASS_1_97C12F8E672C3153___C__SYNCELATIONTEMPLATEID_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCA3A30)
#define CLASS_1_97C12F8E672C3153___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0xBCA39E0)

inline static constexpr unsigned int Class_1_97C12F8E672C3153___c_TypeDefinitionIndex = 65578;

class Class_1_97C12F8E672C3153___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97C12F8E672C3153___c_TypeDefinitionIndex)->GetStaticField(0x5FE80);
	}
	static ::Class_1_97C12F8E672C3153___c** StaticGet___9()
	{
		return (::Class_1_97C12F8E672C3153___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97C12F8E672C3153___c_TypeDefinitionIndex)->GetStaticField(0x5FE88);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97C12F8E672C3153___c_TypeDefinitionIndex)->GetStaticField(0x5FE90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97C12F8E672C3153___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97C12F8E672C3153___C__CTOR_OFFSET))(this);
	}

	::RPG::Client::GridFightEquipItemConfig* _Sync_b__0_0(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97C12F8E672C3153___C__SYNC_B__0_0_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightEquipItemConfig* _SyncElationTemplateID_b__1_0(::System::UInt32 a1)
	{
		return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97C12F8E672C3153___C__SYNCELATIONTEMPLATEID_B__1_0_OFFSET))(this, a1);
	}
};
