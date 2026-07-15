#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class CharacterPlayVO; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F7C2986DCB25FBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F2E790)
#define CLASS_2_2F7C2986DCB25FBE_METHOD_2_04494A59ADCD014E_OFFSET UNITYSDK_OFFSET(0x16F2EB20)
#define CLASS_2_2F7C2986DCB25FBE_METHOD_2_5AD7EA9F1126DF19_OFFSET UNITYSDK_OFFSET(0x16F2EE10)
#define CLASS_2_2F7C2986DCB25FBE_METHOD_2_DE18C695F9CF259F_OFFSET UNITYSDK_OFFSET(0x16F2ED30)
#define CLASS_2_2F7C2986DCB25FBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F2E7D0)
#define CLASS_2_2F7C2986DCB25FBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F2EC80)
#define CLASS_2_2F7C2986DCB25FBE_TICK_OFFSET UNITYSDK_OFFSET(0x16F2ECD0)
#define CLASS_2_2F7C2986DCB25FBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2E780)

inline static constexpr unsigned int Class_2_2F7C2986DCB25FBE_TypeDefinitionIndex = 52451;

class Class_2_2F7C2986DCB25FBE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::CharacterPlayVO* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterPlayVO* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterPlayVO*))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_04494A59ADCD014E(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_METHOD_2_04494A59ADCD014E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_DE18C695F9CF259F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_METHOD_2_DE18C695F9CF259F_OFFSET))(this);
	}

	::System::Void Method_2_5AD7EA9F1126DF19(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F7C2986DCB25FBE_METHOD_2_5AD7EA9F1126DF19_OFFSET))(this, a1, a2);
	}
};
