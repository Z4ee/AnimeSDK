#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_14;
class Class_1_FA12497BD56B0812;
class Class_2_6AA7CA7493367EF4;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4E9DE93839400695_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEA568F0)
#define CLASS_1_4E9DE93839400695_TICK_OFFSET UNITYSDK_OFFSET(0xEA57020)
#define CLASS_1_4E9DE93839400695__CTOR_OFFSET UNITYSDK_OFFSET(0xEA56670)

inline static constexpr unsigned int Class_1_4E9DE93839400695_TypeDefinitionIndex = 63205;

class Class_1_4E9DE93839400695 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FA12497BD56B0812*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_6AA7CA7493367EF4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6AA7CA7493367EF4*))((::PBYTE)hIl2Cpp + CLASS_1_4E9DE93839400695__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_14* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_14*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4E9DE93839400695_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E9DE93839400695_TICK_OFFSET))(this, a1);
	}
};
