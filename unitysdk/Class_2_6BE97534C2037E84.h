#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartend; }
namespace System { class Object; }

#define CLASS_2_6BE97534C2037E84_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E39B70)
#define CLASS_2_6BE97534C2037E84_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x16E39C80)
#define CLASS_2_6BE97534C2037E84_METHOD_2_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0x16E3A060)
#define CLASS_2_6BE97534C2037E84_METHOD_2_F31751E85D234B4D_OFFSET UNITYSDK_OFFSET(0x16E39E60)
#define CLASS_2_6BE97534C2037E84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E39C30)
#define CLASS_2_6BE97534C2037E84_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E39D40)
#define CLASS_2_6BE97534C2037E84_TICK_OFFSET UNITYSDK_OFFSET(0x16E39D90)
#define CLASS_2_6BE97534C2037E84__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E3A150)
#define CLASS_2_6BE97534C2037E84__CTOR_OFFSET UNITYSDK_OFFSET(0x16E399F0)

inline static constexpr unsigned int Class_2_6BE97534C2037E84_TypeDefinitionIndex = 58928;

class Class_2_6BE97534C2037E84 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_EBJECNKIEHA()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_6BE97534C2037E84_TypeDefinitionIndex)->GetStaticField(0x143C0);
	}
	::RPG::GameCore::TriggerDrinkMakerBartend* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::PlayScreenTransfer* FHBIIIIJOCD; // 0x20
	::Struct_2_D3027B1CDFF61281 OLMFJLICIIA; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartend* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartend*))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_F31751E85D234B4D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_METHOD_2_F31751E85D234B4D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BE97534C2037E84_METHOD_2_C9A3013DD208C696_OFFSET))(this);
	}
};
