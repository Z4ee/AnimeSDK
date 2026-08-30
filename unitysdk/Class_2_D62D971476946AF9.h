#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EF0906550EDD6E82;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomManage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D62D971476946AF9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB84A050)
#define CLASS_2_D62D971476946AF9_METHOD_2_7AB2A7695E303980_OFFSET UNITYSDK_OFFSET(0xB84A530)
#define CLASS_2_D62D971476946AF9_METHOD_2_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0xB84CA30)
#define CLASS_2_D62D971476946AF9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB84A0F0)
#define CLASS_2_D62D971476946AF9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB84C9E0)
#define CLASS_2_D62D971476946AF9_TICK_OFFSET UNITYSDK_OFFSET(0xB84A090)
#define CLASS_2_D62D971476946AF9__CCTOR_OFFSET UNITYSDK_OFFSET(0xB84CF50)
#define CLASS_2_D62D971476946AF9__CTOR_OFFSET UNITYSDK_OFFSET(0xB84A000)

inline static constexpr unsigned int Class_2_D62D971476946AF9_TypeDefinitionIndex = 58595;

class Class_2_D62D971476946AF9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_LGCFDMOGACA()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D62D971476946AF9_TypeDefinitionIndex)->GetStaticField(0x12410);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OLHGEGCKCBE; // 0x18
	::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x20
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage*))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7AB2A7695E303980(::Class_1_EF0906550EDD6E82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0906550EDD6E82*))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9_METHOD_2_7AB2A7695E303980_OFFSET))(this, a1);
	}

	::System::Void Method_2_D754D5F3490FC4F3(::Class_1_EF0906550EDD6E82* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF0906550EDD6E82*))((::PBYTE)hIl2Cpp + CLASS_2_D62D971476946AF9_METHOD_2_D754D5F3490FC4F3_OFFSET))(this, a1);
	}
};
