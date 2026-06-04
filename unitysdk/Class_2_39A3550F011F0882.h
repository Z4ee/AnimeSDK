#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartend; }
namespace System { class Object; }

#define CLASS_2_39A3550F011F0882_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC3E7E0)
#define CLASS_2_39A3550F011F0882_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0xBC3E8F0)
#define CLASS_2_39A3550F011F0882_METHOD_2_66E24502C9FA6732_OFFSET UNITYSDK_OFFSET(0xBC3EAD0)
#define CLASS_2_39A3550F011F0882_METHOD_2_C9A3013DD208C696_OFFSET UNITYSDK_OFFSET(0xBC3EC70)
#define CLASS_2_39A3550F011F0882_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC3E8A0)
#define CLASS_2_39A3550F011F0882_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC3E9B0)
#define CLASS_2_39A3550F011F0882_TICK_OFFSET UNITYSDK_OFFSET(0xBC3EA00)
#define CLASS_2_39A3550F011F0882__CCTOR_OFFSET UNITYSDK_OFFSET(0xBC3ED60)
#define CLASS_2_39A3550F011F0882__CTOR_OFFSET UNITYSDK_OFFSET(0xBC3E640)

inline static constexpr unsigned int Class_2_39A3550F011F0882_TypeDefinitionIndex = 54919;

class Class_2_39A3550F011F0882 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_39A3550F011F0882_TypeDefinitionIndex)->GetStaticField(0x12150);
	}
	::Struct_2_D3027B1CDFF61281 Field_2_1; // 0x18
	::RPG::GameCore::PlayScreenTransfer* Field_2_2; // 0x48
	::RPG::GameCore::TaskContext* Field_2_3; // 0x50
	::RPG::GameCore::TriggerDrinkMakerBartend* Field_2_4; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartend* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartend*))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_66E24502C9FA6732(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_METHOD_2_66E24502C9FA6732_OFFSET))(this, a1);
	}

	::System::Void Method_2_C9A3013DD208C696()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_METHOD_2_C9A3013DD208C696_OFFSET))(this);
	}
};
