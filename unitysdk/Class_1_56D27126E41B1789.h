#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraEvaluationManager; }
namespace RPG::Client { class ChimeraModule; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class ChimeraEvaluationCondition; }

#define CLASS_1_56D27126E41B1789_METHOD_1_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x18B6ABE0)
#define CLASS_1_56D27126E41B1789_METHOD_1_2031019B4DADC784_OFFSET UNITYSDK_OFFSET(0x18B6AC90)
#define CLASS_1_56D27126E41B1789_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18B6ABA0)
#define CLASS_1_56D27126E41B1789_METHOD_1_7477D8A78152D178_OFFSET UNITYSDK_OFFSET(0x18B6AEA0)
#define CLASS_1_56D27126E41B1789_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18B6AEF0)
#define CLASS_1_56D27126E41B1789_METHOD_1_C10CC188B4EFB029_OFFSET UNITYSDK_OFFSET(0x18B6ADD0)
#define CLASS_1_56D27126E41B1789_METHOD_1_CD9AEFAEBED246E8_OFFSET UNITYSDK_OFFSET(0x18B6AD40)
#define CLASS_1_56D27126E41B1789__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6AB90)

inline static constexpr unsigned int Class_1_56D27126E41B1789_TypeDefinitionIndex = 60695;

class Class_1_56D27126E41B1789 : public ::System::Object
{
public:
	::RPG::GameCore::ChimeraEvaluationCondition* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::ChimeraEvaluationCondition* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::ChimeraEvaluationCondition*))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_081E84DBAB5CA72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_081E84DBAB5CA72B_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise_1<::System::Boolean>* Method_1_2031019B4DADC784()
	{
		return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56D27126E41B1789_METHOD_1_2031019B4DADC784_OFFSET))(this);
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
