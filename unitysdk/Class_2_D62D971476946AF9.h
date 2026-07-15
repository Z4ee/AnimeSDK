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

#define CLASS_2_D62D971476946AF9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152E6EA0)
#define CLASS_2_D62D971476946AF9_METHOD_2_7AB2A7695E303980_OFFSET UNITYSDK_OFFSET(0x152E7380)
#define CLASS_2_D62D971476946AF9_METHOD_2_D754D5F3490FC4F3_OFFSET UNITYSDK_OFFSET(0x152E9880)
#define CLASS_2_D62D971476946AF9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152E6F40)
#define CLASS_2_D62D971476946AF9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152E9830)
#define CLASS_2_D62D971476946AF9_TICK_OFFSET UNITYSDK_OFFSET(0x152E6EE0)
#define CLASS_2_D62D971476946AF9__CCTOR_OFFSET UNITYSDK_OFFSET(0x152E9DA0)
#define CLASS_2_D62D971476946AF9__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6E50)

inline static constexpr unsigned int Class_2_D62D971476946AF9_TypeDefinitionIndex = 55829;

class Class_2_D62D971476946AF9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D62D971476946AF9_TypeDefinitionIndex)->GetStaticField(0x56AD0);
	}
	::RPG::Client::AdventurePhase* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_2; // 0x20
	::RPG::GameCore::RogueDLC1Dot3AdventureRoomManage* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_4; // 0x30

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
