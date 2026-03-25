#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartend; }
namespace System { class Object; }

#define CLASS_2_39A3550F011F0882_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B3B230)
#define CLASS_2_39A3550F011F0882_METHOD_2_66E24502C9FA6732_OFFSET UNITYSDK_OFFSET(0x10B3B4E0)
#define CLASS_2_39A3550F011F0882_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x10B3B320)
#define CLASS_2_39A3550F011F0882_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x10B3B680)
#define CLASS_2_39A3550F011F0882_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10B3B2D0)
#define CLASS_2_39A3550F011F0882_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10B3B3C0)
#define CLASS_2_39A3550F011F0882_TICK_OFFSET UNITYSDK_OFFSET(0x10B3B410)
#define CLASS_2_39A3550F011F0882__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B3B770)
#define CLASS_2_39A3550F011F0882__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3B090)

inline static constexpr unsigned int Class_2_39A3550F011F0882_TypeDefinitionIndex = 47458;

class Class_2_39A3550F011F0882 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::RPG::GameCore::StringHash* StaticGet_Field_2_4()
	{
		return (::RPG::GameCore::StringHash*)Il2CppClass::FromTypeDefinitionIndex(Class_2_39A3550F011F0882_TypeDefinitionIndex)->GetStaticField(0x12990);
	}
	::RPG::GameCore::TriggerDrinkMakerBartend* Field_2_0; // 0x18
	::RPG::GameCore::PlayScreenTransfer* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::Struct_2_D3027B1CDFF61281 Field_2_2; // 0x30

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

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_66E24502C9FA6732(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_METHOD_2_66E24502C9FA6732_OFFSET))(this, a1);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_39A3550F011F0882_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}
};
