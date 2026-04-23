#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_17;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_24979E779AF81F02_EXECUTE_OFFSET UNITYSDK_OFFSET(0x128082B0)
#define CLASS_1_24979E779AF81F02_GET_ALLCHIMERAS_OFFSET UNITYSDK_OFFSET(0x128086C0)
#define CLASS_1_24979E779AF81F02_TICK_OFFSET UNITYSDK_OFFSET(0x12808660)
#define CLASS_1_24979E779AF81F02__CTOR_OFFSET UNITYSDK_OFFSET(0x12808050)

inline static constexpr unsigned int Class_1_24979E779AF81F02_TypeDefinitionIndex = 71234;

class Class_1_24979E779AF81F02 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _AllChimeras_k__BackingField; // 0x10

	::System::Void _ctor(::Class_2_6AA7CA7493367EF4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_24979E779AF81F02__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_17* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_17*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_24979E779AF81F02_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_24979E779AF81F02_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllChimeras()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24979E779AF81F02_GET_ALLCHIMERAS_OFFSET))(this);
	}
};
