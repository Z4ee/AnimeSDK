#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationManager; }
namespace RPG::Client { class ChimeraModule; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define CLASS_1_56D27126E41B1789_METHOD_1_02915DAC169AEDDE_OFFSET UNITYSDK_OFFSET(0x8A8A390)
#define CLASS_1_56D27126E41B1789_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x8A8A340)
#define CLASS_1_56D27126E41B1789_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8A8A300)
#define CLASS_1_56D27126E41B1789_METHOD_1_7477D8A78152D178_OFFSET UNITYSDK_OFFSET(0x8A8A5E0)
#define CLASS_1_56D27126E41B1789_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x8A8A630)
#define CLASS_1_56D27126E41B1789_METHOD_1_C10CC188B4EFB029_OFFSET UNITYSDK_OFFSET(0x8A8A510)
#define CLASS_1_56D27126E41B1789_METHOD_1_CD9AEFAEBED246E8_OFFSET UNITYSDK_OFFSET(0x8A8A480)
#define CLASS_1_56D27126E41B1789__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8A2F0)

inline static constexpr unsigned int Class_1_56D27126E41B1789_TypeDefinitionIndex = 51556;

class Class_1_56D27126E41B1789 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraEvaluationCondition* Field_1_2; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_02915DAC169AEDDE()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_02915DAC169AEDDE_OFFSET))(this);
	}

	::RPG::Client::ChimeraModule* Method_1_CD9AEFAEBED246E8()
	{
		return ((::RPG::Client::ChimeraModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_CD9AEFAEBED246E8_OFFSET))(this);
	}

	::RPG::Client::ChimeraEvaluationManager* Method_1_C10CC188B4EFB029()
	{
		return ((::RPG::Client::ChimeraEvaluationManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_C10CC188B4EFB029_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_7477D8A78152D178()
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_7477D8A78152D178_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
