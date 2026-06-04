#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/NewIK.h"

namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverLimb; }

#define RPG_CLIENT_FULLBODY_NEWLIMBIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0xBAA3460)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xBAA38A0)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xBAA3910)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xBAA3980)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBAA3830)
#define RPG_CLIENT_FULLBODY_NEWLIMBIK__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA39F0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int NewLimbIK_TypeDefinitionIndex = 69353;

	class NewLimbIK : public ::RPG::Client::FullBody::NewIK
	{
	public:
		::RPG::Client::FullBody::IKSolverLimb* solver; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_7_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_METHOD_7_4343F372F34C05BF_3_OFFSET))(this);
		}

		::RPG::Client::FullBody::IKSolver* GetIKSolver()
		{
			return ((::RPG::Client::FullBody::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWLIMBIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
