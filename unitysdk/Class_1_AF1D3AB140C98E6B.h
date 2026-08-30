#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_27;
class Class_2_FB9CF047C8AEAA83;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AF1D3AB140C98E6B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18093160)
#define CLASS_1_AF1D3AB140C98E6B_GET_ALLCHIMERAS_OFFSET UNITYSDK_OFFSET(0x180934F0)
#define CLASS_1_AF1D3AB140C98E6B_TICK_OFFSET UNITYSDK_OFFSET(0x18093490)
#define CLASS_1_AF1D3AB140C98E6B__CTOR_OFFSET UNITYSDK_OFFSET(0x18092E80)

inline static constexpr unsigned int Class_1_AF1D3AB140C98E6B_TypeDefinitionIndex = 77181;

class Class_1_AF1D3AB140C98E6B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _AllChimeras_k__BackingField; // 0x10

	::System::Void _ctor(::Class_2_FB9CF047C8AEAA83* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FB9CF047C8AEAA83*))((::PBYTE)hIl2Cpp + CLASS_1_AF1D3AB140C98E6B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_27* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_27*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_AF1D3AB140C98E6B_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AF1D3AB140C98E6B_TICK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllChimeras()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF1D3AB140C98E6B_GET_ALLCHIMERAS_OFFSET))(this);
	}
};
