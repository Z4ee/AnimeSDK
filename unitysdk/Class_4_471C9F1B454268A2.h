#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8350EB57484CE308.h"

class Class_2_B66C1067C0468FBB;
class Class_2_DCFF4DF692D90D03;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_4_471C9F1B454268A2_METHOD_4_2BDA35FF9FE4DFDF_OFFSET UNITYSDK_OFFSET(0xACE8D20)
#define CLASS_4_471C9F1B454268A2_METHOD_4_69991F529EC8B8E0_OFFSET UNITYSDK_OFFSET(0xACE8C30)
#define CLASS_4_471C9F1B454268A2_METHOD_4_75FAC9CCCCA6B3B6_OFFSET UNITYSDK_OFFSET(0xACE8D10)
#define CLASS_4_471C9F1B454268A2_METHOD_4_BA13A8E9CC31465F_OFFSET UNITYSDK_OFFSET(0xACE8820)
#define CLASS_4_471C9F1B454268A2__CTOR_OFFSET UNITYSDK_OFFSET(0xACE87A0)
#define CLASS_4_471C9F1B454268A2__SELECTENTITYIDS_B__4_2_OFFSET UNITYSDK_OFFSET(0xACE8CB0)

inline static constexpr unsigned int Class_4_471C9F1B454268A2_TypeDefinitionIndex = 72163;

class Class_4_471C9F1B454268A2 : public ::Class_3_8350EB57484CE308
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_4_0; // 0x30
	::System::Collections::Generic::Queue_1<::Class_2_DCFF4DF692D90D03*>* Field_4_1; // 0x38
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* Field_4_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_BA13A8E9CC31465F(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2_METHOD_4_BA13A8E9CC31465F_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_69991F529EC8B8E0()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2_METHOD_4_69991F529EC8B8E0_OFFSET))(this);
	}

	::System::Boolean _SelectEntityIDs_b__4_2(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2__SELECTENTITYIDS_B__4_2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Method_4_75FAC9CCCCA6B3B6(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2_METHOD_4_75FAC9CCCCA6B3B6_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* Method_4_2BDA35FF9FE4DFDF()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_471C9F1B454268A2_METHOD_4_2BDA35FF9FE4DFDF_OFFSET))(this);
	}
};
