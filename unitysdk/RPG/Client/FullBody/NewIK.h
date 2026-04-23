#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/NewSolverManager.h"

namespace RPG::Client::FullBody { class IKSolver; }

#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xA408EC0)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_6CB77B844294EB6C_OFFSET UNITYSDK_OFFSET(0xA408D70)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xA408FC0)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA409150)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA4091D0)
#define RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4090D0)
#define RPG_CLIENT_FULLBODY_NEWIK__CTOR_OFFSET UNITYSDK_OFFSET(0xA4090B0)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int NewIK_TypeDefinitionIndex = 68378;

	class NewIK : public ::RPG::Client::FullBody::NewSolverManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK__CTOR_OFFSET))(this);
		}

		::System::Void Method_6_6CB77B844294EB6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_6CB77B844294EB6C_OFFSET))(this);
		}

		::System::Void Method_6_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_6_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_NEWIK_METHOD_6_CA373AA1C7054598_2_OFFSET))(this);
		}
	};
}
