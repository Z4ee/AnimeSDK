#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1293;
namespace RPG::Client::Prop { class DuelChimeraProxy; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A331969222E4A3BB_METHOD_1_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x17E0E410)
#define CLASS_1_A331969222E4A3BB_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x17E0DDE0)
#define CLASS_1_A331969222E4A3BB_METHOD_1_7619D212F4D762A1_OFFSET UNITYSDK_OFFSET(0x17E0DFE0)
#define CLASS_1_A331969222E4A3BB__CTOR_OFFSET UNITYSDK_OFFSET(0x17E0DC00)

inline static constexpr unsigned int Class_1_A331969222E4A3BB_TypeDefinitionIndex = 77193;

class Class_1_A331969222E4A3BB : public ::System::Object
{
public:
	::UnityEngine::Transform* HKJLKMCDMGB; // 0x10
	::RPG::Client::Prop::DuelChimeraProxy* COKDGBEABHP; // 0x18
	::UnityEngine::Transform* IBLBKLNHKLL; // 0x20
	::System::Single FLHOEGBFPJB; // 0x28
	::System::Boolean HCOFMFKFMDK; // 0x2C
	::System::Single LLNIGIGFCEA; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::DuelChimeraProxy* a3, ::Class_0_16E4307DCC419505_1293* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::DuelChimeraProxy*, ::Class_0_16E4307DCC419505_1293*))((::PBYTE)hIl2Cpp + CLASS_1_A331969222E4A3BB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A331969222E4A3BB_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_7619D212F4D762A1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A331969222E4A3BB_METHOD_1_7619D212F4D762A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A331969222E4A3BB_METHOD_1_03A81715BD2AFEF3_OFFSET))(this);
	}
};
